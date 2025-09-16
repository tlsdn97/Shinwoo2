// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WAIMonster.generated.h"

UCLASS()
class B2025_08_28_API AWAIMonster : public ACharacter
{
	GENERATED_BODY()

public:
	AWAIMonster();

    UFUNCTION()
    void TakeDamageFromBullet(float Damage);

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, Category = "HP")
    float MaxHP = 100.f;

    UPROPERTY(VisibleAnywhere, Category = "HP")
    float CurrentHP;

    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<class UWAIHpWidget> HPWidgetClass;

    UPROPERTY()
    UWAIHpWidget* HPWidget;
};
