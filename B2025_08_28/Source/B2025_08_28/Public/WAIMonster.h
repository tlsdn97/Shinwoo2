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
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    float Health = 100.f;
protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
    class UCapsuleComponent* DetectionCapsule;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
    class USphereComponent* DamageSphere;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
    float CollisionDamage = 20.f;

    UFUNCTION()
    void OnDamageOverlap(UPrimitiveComponent* OverlappedComp,AActor* OtherActor,UPrimitiveComponent* OtherComp,int32 OtherBodyIndex,bool bFromSweep,const FHitResult& SweepResult);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Detection")
    float CapsuleRadius;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Detection")
    float CapsuleHalfHeight;

    UFUNCTION()
    void OnDetectionBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
        bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnDetectionEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:
    UPROPERTY(EditAnywhere, Category = "HP")
    float MaxHP = 100.f;

    UPROPERTY(VisibleAnywhere, Category = "HP")
    float CurrentHP;

    UPROPERTY(EditAnywhere, Category = "MySettings")
    class UWidgetComponent* hpFloatingWidget;
};
