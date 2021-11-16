// Copyright Epic Games, Inc. All Rights Reserved.

#include "FairKingGameMode.h"
#include "FairKingPlayerController.h"
#include "FairKingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFairKingGameMode::AFairKingGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AFairKingPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}