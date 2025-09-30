// Fill out your copyright notice in the Description page of Project Settings.


#include "WDamageZone.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"


AWDamageZone::AWDamageZone()
{
    PrimaryActorTick.bCanEverTick = false;

}

void AWDamageZone::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{


}

void AWDamageZone::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

void AWDamageZone::ApplyDamage(AActor* DamagedActor)
{
}

