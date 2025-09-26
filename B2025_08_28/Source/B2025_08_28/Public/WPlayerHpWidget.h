// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WPlayerHpWidget.generated.h"

/**
 * 
 */
UCLASS()
class B2025_08_28_API UWPlayerHpWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void UpdateHP(float Percent);
protected:
	UPROPERTY(meta = (BindWdiget))
	class UProgressBar* PHpBar;
	
};
