// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "WBTService_UpdateTarget.generated.h"

/**
 * 
 */
UCLASS()
class B2025_08_28_API UWBTService_UpdateTarget : public UBTService
{
	GENERATED_BODY()
public:
	UWBTService_UpdateTarget();
	
protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};