// Fill out your copyright notice in the Description page of Project Settings.


#include "WAnimInstance.h"
#include "WPlayer.h"
#include "PWeapon.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UWAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
    Super::NativeUpdateAnimation(DeltaSeconds);

    if (APawn* Pawn = TryGetPawnOwner())
    {
        FVector Velocity = Pawn->GetVelocity();
        FVector Forward = Pawn->GetActorForwardVector();
        FVector Right = Pawn->GetActorRightVector();

        ForwardSpeed = FVector::DotProduct(Velocity, Forward);
        RightSpeed = FVector::DotProduct(Velocity, Right);
    }
    AWPlayer* OwnerChar = Cast<AWPlayer>(TryGetPawnOwner());
    if (!OwnerChar) return;

    Speed = OwnerChar->GetVelocity().Size();
    bIsInAir = OwnerChar->GetCharacterMovement()->IsFalling();
}

void UWAnimInstance::AnimNotify_OnFire()
{
    if (AWPlayer* OwnerChar = Cast<AWPlayer>(TryGetPawnOwner()))
    {
        if (APWeapon* Weapon = OwnerChar->GetEquippedWeapon())
        {
            Weapon->Fire();
        }
    }
}


