// Fill out your copyright notice in the Description page of Project Settings.


#include "PWeapon.h"

APWeapon::APWeapon()
{
	PrimaryActorTick.bCanEverTick = false;

	SetReplicates(true);

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);
}

void APWeapon::BeginPlay()
{
	Super::BeginPlay();

	if (!CurrentOwner)
	Mesh->SetVisibility(false);
}
