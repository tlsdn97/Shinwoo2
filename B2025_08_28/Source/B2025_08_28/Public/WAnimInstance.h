// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "WAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class B2025_08_28_API UWAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
    virtual void NativeUpdateAnimation(float DeltaSeconds) override;

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
    float ForwardSpeed;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
    float RightSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim")
    TArray<UAnimSequence*> MovementAnimations;

};
