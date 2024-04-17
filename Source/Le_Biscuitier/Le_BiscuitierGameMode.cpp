// Copyright Epic Games, Inc. All Rights Reserved.

#include "Le_BiscuitierGameMode.h"
#include "Le_BiscuitierCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALe_BiscuitierGameMode::ALe_BiscuitierGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
