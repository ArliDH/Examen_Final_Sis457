// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ZombiePotent.h"
#include "Examen_Final_Sis457GameMode.generated.h"

class AZombie;
UCLASS(MinimalAPI)
class AExamen_Final_Sis457GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AExamen_Final_Sis457GameMode();
	//TArray<class AZombie*> ArrayZombies;
	TArray<class APlant*> ArrayPlants;

	FTimerHandle Temporizador;


	TArray<AZombie*> aZombie;
	TArray<APlant*> aPlantas;

	AZombie* NuevoZombie;

	IZombiePotent* ZombiePotent;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	class APlant* SpawnPlant(FVector _spawnPosition);

	class AZombie* SpawnZombie(FVector _spawnPosition);

	float TiempoTranscurrido = 0.0f;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};



