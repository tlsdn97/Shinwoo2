// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "WHUD.generated.h"

/**
 * 
 */
UCLASS()
class B2025_08_28_API AWHUD : public AHUD
{
	GENERATED_BODY()
public:
    virtual void BeginPlay() override;

protected:
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<class UWCrossHairWidget> CrosshairClass;

    UPROPERTY()
    class UWCrossHairWidget* CrosshairWidget;
};
