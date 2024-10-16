// Copyright Epic Games, Inc. All Rights Reserved.

#include "MVP2GameMode.h"
#include "MVP2Character.h"
#include "UObject/ConstructorHelpers.h"

AMVP2GameMode::AMVP2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
