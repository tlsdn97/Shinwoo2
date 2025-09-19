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

	void FStartFire();
	void FStopFire();

	UFUNCTION()
	void Fire();

	void AttachToCharacter(class AWPlayer* OwnerChar);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<class AWBullet> BulletClass;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	USoundBase* FireSound;
private:
	FTimerHandle FireTimer;
	bool bIsFiring = false;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	float FireRate = 0.1f; 

	AWPlayer* OwnerCharacter;

};