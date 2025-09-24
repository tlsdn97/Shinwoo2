// Fill out your copyright notice in the Description page of Project Settings.


#include "WBTTask_MoveToTarget.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Actor.h"

UWBTTask_MoveToTarget::UWBTTask_MoveToTarget()
{
	NodeName = TEXT("Move To Target");
}

EBTNodeResult::Type UWBTTask_MoveToTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    AAIController* AICon = OwnerComp.GetAIOwner();
    if (!AICon) return EBTNodeResult::Failed;

    UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
    if (!BB) return EBTNodeResult::Failed;

    AActor* Target = Cast<AActor>(BB->GetValueAsObject("TargetActor"));
    if (!Target) return EBTNodeResult::Failed;

    AICon->MoveToActor(Target, 100.f);
    return EBTNodeResult::Succeeded;
}
