// Fill out your copyright notice in the Description page of Project Settings.


#include "WDamageLogWidget.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"

void UWDamageLogWidget::InitWidget(AActor* InActor, int32 Damage, int32 Total, FVector InOffset)
{
    TargetActor = InActor;
    WorldOffset = InOffset;

    if (DamageText)
    {
        FString Msg = FString::Printf(TEXT("+%d (Total: %d)"), Damage, Total);
        DamageText->SetText(FText::FromString(Msg));
    }
}

void UWDamageLogWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
    Super::NativeTick(MyGeometry, InDeltaTime);

    if (!TargetActor) return;

    FVector WorldPos = TargetActor->GetActorLocation() + WorldOffset;
    FVector2D ScreenPos;

    if (UGameplayStatics::ProjectWorldToScreen(GetOwningPlayer(), WorldPos, ScreenPos))
    {
        SetPositionInViewport(ScreenPos);
    }
}
