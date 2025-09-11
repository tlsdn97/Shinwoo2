// Fill out your copyright notice in the Description page of Project Settings.


#include "WAIMonster.h"

AWAIMonster::AWAIMonster()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AWAIMonster::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWAIMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWAIMonster::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

