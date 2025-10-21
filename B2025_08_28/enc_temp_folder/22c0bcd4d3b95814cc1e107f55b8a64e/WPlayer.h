// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WPlayer.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float, NewHealthPercent);

UCLASS()
class B2025_08_28_API AWPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	AWPlayer();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<class UWDamageLogWidget> DamageWidgetClass;

    int32 TotalDamage;

    UFUNCTION(BlueprintCallable)
    void OnDamaged(int32 Damage);

    void Attack_Hit();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float ForwardSpeed = 300.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float BackwardSpeed = 200.f;

    void FMoveForward(float Value);
    void FMoveRight(float Value);
    void FLookUp(float Value);
    void FTurn(float Value);

    UPROPERTY(EditAnywhere, Category = "AttackAniMontage")
    class UAnimMontage* meleeAttackAniMontage;

    void MeleeAattack();

    void BeginZoom();
    void EndZoom();

    bool bIsFiring;
    bool bWantsToZoom;

    void UIUpdate();

    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float DefaultFOV = 90.f;
    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float ZoomedFOV = 60.f;
    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float ZoomInterpSpeed = 15.f;

public:
    UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "State")
    int32 CurrentIndex = 0;
protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    class USpringArmComponent* SpringArmComp;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    class UCameraComponent* CameraComp;
public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    float MaxHealth = 400.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    float Health = 400.f;

    UPROPERTY(BlueprintAssignable, Category = "Event")
    FOnHealthChanged OnHealthChanged;

    virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent,AController* EventInstigator, AActor* DamageCauser) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="Player|Stats")
    float CurrentHealth;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player|UI")
   class UWPlayerHpWidget* PlayerHpWidget;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|UI")
    bool bUseWorldSpaceUI = false;

};

