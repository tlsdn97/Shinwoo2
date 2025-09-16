// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WAIHpWidget.generated.h"

/**
 * 
 */
UCLASS()
class B2025_08_28_API UWAIHpWidget : public UUserWidget
{
	GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void UpdateHP(float Current, float Max);

protected:
    UPROPERTY(meta = (BindWidget))
    class UProgressBar* HPBar;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* HPText;
};
