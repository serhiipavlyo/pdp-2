// Copyright Epic Games, Inc. All Rights Reserved.

#include "PDPGameMode.h"
#include "PDPCharacter.h"
#include "UObject/ConstructorHelpers.h"

APDPGameMode::APDPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
