// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025GameMode.h"     
#include "BomberMan_012025Character.h"    
#include "FacadeBombaCentral.h"
#include "Engine/World.h"                 
#include "UObject/ConstructorHelpers.h"

ABomberMan_012025GameMode::ABomberMan_012025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
void ABomberMan_012025GameMode::BeginPlay()
{
    Super::BeginPlay();

    // Spawn the central facade actor at world origind
    AFacadeBombaCentral* CentralFacade = GetWorld()->SpawnActor<AFacadeBombaCentral>(AFacadeBombaCentral::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
    if (CentralFacade)
    {
        // Additional setup if needed
    }
}

