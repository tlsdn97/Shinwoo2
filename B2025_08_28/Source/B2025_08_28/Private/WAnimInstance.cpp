// Fill out your copyright notice in the Description page of Project Settings.


#include "WAnimInstance.h"
#include "WPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UWAnimInstance::NativeInitializeAnimation()
{
    Player = Cast<AWPlayer>(TryGetPawnOwner());
}

void UWAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
    Super::NativeUpdateAnimation(DeltaSeconds);

    APawn* Pawn = TryGetPawnOwner();
    if (!Pawn) return;

    FVector Velocity = Pawn->GetVelocity();
    FVector Forward = Pawn->GetActorForwardVector();
    FVector Right = Pawn->GetActorRightVector();

    // 전후 / 좌우 속도 계산
    ForwardSpeed = FVector::DotProduct(Velocity, Forward);
    RightSpeed = FVector::DotProduct(Velocity, Right);

    AWPlayer* OwnerChar = Cast<AWPlayer>(Pawn);
    if (!OwnerChar) return;

    // 이동 속도 및 공중 상태
    Speed = OwnerChar->GetVelocity().Size();
    bIsInAir = OwnerChar->GetCharacterMovement()->IsFalling();

    bIsRunning = OwnerChar->bIsRunning;
}


