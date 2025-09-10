// Fill out your copyright notice in the Description page of Project Settings.


#include "WAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/PawnMovementComponent.h"

void UWAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
    Super::NativeUpdateAnimation(DeltaSeconds);

    APawn* OwningPawn = TryGetPawnOwner();
    if (!OwningPawn) return;

    FVector Velocity = OwningPawn->GetVelocity();
    FRotator Rotation = OwningPawn->GetActorRotation();

    FVector LocalVelocity = Rotation.UnrotateVector(Velocity);

    ForwardSpeed = LocalVelocity.X;

    RightSpeed = LocalVelocity.Y;
}
