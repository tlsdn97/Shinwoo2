// Fill out your copyright notice in the Description page of Project Settings.


#include "WGameModeBase.h"
#include "WPlayer.h"
#include "WPlayerController.h"

AWGameModeBase::AWGameModeBase()
{
	DefaultPawnClass = AWPlayer::StaticClass();

	PlayerControllerClass = AWPlayerController::StaticClass();
}
