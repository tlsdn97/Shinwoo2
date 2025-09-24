// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "WAIController.generated.h"

/**
 * 
 */
UCLASS()
class B2025_08_28_API AWAIController : public AAIController
{
    GENERATED_BODY()
public:
    AWAIController();

    virtual void OnPossess(APawn* InPawn) override;

    class UBlackboardComponent* GetBB() const { return BlackboardComp; }

    void SetTargetActors(AActor* Target);
    void SetHomeLocation(const FVector& Loc);

protected:
    UPROPERTY(EditDefaultsOnly, Category = "AI")
    class UBehaviorTree* BehaviorTreeAsset;

private:
    UPROPERTY()
    class UBlackboardComponent* BlackboardComp;

    UPROPERTY()
    class UBehaviorTreeComponent* BehaviorComp;
};
