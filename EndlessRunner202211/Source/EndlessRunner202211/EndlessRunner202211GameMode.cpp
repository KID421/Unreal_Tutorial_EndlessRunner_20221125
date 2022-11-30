// Copyright Epic Games, Inc. All Rights Reserved.

#include "EndlessRunner202211GameMode.h"
#include "EndlessRunner202211Character.h"
#include "UObject/ConstructorHelpers.h"

AEndlessRunner202211GameMode::AEndlessRunner202211GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
