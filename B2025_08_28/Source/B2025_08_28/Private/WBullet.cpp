// Fill out your copyright notice in the Description page of Project Settings.


#include "WBullet.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "WAIMonster.h"

AWBullet::AWBullet()
{
    Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    RootComponent = Collision;
    Collision->OnComponentHit.AddDynamic(this, &AWBullet::OnHit);

    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    ProjectileMovement->InitialSpeed = 3000.f;
    ProjectileMovement->MaxSpeed = 3000.f;
    ProjectileMovement->bRotationFollowsVelocity = true;

}

void AWBullet::BeginPlay()
{
	Super::BeginPlay();
}

void AWBullet::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    if (AWAIMonster* Monster = Cast<AWAIMonster>(OtherActor))
    {
        Monster->TakeDamageFromBullet(Damage);
    }

    Destroy();
}


