// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WBoss.generated.h"

UCLASS()
class B2025_08_28_API AWBoss : public ACharacter
{
	GENERATED_BODY()

public:
	AWBoss();

protected:
	virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, Category = "AI")
   class UPawnSensingComponent* PawnSensingComp;

    UFUNCTION()
    void OnSeePawn(APawn* Pawn);

    UPROPERTY(EditDefaultsOnly, Category = "AI")
    class UBehaviorTree* BehaviorTree;

public:
    FORCEINLINE UBehaviorTree* GetBehaviorTree() const { return BehaviorTree; }
};
