// Fill out your copyright notice in the Description page of Project Settings.


#include "WBTService_UpdateTarget.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AISense_Sight.h"

UWBTService_UpdateTarget::UWBTService_UpdateTarget()
{
    NodeName = TEXT("Update Target");
    Interval = 0.5f;
}

void UWBTService_UpdateTarget::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    AAIController* AICon = OwnerComp.GetAIOwner();
    if (!AICon) return;

    UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
    if (!BB) return;

    UAIPerceptionComponent* Perception = AICon->FindComponentByClass<UAIPerceptionComponent>();
    if (!Perception) return;

    TArray<AActor*> SensedActors;
    Perception->GetCurrentlyPerceivedActors(UAISense_Sight::StaticClass(), SensedActors);

    if (SensedActors.Num() > 0)
    {
        BB->SetValueAsObject("TargetActor", SensedActors[0]);
        BB->SetValueAsBool("HasTarget", true);
    }
    else if (!BB->GetValueAsObject("TargetActor"))
    {
        BB->SetValueAsBool("HasTarget", false);
    }
}
