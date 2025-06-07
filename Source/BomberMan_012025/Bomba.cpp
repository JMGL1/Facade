// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"

ABomba::ABomba()
{
    PrimaryActorTick.bCanEverTick = true;

    // 1) Creamos el componente y lo hacemos root
    MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    RootComponent = MeshComp;

    // 2) Cargamos un mesh de ejemplo (ajusta la ruta a uno válido en tu proyecto)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> BombMeshObj(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
    if (BombMeshObj.Succeeded())
    {
        MeshComp->SetStaticMesh(BombMeshObj.Object);
    }

    // 3) Cargamos un material de ejemplo
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> BombMatObj(TEXT("/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold"));
    if (BombMatObj.Succeeded())
    {
        BombMaterial = BombMatObj.Object;
        MeshComp->SetMaterial(0, BombMaterial);
    }

    // Ajusta escala, colisión, etc. si lo necesitas:
    MeshComp->SetWorldScale3D(FVector(0.5f));
    DamageAmount = 50.f;
    ExplosionRadius = 300.f;
    FuseTime = 6.f;
}

void ABomba::BeginPlay()
{
    Super::BeginPlay();
    GetWorld()->GetTimerManager().SetTimer(FuseTimerHandle, this, &ABomba::HandleFuseExpired, FuseTime, false);
}

void ABomba::HandleFuseExpired()
{
    if (OnDetonate.IsBound())
    {
        OnDetonate.Execute(this);
    }
}


