// Fill out your copyright notice in the Description page of Project Settings.


#include "WAIMonster.h"
#include "Components/WidgetComponent.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/Actor.h"
#include "WAIController.h"
#include "AIController.h"
#include "WAIHpWidget.h"
#include "PWeapon.h"


AWAIMonster::AWAIMonster()
{
	PrimaryActorTick.bCanEverTick = false;

    DetectionCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DetectionCapsule"));
    DetectionCapsule->SetupAttachment(RootComponent);
    DetectionCapsule->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    DetectionCapsule->SetCollisionResponseToAllChannels(ECR_Ignore);
    DetectionCapsule->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    DetectionCapsule->SetGenerateOverlapEvents(true);

    DamageSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DamageSphere"));
    DamageSphere->SetupAttachment(RootComponent);
    DamageSphere->InitSphereRadius(100.f);
    DamageSphere->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
    DamageSphere->SetGenerateOverlapEvents(true);

    hpFloatingWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("floatingWidget"));
    hpFloatingWidget->SetupAttachment(RootComponent);
    hpFloatingWidget->SetRelativeLocation(FVector(0, 0, 125));
    hpFloatingWidget->SetWorldScale3D(FVector(1.0, 0.23, 0.03));
    hpFloatingWidget->SetWidgetSpace(EWidgetSpace::Screen);
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

    DamageSphere->OnComponentBeginOverlap.AddDynamic(this, &AWAIMonster::OnDamageOverlap);
}

void AWAIMonster::OnDamageOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor->ActorHasTag("Player"))
    {
        UGameplayStatics::ApplyDamage(
            OtherActor,
            CollisionDamage,
            GetController(),
            this,
            UDamageType::StaticClass()
        );
    }
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


