// Fill out your copyright notice in the Description page of Project Settings.


#include "WPlayerHpWidget.h"
#include "Components/ProgressBar.h"
#include "WPlayer.h"

void UWPlayerHpWidget::NativeConstruct()
{
    Super::NativeConstruct();

    AWPlayer* Player = Cast<AWPlayer>(GetOwningPlayerPawn());
    if (Player)
    {
        Player->OnHealthChanged.AddDynamic(this, &UWPlayerHpWidget::UpdateHealthBar);
        UpdateHealthBar(Player->Health / Player->MaxHealth);
    }
}

void UWPlayerHpWidget::UpdateHealthBar(float NewHealthPercent)
{
    if (PlayerHp)
    {
        PlayerHp->SetPercent(NewHealthPercent);
    }
}

