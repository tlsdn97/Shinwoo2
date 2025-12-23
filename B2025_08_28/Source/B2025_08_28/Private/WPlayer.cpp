// Fill out your copyright notice in the Description page of Project Settings.


#include "WPlayer.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h" 
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/SphereComponent.h"

#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "DrawDebugHelpers.h"
#include "Engine/DamageEvents.h"
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
    bIsAttacking = false;
    bReplicates = true;
    PotionCount = 0;

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

void AWPlayer::Attack()
{
    if (bIsAttacking) return;
    bIsAttacking = true;

    UE_LOG(LogTemp, Warning, TEXT("Player Attack Start"));

    // 공격 트레이스 수행
    PerformAttackTrace();

    // 쿨타임 설정
    FTimerHandle TimerHandle;
    GetWorldTimerManager().SetTimer(TimerHandle, [this]()
        {
            bIsAttacking = false;
            UE_LOG(LogTemp, Warning, TEXT("Player Attack End"));
        }, 0.4f, false);
}

void AWPlayer::PerformAttackTrace()
{
    FHitResult hitResult;
    FCollisionQueryParams params(NAME_None, false, this);

    float AttackRange = 200.0f;   // 공격 범위
    float AttackRadius = 100.0f;  // 캡슐 반경
    float DamageAmount = 30.0f;   // 고정 데미지

    // 전방 벡터 및 회전 계산
    FVector Forward = GetActorForwardVector();
    FVector Start = GetActorLocation() + Forward * (AttackRange * 0.5f);
    FVector End = GetActorLocation() + Forward * (AttackRange * 0.5f);

    // Sweep에 사용할 회전값 (Z Up → Forward로 회전)
    FQuat CapsuleRotation = FQuat::FindBetweenVectors(FVector(0, 0, 1), Forward);

    // Sweep 충돌 감지 (채널링)
    bool bHit = GetWorld()->SweepSingleByChannel(
        OUT hitResult,
        Start,
        End,
        CapsuleRotation,
        ECC_GameTraceChannel1,  // 공격용 트레이스 채널 (프로젝트 세팅에서 설정)
        FCollisionShape::MakeCapsule(AttackRadius, AttackRange * 0.5f),
        params
    );

    // 디버그용 색상 설정
    FColor DrawColor = bHit ? FColor::Red : FColor::Green;

    // 피격 판정
    if (bHit && hitResult.GetActor()->IsValidLowLevel())
    {
        AActor* Victim = hitResult.GetActor();

        if (Victim && Victim != this) // 자기 자신 제외
        {
            FDamageEvent DamageEvent;
            Victim->TakeDamage(DamageAmount, DamageEvent, GetController(), this);
        }
    }

    // 충돌 캡슐 시각화 (1초 동안 표시)
    FVector Center = GetActorLocation() + Forward * (AttackRange * 0.5f);
    DrawDebugCapsule(GetWorld(), Center, AttackRange * 0.5f, AttackRadius, CapsuleRotation, DrawColor, false, 1.0f);
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

