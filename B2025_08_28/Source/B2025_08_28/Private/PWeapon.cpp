// Fill out your copyright notice in the Description page of Project Settings.


#include "PWeapon.h"
#include "WPlayer.h"

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

void APWeapon::OnPlayerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Child override"));
	auto player = Cast<AWPlayer>(OtherActor);

	if (player && !(player->bHasWeapon))
	{
		FName WeaponSocket(TEXT("RightHandWeaponSocket"));
		this->AttachToComponent(player->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponSocket);
		player->bHasWeapon = true;
	}
}
