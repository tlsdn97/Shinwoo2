// Fill out your copyright notice in the Description page of Project Settings.


#include "WPlayer.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h" 
#include "Animation/AnimInstance.h"
#include "TimerManager.h"
#include "PWeapon.h"
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

    if (HasAuthority())
    {
        for (const TSubclassOf<APWeapon>& WeaponClass : DefaultWeapons)
        {
            if (!WeaponClass) continue;
            FActorSpawnParameters Params;
            Params.Owner = this;
            APWeapon* SpawnedWeapon = GetWorld()->SpawnActor<APWeapon>(WeaponClass, Params);
            const int32 Index = Weapons.Add(SpawnedWeapon);
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

    DOREPLIFETIME_CONDITION(AWPlayer, Weapons, COND_None);
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
    if (bIsFiring) return;
    bIsFiring = true;

    HandleFire();
    GetWorldTimerManager().SetTimer(FireTimerHandle, this, &AWPlayer::HandleFire, FireRate, true);
}
void AWPlayer::StopFire()
{
    bIsFiring = false;
    GetWorldTimerManager().ClearTimer(FireTimerHandle);
}

void AWPlayer::HandleFire()
{
    PlayFireMontage();
}

void AWPlayer::PlayFireMontage()
{
    if (FireMontage && GetMesh())
    {
        if (UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance())
        {
            AnimInstance->Montage_Play(FireMontage);
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

