// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PWeapon.generated.h"

UCLASS()
class B2025_08_28_API APWeapon : public AActor
{
	GENERATED_BODY()

public:
	APWeapon();
protected:
	virtual void BeginPlay() override;
	void OnPlayerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class USkeletalMeshComponent* Mesh;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "State")
	class AWPlayer* CurrentOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
	FTransform PlacementTransform;
};