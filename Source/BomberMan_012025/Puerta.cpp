// Fill out your copyright notice in the Description page of Project Settings.


#include "Puerta.h"

// Sets default values
APuerta::APuerta()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaPuerta = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaPuerta"));
	//RootComponent = MeshComp;
	MallaPuerta->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaPuerta(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (ObjetoMallaPuerta.Succeeded())
	{
		MallaPuerta->SetStaticMesh(ObjetoMallaPuerta.Object);

		MallaPuerta->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

	bPuedeMoverse = FMath::RandBool();

	// Tamaño del bloque (se puede modificar desde el editor o código)
	TamanoPuerta = FVector(1.0f, 1.0f, 2.0f); // Escala predeterminada

	// Aplicar el tamaño al bloque
	MallaPuerta->SetWorldScale3D(TamanoPuerta);
}

// Called when the game starts or when spawned
void APuerta::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APuerta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*
	if (bPuedeMoverse)
	{
		FVector NewLocation = GetActorLocation();
		FRotator NewRotation = GetActorRotation();
		float RunningTime = GetGameTimeSinceCreation();

		// Aleatoriedad en el desplazamiento en Z
		float DeltaHeight = FMath::FRandRange(-1.0f, 1.0f) * FloatSpeed;
		NewLocation.Z += DeltaHeight;

		// Aleatoriedad en la rotación
		float DeltaRotation = FMath::FRandRange(-1.0f, 1.0f) * RotationSpeed;
		NewRotation.Yaw += DeltaRotation;

		SetActorLocationAndRotation(NewLocation, NewRotation);
	}*/
}
