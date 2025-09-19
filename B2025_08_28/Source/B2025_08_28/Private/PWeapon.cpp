// Fill out your copyright notice in the Description page of Project Settings.


#include "PWeapon.h"
#include "WPlayer.h"
#include "WBullet.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

APWeapon::APWeapon()
{
    PrimaryActorTick.bCanEverTick = false;
    WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
    SetRootComponent(WeaponMesh);
}

void APWeapon::BeginPlay()
{
    Super::BeginPlay();
}

void APWeapon::FStartFire()
{
    Fire();
    GetWorldTimerManager().SetTimer(FireTimer, this, &APWeapon::Fire, FireRate, true);
}

void APWeapon::FStopFire()
{
    GetWorldTimerManager().ClearTimer(FireTimer);
}

void APWeapon::AttachToCharacter(AWPlayer* OwnerChar)
{
    OwnerCharacter = OwnerChar;
    AttachToComponent(OwnerChar->GetMesh(),
        FAttachmentTransformRules::SnapToTargetNotIncludingScale,
        TEXT("Weapon"));
}

void APWeapon::Fire()
{
    if (!BulletClass) return;

    UWorld* World = GetWorld();
    if (!World) return;

    FVector MuzzleLocation = WeaponMesh->GetSocketLocation(TEXT("Muzzle"));
    FRotator MuzzleRotation = WeaponMesh->GetSocketRotation(TEXT("Muzzle"));

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    AWBullet* Bullet = World->SpawnActor<AWBullet>(BulletClass, MuzzleLocation, MuzzleRotation, SpawnParams);
    if (Bullet)
    {
        Bullet->FireInDirection(MuzzleRotation.Vector());
    }
}

