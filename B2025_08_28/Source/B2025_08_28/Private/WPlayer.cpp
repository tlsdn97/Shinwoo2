// Fill out your copyright notice in the Description page of Project Settings.


#include "WPlayer.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h" 
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/WidgetComponent.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "GameFramework/Controller.h"
#include "Animation/AnimInstance.h"
#include "Kismet/GameplayStatics.h"
#include "PWeapon.h"
#include "WAnimInstance.h"
#include "TimerManager.h"
#include "WPlayerHpWidget.h"
#include "WDamageLogWidget.h"


AWPlayer::AWPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
    bIsFiring = false;

    TotalDamage = 0;

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

void AWPlayer::OnDamaged(int32 Damage)
{
    TotalDamage += Damage;

    if (!DamageWidgetClass) return;

    APlayerController* PC = Cast<APlayerController>(GetController());
    if (!PC)
    {
        PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    }
    if (!PC) return;

    UWDamageLogWidget* Widget = CreateWidget<UWDamageLogWidget>(PC, DamageWidgetClass);
    if (!Widget) return;

    FVector Offset(0.f, 0.f, 200.f);

    Widget->InitWidget(this, Damage, TotalDamage, Offset);
    Widget->AddToViewport();
}

void AWPlayer::BeginPlay()
{
    Super::BeginPlay();
    DefaultFOV = CameraComp->FieldOfView;

    CurrentHealth = MaxHealth;
    
    APlayerController* playerController = Cast<APlayerController>(GetController());
    if (playerController)
    {
        PlayerHpWidget = CreateWidget<UWPlayerHpWidget>(playerController, LoadClass<UWPlayerHpWidget>(nullptr, TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BluePrint/Player/WBP_PlayerHp.WBP_PlayerHp_C'")));

        if (PlayerHpWidget)
        {
            PlayerHpWidget->AddToViewport();
            UIUpdate();
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

    PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &AWPlayer::MeleeAattack);

    PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AWPlayer::BeginZoom);
    PlayerInputComponent->BindAction("Aim", IE_Released, this, &AWPlayer::EndZoom);
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

void AWPlayer::MeleeAattack()
{
    PlayAnimMontage(meleeAttackAniMontage, 1.0f);
}

void AWPlayer::BeginZoom()
{
    bWantsToZoom = true;
}

void AWPlayer::EndZoom()
{
    bWantsToZoom = false;
}

void AWPlayer::UIUpdate()
{
    if (PlayerHpWidget)
    {
        float HpPercent = CurrentHealth / MaxHealth;
        PlayerHpWidget->PlayerHp->SetPercent(HpPercent);
    }
}
