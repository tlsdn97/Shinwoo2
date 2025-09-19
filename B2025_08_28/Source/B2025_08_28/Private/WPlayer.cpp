// Fill out your copyright notice in the Description page of Project Settings.


#include "WPlayer.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h" 
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"

#include "PWeapon.h"
#include "WAnimInstance.h"
#include "Animation/AnimInstance.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "GameFramework/Controller.h"
#include <Net/UnrealNetwork.h>

AWPlayer::AWPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

    FireRate = 0.15f; 
    bIsFiring = false;

    bReplicates = true;
    SetReplicateMovement(true);

    GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

    SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
    SpringArmComp->SetupAttachment(RootComponent);
    SpringArmComp->TargetArmLength = 300.0f;
    SpringArmComp->bUsePawnControlRotation = true; 

    CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
    CameraComp->SetupAttachment(SpringArmComp);
    CameraComp->bUsePawnControlRotation = false;

    GetCharacterMovement()->MaxWalkSpeed = ForwardSpeed;
}

void AWPlayer::BeginPlay()
{
    Super::BeginPlay();
    DefaultFOV = CameraComp->FieldOfView;

    if (WeaponClass)
    {
        EquippedWeapon = GetWorld()->SpawnActor<APWeapon>(WeaponClass);
        if (EquippedWeapon)
        {
            EquippedWeapon->AttachToCharacter(this);
        }
    }
}

void AWPlayer::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    float TargetFOV = bWantsToZoom ? ZoomedFOV : DefaultFOV;
    float NewFOV = FMath::FInterpTo(CameraComp->FieldOfView, TargetFOV, DeltaSeconds, ZoomInterpSpeed);
    CameraComp->SetFieldOfView(NewFOV);
}

void AWPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveForward", this, &AWPlayer::FMoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AWPlayer::FMoveRight);
    PlayerInputComponent->BindAxis("LookUp", this, &AWPlayer::FLookUp);
    PlayerInputComponent->BindAxis("Turn", this, &AWPlayer::FTurn);

    PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AWPlayer::StartFire);
    PlayerInputComponent->BindAction("Fire", IE_Released, this, &AWPlayer::StopFire);
    PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AWPlayer::BeginZoom);
    PlayerInputComponent->BindAction("Aim", IE_Released, this, &AWPlayer::EndZoom);
}

void AWPlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void AWPlayer::FMoveForward(float Value)
{
    if (Controller && Value != 0.0f)
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

        if (Value > 0)
        {
            GetCharacterMovement()->MaxWalkSpeed = ForwardSpeed;
        }
        else
        {
            GetCharacterMovement()->MaxWalkSpeed = BackwardSpeed;
        }

        AddMovementInput(Direction, Value);
    }
}

void AWPlayer::FMoveRight(float Value)
{
    if (Controller && Value != 0.0f)
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
        AddMovementInput(Direction, Value);
    }
}

void AWPlayer::FLookUp(float Value)
{
    AddControllerPitchInput(Value);
}

void AWPlayer::FTurn(float Value)
{
    AddControllerYawInput(Value);
}

void AWPlayer::StartFire()
{
    if (EquippedWeapon)
    {
        EquippedWeapon->FStopFire();
    }

    if (UWAnimInstance* AnimInst = Cast<UWAnimInstance>(GetMesh()->GetAnimInstance()))
    {
        AnimInst->SetIsFiring(true);
    }

    PlayFireMontage();
}
void AWPlayer::StopFire()
{
    if (EquippedWeapon)
    {
        EquippedWeapon->FStopFire();
    }

    if (UWAnimInstance* AnimInst = Cast<UWAnimInstance>(GetMesh()->GetAnimInstance()))
    {
        AnimInst->SetIsFiring(false);
    }
}

void AWPlayer::HandleFire()
{
    // PlayFireMontage();
}

void AWPlayer::PlayFireMontage()
{
    if (FireMontage == nullptr) return;

    if (UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance())
    {
        if (!AnimInstance->Montage_IsPlaying(FireMontage))
        {
            AnimInstance->Montage_Play(FireMontage, 1.0f);
        }
    }
}

void AWPlayer::BeginZoom()
{
    bWantsToZoom = true;
}

void AWPlayer::EndZoom()
{
    bWantsToZoom = false;
}

APWeapon* AWPlayer::GetEquippedWeapon() const
{
    return EquippedWeapon;
}
