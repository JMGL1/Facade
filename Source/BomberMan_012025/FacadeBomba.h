// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacadeBomba.generated.h"

class ABomba;

DECLARE_DELEGATE_OneParam(FOnDetonateSignature, ABomba*);

UCLASS()
class BOMBERMAN_012025_API AFacadeBomba : public AActor
{
    GENERATED_BODY()

public:
    AFacadeBomba();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

public:
    UFUNCTION(BlueprintCallable, Category = "Bomb System")
    void PlaceBomb(AActor* InstigatorActor, const FVector& Location);

    UFUNCTION(BlueprintCallable, Category = "Bomb System")
    void DetonateRemoteBomb();

private:
    UPROPERTY(EditDefaultsOnly, Category = "Bomb System")
    TSubclassOf<ABomba> BombClass;

    ABomba* RemoteBomb;

    void ExplodeBomb(ABomba* Bomb);
};


