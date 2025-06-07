// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoCesped.h"

AObstaculoCesped::AObstaculoCesped()
{
    if (MallaObstaculo)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Ground_Grass.M_Ground_Grass'"));

        if (MaterialBase.Succeeded())
        {
            MallaObstaculo->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
}

void AObstaculoCesped::BeginPlay()
{
    Super::BeginPlay();
    // Aquí puedes agregar cualquier lógica adicional que necesites al inicio del juego
}