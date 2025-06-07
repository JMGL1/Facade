// Fill out your copyright notice in the Description page of Project Settings.


#include "PuertaCristal.h"

APuertaCristal::APuertaCristal()
{
    if (MallaPuerta)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel'"));

        if (MaterialBase.Succeeded())
        {
            MallaPuerta->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
}

void APuertaCristal::BeginPlay()
{
    Super::BeginPlay();
    // Aquí puedes agregar cualquier lógica adicional que necesites al inicio del juego
}