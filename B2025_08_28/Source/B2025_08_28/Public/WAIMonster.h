// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WAIMonster.generated.h"

UCLASS()
class B2025_08_28_API AWAIMonster : public ACharacter
{
	GENERATED_BODY()

public:
	AWAIMonster();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status")
    float MaxHealth = 100.0f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Status")
    float CurrentHealth;

    void Die();

    virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
    void HandleDeath();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
    class UCapsuleComponent* DetectionCapsule;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
    class USphereComponent* DamageSphere;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
    float DamagePerTick = 10.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
    float DamageInterval = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Detection")
    float CapsuleRadius;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Detection")
    float CapsuleHalfHeight;

    UFUNCTION()
    void OnDetectionBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnDetectionEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

    UPROPERTY(EditAnywhere, Category = "MySettings")
    class UWidgetComponent* hpFloatingWidget;

private:
    FTimerHandle DamageTimerHandle;
    AActor* CurrentTarget;

    void ApplyPeriodicDamage();

    UFUNCTION()
    void OnDamageOverlapBegin(UPrimitiveComponent* OverlappedComp,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex,
        bool bFromSweep,
        const FHitResult& SweepResult);

    UFUNCTION()
    void OnDamageOverlapEnd(UPrimitiveComponent* OverlappedComp,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex);
};
