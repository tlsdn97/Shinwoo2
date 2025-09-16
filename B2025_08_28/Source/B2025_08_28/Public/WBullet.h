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
    UPROPERTY(EditAnywhere, Category = "Damage")
    float Damage = 20.f;

    UPROPERTY(VisibleAnywhere)
    class UProjectileMovementComponent* ProjectileMovement;

    UPROPERTY(VisibleAnywhere)
    class USphereComponent* Collision;

    virtual void BeginPlay() override;

    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, FVector NormalImpulse,const FHitResult& Hit);
};
