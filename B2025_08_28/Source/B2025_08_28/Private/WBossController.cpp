// Fill out your copyright notice in the Description page of Project Settings.


#include "WBossController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "WBoss.h"

void AWBossController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    AWBoss* Boss = Cast<AWBoss>(InPawn);
    if (Boss && Boss->GetBehaviorTree())
    {
        BlackboardComp = NewObject<UBlackboardComponent>(this);
        BlackboardComp->InitializeBlackboard(*Boss->GetBehaviorTree()->BlackboardAsset);

        BehaviorComp = NewObject<UBehaviorTreeComponent>(this);
        BehaviorComp->StartTree(*Boss->GetBehaviorTree());
    }
}
