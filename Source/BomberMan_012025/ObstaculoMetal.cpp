// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoMetal.h"


AObstaculoMetal::AObstaculoMetal()
{
    if (MallaObstaculo)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));

        if (MaterialBase.Succeeded())
        {
            MallaObstaculo->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
}

void AObstaculoMetal::BeginPlay()
{
    Super::BeginPlay();
    // Aquí puedes agregar cualquier lógica adicional que necesites al inicio del juego
}