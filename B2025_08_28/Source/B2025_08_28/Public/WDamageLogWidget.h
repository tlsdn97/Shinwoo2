// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WDamageLogWidget.generated.h"

/**
 * 
 */
UCLASS()
class B2025_08_28_API UWDamageLogWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
    UPROPERTY(meta = (BindWidget))
    class UTextBlock* DamageText;

    UPROPERTY()
    AActor* TargetActor;

    FVector WorldOffset;

    void InitWidget(AActor* InActor, int32 Damage, int32 Total, FVector InOffset);

    virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
};
