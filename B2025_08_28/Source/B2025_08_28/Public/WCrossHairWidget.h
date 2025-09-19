// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WCrossHairWidget.generated.h"

/**
 * 
 */
UCLASS()
class B2025_08_28_API UWCrossHairWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	class UImage* LineTop;
	UPROPERTY(meta = (BindWidget))
	class UImage* LineBottom;

	UPROPERTY(meta = (BindWidget))
	class UImage* LineLeft;

	UPROPERTY(meta = (BindWidget))
	class UImage* LineRight;

	UFUNCTION(BlueprintCallable, Category = "Crosshair")
	void UpdateCrosshairSize(const float Speed);
	
};
