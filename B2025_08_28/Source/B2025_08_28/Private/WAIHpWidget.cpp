// Fill out your copyright notice in the Description page of Project Settings.


#include "WAIHpWidget.h"
#include "Components/ProgressBar.h"


void UWAIHpWidget::UpdateHpBar(float currentHp, float maxHp)
{
	if (maxHp <= 0.0f)
	{
		return;
	}
	currentHp = FMath::Max(currentHp, 0.0f);
	if (IsValid(pb_healthBar))
	{
		pb_healthBar->SetPercent(FMath::Clamp(currentHp / maxHp, 0.0f, 1.0f));
	}
}
