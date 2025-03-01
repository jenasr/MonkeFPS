// Copyright Epic Games, Inc. All Rights Reserved.

#include "MonkeFPSGameMode.h"
#include "MonkeFPSHUD.h"
#include "MonkeFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMonkeFPSGameMode::AMonkeFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMonkeFPSHUD::StaticClass();
}
