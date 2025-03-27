// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootSimulatorGameGameMode.h"
#include "ShootSimulatorGameHUD.h"
#include "ShootSimulatorGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootSimulatorGameGameMode::AShootSimulatorGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShootSimulatorGameHUD::StaticClass();
}
