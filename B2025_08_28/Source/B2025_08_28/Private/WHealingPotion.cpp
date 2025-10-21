// Fill out your copyright notice in the Description page of Project Settings.


#include "WHealingPotion.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "WPlayer.h"
#include "Kismet/GameplayStatics.h"


AWHealingPotion::AWHealingPotion()
{
	PrimaryActorTick.bCanEverTick = false;

	PrimaryActorTick.bCanEverTick = false;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
	CollisionComp->SetupAttachment(RootComponent);
	CollisionComp->InitSphereRadius(80.f);
	CollisionComp->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

}

void AWHealingPotion::BeginPlay()
{
	Super::BeginPlay();

	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AWHealingPotion::OnOverlapBegin);
}

void AWHealingPotion::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AWPlayer* Player = Cast<AWPlayer>(OtherActor);
	if (Player)
	{
		Player->AddPotion(1); // 플레이어에 포션 추가 함수 호출
		UE_LOG(LogTemp, Warning, TEXT("Potion picked up!"));

		Destroy(); // 포션 아이템 제거
	}
}

