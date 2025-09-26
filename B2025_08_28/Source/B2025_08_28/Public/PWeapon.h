// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PWeapon.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDealDamage, AActor*, DamagedActor, float, DamageAmount);

UCLASS()
class B2025_08_28_API APWeapon : public AActor
{
	GENERATED_BODY()

public:
	APWeapon();

	UPROPERTY(BlueprintAssignable, Category = "Combat")
	FOnDealDamage OnDealDamage;

	UPROPERTY(VisibleAnywhere)
	class USphereComponent* HitSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float DamageAmount = 20.f;

	void FStartFire();
	void FStopFire();

	UFUNCTION()
	void Fire();

	void AttachToCharacter(class AWPlayer* OwnerChar);

	UFUNCTION(BlueprintCallable)
	void PerformAttack();
protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp,AActor* OtherActor,UPrimitiveComponent* OtherComp,int32 OtherBodyIndex,bool bFromSweep,const FHitResult& SweepResult);

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