// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "WAIAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class B2025_08_28_API UWAIAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	bool bIsChasing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	bool bIsAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	UAnimMontage* AttackMontage;

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable)
	void PlayAttackMontage();
};
