// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WDamageZone.generated.h"

UCLASS()
class B2025_08_28_API AWDamageZone : public AActor
{
	GENERATED_BODY()
	
public:	
	AWDamageZone();

protected:
	UPROPERTY(VisibleAnywhere, Category ="Components")
	class UBoxComponent* Collision;

	UPROPERTY(VisibleAnywhere, Category ="Components")
	class UNiagaraComponent* FXComponent;

	UPROPERTY(EditAnywhere, Category = "Damage")
	float DamagePerTick = 10.f;

	UPROPERTY(EditAnywhere, Category = "Damage")
	float DamageInterval = 1.f;

	FTimerHandle DamageTimerHandle;
	TArray<AActor*> OverlappingActors;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void ApplyDamage(AActor* DamagedActor);
};
