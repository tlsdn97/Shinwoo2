// Fill out your copyright notice in the Description page of Project Settings.


#include "WAIAnimInstance.h"
#include "WAIMonster.h"
#include "GameFramework/CharacterMovementComponent.h"

void UWAIAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
    Super::NativeUpdateAnimation(DeltaSeconds);
    APawn* Owner = TryGetPawnOwner();
    if (!Owner) return;

    Speed = Owner->GetVelocity().Size();
}

void UWAIAnimInstance::PlayAttackMontage()
{
    if (AttackMontage && !Montage_IsPlaying(AttackMontage))
    {
        Montage_Play(AttackMontage);
    }
}
