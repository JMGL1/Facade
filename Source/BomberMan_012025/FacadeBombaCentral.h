// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacadeBomba.h"
// Ensure the generated header file is included correctly
#include "FacadeBombaCentral.generated.h"

UCLASS()
class BOMBERMAN_012025_API AFacadeBombaCentral : public AActor
{
    GENERATED_BODY()

public:
    AFacadeBombaCentral();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};
