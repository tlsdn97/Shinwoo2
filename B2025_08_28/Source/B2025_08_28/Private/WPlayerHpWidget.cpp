// Fill out your copyright notice in the Description page of Project Settings.


#include "WPlayerHpWidget.h"
#include "Components/ProgressBar.h"

void UWPlayerHpWidget::NativeConstruct()
{

}

void UWPlayerHpWidget::PUpdateHpBar(float CurrentHp, float MaxHp)
{
	if (PlayerHp)
	{
		PlayerHp->SetPercent(FMath::Clamp(CurrentHp / MaxHp, 0.0f, 1.0f));
	}
}
