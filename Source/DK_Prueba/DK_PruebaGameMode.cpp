// Copyright Epic Games, Inc. All Rights Reserved.

#include "DK_PruebaGameMode.h"
#include "DK_PruebaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADK_PruebaGameMode::ADK_PruebaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
