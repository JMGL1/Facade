// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomba.generated.h"

DECLARE_DELEGATE_OneParam(FOnDetonateSignature, ABomba*);

UCLASS()
class BOMBERMAN_012025_API ABomba : public AActor
{
    GENERATED_BODY() // Ensure this macro is correctly placed within the UCLASS block.

public:
    ABomba();

    UPROPERTY(EditDefaultsOnly, Category = "Bomb")
    UStaticMeshComponent* MeshComp;

    UPROPERTY(EditDefaultsOnly, Category = "Bomb")
    UMaterialInterface* BombMaterial;

    UPROPERTY(EditDefaultsOnly, Category = "Bomb")
    UParticleSystem* ExplosionFX;

    UPROPERTY(EditDefaultsOnly, Category = "Bomb")
    USoundBase* ExplosionSound;

    UPROPERTY(EditDefaultsOnly, Category = "Bomb")
    float DamageAmount;

    UPROPERTY(EditDefaultsOnly, Category = "Bomb")
    float ExplosionRadius;

    UPROPERTY(EditDefaultsOnly, Category = "Bomb")
    float FuseTime;

    FOnDetonateSignature OnDetonate;
    FVector TamanoBloque;
protected:
    virtual void BeginPlay() override;

private:
    FTimerHandle FuseTimerHandle;
    UFUNCTION()
    void HandleFuseExpired();
};