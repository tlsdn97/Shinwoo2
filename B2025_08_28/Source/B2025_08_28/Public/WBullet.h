// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WBullet.generated.h"

UCLASS()
class B2025_08_28_API AWBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	AWBullet();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bullet")
    UStaticMeshComponent* BulletMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bullet")
    class UProjectileMovementComponent* ProjectileMovement;

public:
    virtual void Tick(float DeltaTime) override;

    void FireInDirection(const FVector& ShootDirection);
};
