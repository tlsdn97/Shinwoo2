// Fill out your copyright notice in the Description page of Project Settings.


#include "WHUD.h"
#include "WCrossHairWidget.h"
#include "Blueprint/UserWidget.h"

void AWHUD::BeginPlay()
{
    Super::BeginPlay();

    if (CrosshairClass)
    {
        CrosshairWidget = CreateWidget<UWCrossHairWidget>(GetWorld(), CrosshairClass);
        if (CrosshairWidget)
        {
            CrosshairWidget->AddToViewport();
        }
    }
}
