// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test11GameMode.h"
#include "Test11PlayerController.h"
#include "Test11Character.h"
#include "UObject/ConstructorHelpers.h"

ATest11GameMode::ATest11GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATest11PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}