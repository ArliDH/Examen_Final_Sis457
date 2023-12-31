// Copyright Epic Games, Inc. All Rights Reserved.

#include "Examen_Final_Sis457GameMode.h"
#include "Examen_Final_Sis457Pawn.h"
#include "Plant.h"
#include "Zombie.h"
#include "DecorarMovimiento.h"
#include "ClockTower.h"

AExamen_Final_Sis457GameMode::AExamen_Final_Sis457GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AExamen_Final_Sis457Pawn::StaticClass();

}

void AExamen_Final_Sis457GameMode::BeginPlay()
{
	Super::BeginPlay();

	//Decorador
	DecorarMovimiento = GetWorld()->SpawnActor<ADecorarMovimiento>(ADecorarMovimiento::StaticClass());

	//Observador
    ClockTower = GetWorld()->SpawnActor<AClockTower>(AClockTower::StaticClass());

	FTransform SpawnLocation;
	SpawnLocation.SetLocation(FVector(-800.0f, -400.0f, 200.0f));
	float initialPositionX = -800.0f;
	float initialPositionY = -400.0f;

	for (int i = 0; i < 3; i++)
	{
		APlant* NewLanzaguisantes = SpawnPlant(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

		if (NewLanzaguisantes)
		{
			NewLanzaguisantes->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
			aPlantas.Add(NewLanzaguisantes);
		}


		/*for (int j = 0; j < 2; j++) {
			APlant* NewLanzaguizantes = SpawnPlant(FVector(initialPositionX + i * 150.0f, initialPositionY + j * 350.0f, 200.0f));
			ArrayPlants.Add(NewLanzaguizantes);
		}*/
	}
	initialPositionX = -800.0f;
	initialPositionY = 400.0f;

	for (int i = 0; i < 3; ++i)
	{
		Zombie = SpawnZombie(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

		//if (NewZombie)
		//{
		//	NewZombie->SetSpawnAfter(FMath::RandRange(1, 5));
		//	NewZombie->SetActorHiddenInGame(false);
		//	NewZombie->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
		//	NewZombie->SetCanMove(true);
		//	NewZombie->SetClockTower(ClockTower);
		//	DecorarMovimiento->SetDecorar(NewZombie);
		//	aZombie.Add(NewZombie);
		//	
		//}
	}
	////Decorador
	//AHabilidadEnormizar* HabilidadEnormizar = GetWorld()->SpawnActor<AHabilidadEnormizar>(AHabilidadEnormizar::StaticClass());

	////Observador
	//AClockTower* ClockTower = GetWorld()->SpawnActor<AClockTower>(AClockTower::StaticClass());
	Zombie = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), FVector(-1000.0f, -400.0f, 200.0f), FRotator::ZeroRotator);
	Zombie->SetClockTower(ClockTower);
	DecorarMovimiento->SetDecorar(Zombie);
	//ClockTower->SetTimeOfDay("no lo eliminaste");
	GetWorldTimerManager().SetTimer(Temporizador, this, &AExamen_Final_Sis457GameMode::ZombieDestruido, 10.0f, false);
	
	Decorar = DecorarMovimiento;
	Decorar->GetVelocidad();
	Zombie->MovementSpeed += Decorar->GetVelocidad();
}

void AExamen_Final_Sis457GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}

void AExamen_Final_Sis457GameMode::ZombieDestruido()
{
	if (Zombie) {
		ClockTower->SetTimeOfDay("no lo eliminaste");
	}
	//ClockTower->SetTimeOfDay("no lo eliminaste");
	
}


APlant* AExamen_Final_Sis457GameMode::SpawnPlant(FVector _spawnPosition)
{
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(_spawnPosition);
	return GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), SpawnLocation);
}

AZombie* AExamen_Final_Sis457GameMode::SpawnZombie(FVector _spawnPosition)
{
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(_spawnPosition);
	return GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocation);
}




