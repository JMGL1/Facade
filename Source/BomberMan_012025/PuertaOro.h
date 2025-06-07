// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Puerta.h"
#include "PuertaOro.generated.h"

/**
 *
 */
UCLASS()
class BOMBERMAN_012025_API APuertaOro : public APuerta
{
	GENERATED_BODY()
public:
	// Constructor
	APuertaOro();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
