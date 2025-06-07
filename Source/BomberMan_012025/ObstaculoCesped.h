// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoCesped.generated.h"

/**
 *
 */
UCLASS()
class BOMBERMAN_012025_API AObstaculoCesped : public AObstaculo
{
	GENERATED_BODY()
public:
	// Constructor
	AObstaculoCesped();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
