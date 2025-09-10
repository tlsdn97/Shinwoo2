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
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float ForwardSpeed = 300.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float BackwardSpeed = 150.f;

    void FMoveForward(float Value);
    void FMoveRight(float Value);
    void FLookUp(float Value);
    void FTurn(float Value);


private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
    class USpringArmComponent* CameraBoom;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
    class UCameraComponent* FollowCamera;
};

