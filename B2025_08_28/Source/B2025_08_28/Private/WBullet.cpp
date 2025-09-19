// Fill out your copyright notice in the Description page of Project Settings.


#include "WBullet.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AWBullet::AWBullet()
{
    PrimaryActorTick.bCanEverTick = true;

    BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BulletMesh"));
    RootComponent = BulletMesh;
    BulletMesh->SetCollisionProfileName(TEXT("Projectile"));

    static ConstructorHelpers::FObjectFinder<UStaticMesh> BulletAsset(TEXT("/Engine/BasicShapes/Sphere.Sphere"));
    if (BulletAsset.Succeeded())
    {
        BulletMesh->SetStaticMesh(BulletAsset.Object);
        BulletMesh->SetWorldScale3D(FVector(0.1f));
    }

    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    ProjectileMovement->InitialSpeed = 3000.f;
    ProjectileMovement->MaxSpeed = 3000.f;
    ProjectileMovement->bRotationFollowsVelocity = true;
    ProjectileMovement->ProjectileGravityScale = 0.f;
}

void AWBullet::BeginPlay()
{
	Super::BeginPlay();
    SetLifeSpan(3.f);
}

void AWBullet::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AWBullet::FireInDirection(const FVector& ShootDirection)
{
    if (ProjectileMovement)
    {
        ProjectileMovement->Velocity = ShootDirection * ProjectileMovement->InitialSpeed;
    }
}


