// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WPlayer.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float, NewHealthPercent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPotionCountChanged, int32, NewPotionCount);

UCLASS()
class B2025_08_28_API AWPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	AWPlayer();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item")
    int32 PotionCount;

    UPROPERTY(BlueprintAssignable, Category = "Item")
    FOnPotionCountChanged OnItemCountChanged;

    UFUNCTION(BlueprintCallable, Category = "Combat")
    void Attack();

    UFUNCTION(BlueprintCallable)
    void PerformAttackTrace();

    bool bIsAttacking;

    bool bIsRunning = false;
protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float ForwardSpeed = 300.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float BackwardSpeed = 200.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float RunSpeed = 800.0f;

    void FMoveForward(float Value);
    void FMoveRight(float Value);
    void FLookUp(float Value);
    void FTurn(float Value);

    UPROPERTY(EditAnywhere, Category = "AttackAniMontage")
    class UAnimMontage* meleeAttackAniMontage;

    void MeleeAattack();

    void BeginZoom();
    void EndZoom();

    void FStartRunning();
    void FStopRunning();

    bool bIsFiring;
    bool bWantsToZoom;

    void UIUpdate();

    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float DefaultFOV = 90.f;
    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float ZoomedFOV = 60.f;
    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float ZoomInterpSpeed = 15.f;


    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    class USpringArmComponent* SpringArmComp;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    class UCameraComponent* CameraComp;
public:
    UPROPERTY(BlueprintAssignable, Category = "Event")
    FOnHealthChanged OnHealthChanged;

    UPROPERTY(BlueprintAssignable, Category = "Event")
    FOnPotionCountChanged OnPotionCountChanged;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    float MaxHealth = 400.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    float Health = 400.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    float HealAmount = 30.f;

    virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent,AController* EventInstigator, AActor* DamageCauser) override;

    void UsePotion();
    void AddPotion(int32 Amount);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="Player|Stats")
    float CurrentHealth;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|UI")
   class UWPlayerHpWidget* PlayerHpWidget;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|UI")
    bool bUseWorldSpaceUI = false;

};

