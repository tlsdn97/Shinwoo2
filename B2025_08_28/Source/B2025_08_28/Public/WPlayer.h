// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WPlayer.generated.h"

UCLASS()
class B2025_08_28_API AWPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	AWPlayer();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UPROPERTY(EditDefaultsOnly, Category = "Configurations")
    TArray<TSubclassOf<class APWeapon>> DefaultWeapons;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float ForwardSpeed = 300.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float BackwardSpeed = 150.f;

    void FMoveForward(float Value);
    void FMoveRight(float Value);
    void FLookUp(float Value);
    void FTurn(float Value);

    void StartFire();
    void StopFire();
    void HandleFire();
    void PlayFireMontage();

    void BeginZoom();
    void EndZoom();

    bool bIsFiring;
    bool bWantsToZoom;

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    float FireRate;
    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float DefaultFOV = 90.f;
    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float ZoomedFOV = 60.f;
    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float ZoomInterpSpeed = 15.f;

    FTimerHandle FireTimerHandle;

public:
    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    class UParticleSystem* MuzzleFlashFX;

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
   class UParticleSystem* ImpactFX;

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
   class USoundBase* FireSound;

    UPROPERTY(EditDefaultsOnly, Category = "Animation")
    class UAnimMontage* FireMontage;

    UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Replicated, Category = "State")
    TArray<class APWeapon*> Weapons;

    UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "State")
    int32 CurrentIndex = 0;
public:
    UPROPERTY(BlueprintReadWrite)
    bool bHasWeapon = false;

private:
    APWeapon* CurrentWeapon = nullptr;

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    class USpringArmComponent* SpringArmComp;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    class UCameraComponent* CameraComp;
};

