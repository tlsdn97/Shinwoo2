// Fill out your copyright notice in the Description page of Project Settings.


#include "WAnimInstance.h"
#include "WPlayer.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

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
}

void UWAnimInstance::AnimNotify_Fire()
{
    if (AWPlayer* Character = Cast<AWPlayer>(TryGetPawnOwner()))
    {
        FVector MuzzleLocation = Character->GetMesh()->GetSocketLocation(TEXT("MuzzleSocket"));
        FRotator ShootRotation = Character->GetControlRotation();
        FVector End = MuzzleLocation + (ShootRotation.Vector() * 10000.f);

        FHitResult Hit;
        FCollisionQueryParams Params;
        Params.AddIgnoredActor(Character);

        if (Character->GetWorld()->LineTraceSingleByChannel(Hit, MuzzleLocation, End, ECC_Visibility, Params))
        {
            if (AActor* HitActor = Hit.GetActor())
            {
                UGameplayStatics::ApplyDamage(HitActor, 20.f, Character->GetController(), Character, nullptr);
            }

            if (Character->ImpactFX)
            {
                UGameplayStatics::SpawnEmitterAtLocation(Character->GetWorld(),
                    Character->ImpactFX,
                    Hit.ImpactPoint,
                    Hit.ImpactNormal.Rotation());
            }
        }

        if (Character->MuzzleFlashFX)
        {
            UGameplayStatics::SpawnEmitterAttached(Character->MuzzleFlashFX,
                Character->GetMesh(),
                TEXT("MuzzleSocket"));
        }

        if (Character->FireSound)
        {
            UGameplayStatics::PlaySoundAtLocation(Character, Character->FireSound,
                Character->GetActorLocation());
        }
    }
}

