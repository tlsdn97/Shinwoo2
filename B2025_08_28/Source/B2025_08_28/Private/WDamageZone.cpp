// Fill out your copyright notice in the Description page of Project Settings.


#include "WDamageZone.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraComponent.h"


AWDamageZone::AWDamageZone()
{
    PrimaryActorTick.bCanEverTick = false;

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
    Collision->SetupAttachment(RootComponent);
    Collision->SetCollisionProfileName(TEXT("Trigger"));
    Collision->OnComponentBeginOverlap.AddDynamic(this, &AWDamageZone::OnOverlapBegin);
    Collision->OnComponentEndOverlap.AddDynamic(this, &AWDamageZone::OnOverlapEnd);

    FXComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FXComponent"));
    FXComponent->SetupAttachment(RootComponent);
    FXComponent->bAutoActivate = true;
}

void AWDamageZone::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor->ActorHasTag("Player"))
    {
        OverlappingActors.AddUnique(OtherActor);

        if (!GetWorldTimerManager().IsTimerActive(DamageTimerHandle))
        {
            GetWorldTimerManager().SetTimer(DamageTimerHandle, [this]()
                {
                    for (AActor* Actor : OverlappingActors)
                    {
                        ApplyDamage(Actor);
                    }
                }, DamageInterval, true);
        }
    }
}

void AWDamageZone::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    OverlappingActors.Remove(OtherActor);

    if (OverlappingActors.Num() == 0)
    {
        GetWorldTimerManager().ClearTimer(DamageTimerHandle);
    }
}

void AWDamageZone::ApplyDamage(AActor* DamagedActor)
{
    if (DamagedActor)
    {
        UGameplayStatics::ApplyDamage(DamagedActor, DamagePerTick, nullptr, this, nullptr);

        UE_LOG(LogTemp, Warning, TEXT("DamageZone: %s received %f damage"),
            *DamagedActor->GetName(), DamagePerTick);
    }
}

