// Fill out your copyright notice in the Description page of Project Settings.


#include "WPlayer.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h" 
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/SphereComponent.h"

#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "WDamageLogWidget.h"
#include "WPlayerHpWidget.h"

#include "GameFramework/Controller.h"
#include "GameFramework/Actor.h"
#include "Animation/AnimInstance.h"
#include "Kismet/GameplayStatics.h"
#include "WAnimInstance.h"
#include "WAIMonster.h"


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

void AWPlayer::Attack_Hit()
{
    FVector Start = GetActorLocation();
    FVector End = Start + GetActorForwardVector() * 150.f;

    FHitResult HitResult;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);

    bool bHit = GetWorld()->SweepSingleByChannel(
        HitResult,
        Start,
        End,
        FQuat::Identity,
        static_cast<ECollisionChannel>(ECC_GameTraceChannel1),
        FCollisionShape::MakeSphere(50.f),
        Params
    );

    DrawDebugSphere(GetWorld(), End, 50.f, 16, FColor::Red, false, 1.0f);

    if (bHit)
    {
        AActor* HitActor = HitResult.GetActor();
        if (HitActor)
        {
            UE_LOG(LogTemp, Warning, TEXT("Hit: %s"), *HitActor->GetName());
            UGameplayStatics::ApplyDamage(HitActor, 30.f, GetController(), this, UDamageType::StaticClass());
        }
    }
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

    PlayerInputComponent->BindAction("Run", IE_Pressed, this, &AWPlayer::FStartRunning);
    PlayerInputComponent->BindAction("Run", IE_Released, this, &AWPlayer::FStopRunning);

    PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AWPlayer::BeginZoom);
    PlayerInputComponent->BindAction("Aim", IE_Released, this, &AWPlayer::EndZoom);
    PlayerInputComponent->BindAction("UsePotion", IE_Pressed, this, &AWPlayer::UsePotion);
}

void AWPlayer::FMoveForward(float Value)
{
    if (Controller && Value != 0.0f)
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

        // 기본 걷기 속도
        float Speed = (Value > 0) ? ForwardSpeed : BackwardSpeed;

        // 달리기 상태면 RunSpeed로 변경
        if (bIsRunning && Value > 0)
        {
            Speed = RunSpeed;
        }

        GetCharacterMovement()->MaxWalkSpeed = Speed;
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

void AWPlayer::FStartRunning()
{
    bIsRunning = true;
}

void AWPlayer::FStopRunning()
{
    bIsRunning = false;
}

void AWPlayer::UIUpdate()
{
    if (PlayerHpWidget)
    {
        float HpPercent = CurrentHealth / MaxHealth;
        PlayerHpWidget->PlayerHp->SetPercent(HpPercent);
    }
}

float AWPlayer::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    Health = FMath::Clamp(Health - DamageAmount, 0.f, MaxHealth);

    float HealthPercent = Health / MaxHealth;
    OnHealthChanged.Broadcast(HealthPercent);

    UE_LOG(LogTemp, Warning, TEXT("%s HP: %.1f / %.1f"), *GetName(), Health, MaxHealth);

    return DamageAmount;
}

void AWPlayer::UsePotion()
{
    if (PotionCount > 0 && Health < MaxHealth)
    {
        PotionCount--;
        Health = FMath::Clamp(Health + HealAmount, 0.f, MaxHealth);

        OnPotionCountChanged.Broadcast(PotionCount);
        OnHealthChanged.Broadcast(Health / MaxHealth);

        UE_LOG(LogTemp, Warning, TEXT("Used Potion | HP: %.1f / %.1f | Potions: %d"),
            Health, MaxHealth, PotionCount);
    }
    else
    {
        if (PotionCount <= 0)
        {
          UE_LOG(LogTemp, Warning, TEXT("No potions left."));
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("HP full."));
        }
    }
}

void AWPlayer::AddPotion(int32 Amount)
{
    PotionCount += Amount;
    OnPotionCountChanged.Broadcast(PotionCount);

    UE_LOG(LogTemp, Warning, TEXT("Potion added. Total: %d"), PotionCount);
}

