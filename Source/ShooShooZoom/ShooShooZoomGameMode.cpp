// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ShooShooZoomGameMode.h"
#include "ShooShooZoomCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShooShooZoomGameMode::AShooShooZoomGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
