// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoMetal.generated.h"

/**
 *
 */
UCLASS()
class BOMBERMAN_012025_API AObstaculoMetal : public AObstaculo
{
	GENERATED_BODY()
public:
	// Constructor
	AObstaculoMetal();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
