// Fill out your copyright notice in the Description page of Project Settings.


#include "WAIHpWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UWAIHpWidget::UpdateHP(float Current, float Max)
{
    if (HPBar)
    {
        HPBar->SetPercent(Current / Max);
    }
    if (HPText)
    {
        HPText->SetText(FText::FromString(FString::Printf(TEXT("%d / %d"),
            FMath::RoundToInt(Current), FMath::RoundToInt(Max))));
    }

}
