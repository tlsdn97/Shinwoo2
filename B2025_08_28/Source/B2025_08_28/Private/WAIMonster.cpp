// Fill out your copyright notice in the Description page of Project Settings.


#include "WAIMonster.h"
#include "WAIHpWidget.h"
#include "AIController.h"
#include "WAIController.h"

#include "Components/WidgetComponent.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"

#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h" 
#include "Blueprint/UserWidget.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"

AWAIMonster::AWAIMonster()
{
	PrimaryActorTick.bCanEverTick = false;

    MaxHP = 100.f;
    CurrentHP = MaxHP;

    // 플레이어 감지 캡슐
    DetectionCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DetectionCapsule"));
    DetectionCapsule->SetupAttachment(RootComponent);
    DetectionCapsule->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    DetectionCapsule->SetCollisionResponseToAllChannels(ECR_Ignore);
    DetectionCapsule->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    DetectionCapsule->SetGenerateOverlapEvents(true);

    // 데미지 주는 콜리전
    DamageSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DamageSphere"));
    DamageSphere->SetupAttachment(RootComponent);
    DamageSphere->InitSphereRadius(100.f);
    DamageSphere->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
    DamageSphere->SetGenerateOverlapEvents(true);

    // HP Widget
    hpFloatingWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("floatingWidget"));
    hpFloatingWidget->SetupAttachment(RootComponent);
    hpFloatingWidget->SetRelativeLocation(FVector(0, 0, 125));
    hpFloatingWidget->SetWorldScale3D(FVector(1.0, 0.23, 0.03));
    hpFloatingWidget->SetWidgetSpace(EWidgetSpace::Screen);
}

float AWAIMonster::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    float ActualDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

    MaxHP -= ActualDamage;

    if (MaxHP <= 0.f)
    {
        MaxHP = 0.f;
        Destroy();
    }

    UE_LOG(LogTemp, Warning, TEXT("몬스터가 데미지를 입음! 현재 HP: %f"), MaxHP);

    return ActualDamage;
}

void AWAIMonster::HandleDeath()
{
    UE_LOG(LogTemp, Warning, TEXT("Monster Dead"));
    Destroy();
}

void AWAIMonster::BeginPlay()
{
    Super::BeginPlay();

    CurrentHP = MaxHP;

    if (AWAIController* AICon = Cast<AWAIController>(GetController()))
    {
        AICon->SetHomeLocation(GetActorLocation());
    }

    DetectionCapsule->SetCapsuleSize(CapsuleRadius, CapsuleHalfHeight);

    DetectionCapsule->OnComponentBeginOverlap.AddDynamic(this, &AWAIMonster::OnDetectionBegin);
    DetectionCapsule->OnComponentEndOverlap.AddDynamic(this, &AWAIMonster::OnDetectionEnd);

    DamageSphere->OnComponentBeginOverlap.AddDynamic(this, &AWAIMonster::OnDamageOverlapBegin);
    DamageSphere->OnComponentEndOverlap.AddDynamic(this, &AWAIMonster::OnDamageOverlapEnd);
}


void AWAIMonster::OnDetectionBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    APawn* Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if (OtherActor == Player)
    {
        if (AWAIController* AICon = Cast<AWAIController>(GetController()))
        {
            AICon->SetTargetActors(Player);
        }
    }
}

void AWAIMonster::OnDetectionEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    APawn* Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if (OtherActor == Player)
    {
        if (AWAIController* AICon = Cast<AWAIController>(GetController()))
        {
            AICon->SetTargetActors(nullptr);
        }
    }
}

void AWAIMonster::ApplyPeriodicDamage()
{
    if (CurrentTarget)
    {
        UGameplayStatics::ApplyDamage(
            CurrentTarget,
            DamagePerTick,
            GetController(),
            this,
            UDamageType::StaticClass()
        );
    }
}

void AWAIMonster::OnDamageOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor->ActorHasTag("Player"))
    {
        CurrentTarget = OtherActor;

        // 일정 주기로 데미지 주기 시작
        GetWorldTimerManager().SetTimer(
            DamageTimerHandle,
            this,
            &AWAIMonster::ApplyPeriodicDamage,
            DamageInterval,
            true  // 반복
        );
    }
}

void AWAIMonster::OnDamageOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (OtherActor == CurrentTarget)
    {
        GetWorldTimerManager().ClearTimer(DamageTimerHandle);
        CurrentTarget = nullptr;
    }
}


