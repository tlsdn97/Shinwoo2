// Fill out your copyright notice in the Description page of Project Settings.


#include "WAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

AWAIController::AWAIController()
{
    BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
    BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
}

void AWAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    if (BehaviorTreeAsset)
    {
        if (UseBlackboard(BehaviorTreeAsset->BlackboardAsset, BlackboardComp))
        {
            RunBehaviorTree(BehaviorTreeAsset);
            BehaviorComp->StartTree(*BehaviorTreeAsset);
        }
    }
}

void AWAIController::SetTargetActors(AActor* Target)
{
    if (BlackboardComp)
    {
        BlackboardComp->SetValueAsObject(TEXT("TargetActor"), Target);
    }
}

void AWAIController::SetHomeLocation(const FVector& Loc)
{
    if (BlackboardComp)
    {
        BlackboardComp->SetValueAsVector(TEXT("HomeLocation"), Loc);
    }
}
