// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_GitTutorialGameMode.h"
#include "UE_GitTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_GitTutorialGameMode::AUE_GitTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
