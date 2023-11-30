// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.h"
#include "Decorador.generated.h"

UCLASS()
class EXAMEN_FINAL_SIS457_API ADecorador : public AActor, public IEnemy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADecorador();

protected:
	IEnemy* Decorar;
	ADecorador* Decorador;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void AumentoMovimiento() override;
	virtual float GetVelocidad() override;
	virtual void EstablecerVelocidad(float NuevaVelocidad) override;

	class ADecorarMovimiento* DecorarMovimiento;

	void SetDecorar(IEnemy* _Decorar) { Decorar = _Decorar; }
	IEnemy* GetDecorar() { return Decorar; }

	int ValorActual;

};
