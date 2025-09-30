// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Controller.h"
#include "WBossController.generated.h"

/**
 * 
 */
UCLASS()
class B2025_08_28_API AWBossController : public AController
{
	GENERATED_BODY()
	
    virtual void OnPossess(APawn* InPawn) override;

    UPROPERTY(Transient)
    class UBlackboardComponent* BlackboardComp;

    UPROPERTY(Transient)
    class UBehaviorTreeComponent* BehaviorComp;

public:
    UBlackboardComponent* GetBlackboardComponent() const { return BlackboardComp; }
};
