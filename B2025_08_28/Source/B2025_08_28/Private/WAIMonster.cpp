// Fill out your copyright notice in the Description page of Project Settings.


#include "WAIMonster.h"
#include "Components/WidgetComponent.h"
#include "WAIHpWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"

AWAIMonster::AWAIMonster()
{
	PrimaryActorTick.bCanEverTick = false;
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
}
