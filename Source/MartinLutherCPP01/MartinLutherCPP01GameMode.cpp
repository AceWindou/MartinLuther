// Copyright Epic Games, Inc. All Rights Reserved.

#include "MartinLutherCPP01GameMode.h"
#include "MartinLutherCPP01Character.h"
#include "UObject/ConstructorHelpers.h"

AMartinLutherCPP01GameMode::AMartinLutherCPP01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
