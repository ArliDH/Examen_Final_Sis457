// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Decorador.h"
#include "DecorarMovimiento.generated.h"

/**
 * 
 */
UCLASS()
class EXAMEN_FINAL_SIS457_API ADecorarMovimiento : public ADecorador
{
	GENERATED_BODY()

public:
	ADecorarMovimiento();
	// Sets default values for this actor's properties
	//ADecorarMovimiento(IEnemy* _Decorar);
//protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//
//public:
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
	float Velocidad;
	class AZombie* Zombie;

	virtual void AumentoMovimiento() override;
	virtual float GetVelocidad() override;
	virtual void EstablecerVelocidad(float NuevaVelocidad) override;
	
};
