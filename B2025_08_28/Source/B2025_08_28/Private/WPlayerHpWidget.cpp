// Fill out your copyright notice in the Description page of Project Settings.


#include "WPlayerHpWidget.h"
#include "Components/ProgressBar.h"

void UWPlayerHpWidget::UpdateHP(float Percent)
{
    if (PHpBar)
    {
        PHpBar->SetPercent(Percent);
    }
}
