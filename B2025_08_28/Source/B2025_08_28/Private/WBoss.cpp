// Fill out your copyright notice in the Description page of Project Settings.


#include "WBoss.h"
#include "Perception/PawnSensingComponent.h"
#include "Kismet/GameplayStatics.h"
#include "WBossController.h"
#include "BehaviorTree/BlackboardComponent.h"

AWBoss::AWBoss()
{
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
	PawnSensingComp->SightRadius = 1000.f;
	PawnSensingComp->SetPeripheralVisionAngle(60.f);
}

void AWBoss::BeginPlay()
{
	Super::BeginPlay();
	
	if (PawnSensingComp)
	{
		PawnSensingComp->OnSeePawn.AddDynamic(this, &AWBoss::OnSeePawn);
	}
}

void AWBoss::OnSeePawn(APawn* Pawn)
{
	AWBossController* AICon = Cast<AWBossController>(GetController());
	if (AICon && Pawn->ActorHasTag("Player"))
	{
		AICon->GetBlackboardComponent()->SetValueAsObject("TargetActor", Pawn);
	}
}


