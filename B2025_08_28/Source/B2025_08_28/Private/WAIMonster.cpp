// Fill out your copyright notice in the Description page of Project Settings.


#include "WAIMonster.h"
#include "Components/WidgetComponent.h"
#include "WAIHpWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "WAIController.h"
#include "PWeapon.h"
#include "AIController.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Actor.h"

AWAIMonster::AWAIMonster()
{
	PrimaryActorTick.bCanEverTick = false;

    DetectionCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DetectionCapsule"));
    DetectionCapsule->SetupAttachment(RootComponent);
    DetectionCapsule->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    DetectionCapsule->SetCollisionResponseToAllChannels(ECR_Ignore);
    DetectionCapsule->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    DetectionCapsule->SetGenerateOverlapEvents(true);
}

void AWAIMonster::TakeDamageFromBullet(float Damage)
{
    CurrentHP = FMath::Clamp(CurrentHP - Damage, 0.f, MaxHP);

    if (HPWidget)
    {
        HPWidget->UpdateHP(CurrentHP, MaxHP);
    }

    if (CurrentHP <= 0.f)
    {
        Destroy(); 
    }

}

void AWAIMonster::HandleWeaponDamage(AActor* DamagedActor, float Damage)
{
    if (DamagedActor != this) return;

    Health -= Damage;
    UE_LOG(LogTemp, Warning, TEXT("Took %.1f dmg, HP: %.1f"), Damage, Health);
    if (Health <= 0.f)
    {
        Destroy();
    }
}

void AWAIMonster::BeginPlay()
{
    Super::BeginPlay();

    CurrentHP = MaxHP;

    if (HPWidgetClass)
    {
        HPWidget = CreateWidget<UWAIHpWidget>(GetWorld(), HPWidgetClass);
        if (HPWidget)
        {
            HPWidget->AddToViewport();
            HPWidget->UpdateHP(CurrentHP, MaxHP);
        }
    }

    if (AWAIController* AICon = Cast<AWAIController>(GetController()))
    {
        AICon->SetHomeLocation(GetActorLocation());
    }

    DetectionCapsule->SetCapsuleSize(CapsuleRadius, CapsuleHalfHeight);

    DetectionCapsule->OnComponentBeginOverlap.AddDynamic(this, &AWAIMonster::OnDetectionBegin);
    DetectionCapsule->OnComponentEndOverlap.AddDynamic(this, &AWAIMonster::OnDetectionEnd);
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


