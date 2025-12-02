// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_exercise_plugin_1GameMode.h"
#include "UE_exercise_plugin_1Character.h"
#include "UObject/ConstructorHelpers.h"

AUE_exercise_plugin_1GameMode::AUE_exercise_plugin_1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
