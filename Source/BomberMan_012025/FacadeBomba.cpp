// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeBomba.h"
#include "Bomba.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "BombDamageType.h"
#include "UObject/ConstructorHelpers.h"

AFacadeBomba::AFacadeBomba()
{
    PrimaryActorTick.bCanEverTick = true;
    RemoteBomb = nullptr;

    static ConstructorHelpers::FClassFinder<ABomba> BombBPClass(TEXT("/Game/Blueprints/BP_Bomba"));
    if (BombBPClass.Succeeded())
    {
        BombClass = BombBPClass.Class;
    }
}

void AFacadeBomba::BeginPlay()
{
    Super::BeginPlay();
}

void AFacadeBomba::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AFacadeBomba::PlaceBomb(AActor* InstigatorActor, const FVector& Location)
{
    if (!BombClass || !InstigatorActor) return;
    UWorld* World = InstigatorActor->GetWorld(); if (!World) return;

    FActorSpawnParameters Params;
    Params.Owner = InstigatorActor;
    Params.Instigator = Cast<APawn>(InstigatorActor);

    ABomba* Bomb = World->SpawnActor<ABomba>(BombClass, Location, FRotator::ZeroRotator, Params);
    if (Bomb)
    {
        UE_LOG(LogTemp, Warning, TEXT("Bomba creada en: %s"), *Location.ToString());
        RemoteBomb = Bomb;
        Bomb->OnDetonate.BindUObject(this, &AFacadeBomba::ExplodeBomb);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("NO SE PUDO CREAR LA BOMBA"));
    }
}

void AFacadeBomba::DetonateRemoteBomb()
{
    if (RemoteBomb)
    {
        ExplodeBomb(RemoteBomb);
        RemoteBomb = nullptr;
    }
}

void AFacadeBomba::ExplodeBomb(ABomba* Bomb)
{
    if (!Bomb) return;
    UWorld* World = Bomb->GetWorld(); if (!World) return;

    FVector Center = Bomb->GetActorLocation();
    float Radius = Bomb->ExplosionRadius;

    UGameplayStatics::SpawnEmitterAtLocation(World, Bomb->ExplosionFX, Center);
    UGameplayStatics::PlaySoundAtLocation(World, Bomb->ExplosionSound, Center);

    TArray<AActor*> IgnoreList;
    IgnoreList.Add(Bomb);
    UGameplayStatics::ApplyRadialDamage(
        World,
        Bomb->DamageAmount,
        Center,
        Radius,
        UBombDamageType::StaticClass(),
        IgnoreList,
        this,
        Bomb->GetInstigatorController(),
        true
    );

    Bomb->Destroy();
}
