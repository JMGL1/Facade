// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeBombaCentral.h"
#include "Engine/World.h"

AFacadeBombaCentral::AFacadeBombaCentral()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AFacadeBombaCentral::BeginPlay()
{
    Super::BeginPlay();

    // Spawn the Facade and execute operations
    AFacadeBomba* BombaFacade = GetWorld()->SpawnActor<AFacadeBomba>(AFacadeBomba::StaticClass());
    if (BombaFacade)
    {
        FVector BaseLocation = GetActorLocation();
        FVector SafeSpawnLocation1 = FVector(0, 0, 300); // 300 unidades arriba del suelo
        FVector SafeSpawnLocation2 = FVector(300, 0, 300); // otra ubicación segura

        BombaFacade->PlaceBomb(this, SafeSpawnLocation1);
        BombaFacade->PlaceBomb(this, SafeSpawnLocation2);
        BombaFacade->DetonateRemoteBomb();
    }
}

void AFacadeBombaCentral::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}


