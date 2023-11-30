// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Subscriptor.h"
#include "Morph.h"
#include "Enemy.h"
#include "Zombie.generated.h"

class AClockTower;
UCLASS()
class EXAMEN_FINAL_SIS457_API AZombie : public AActor, public ISubscriptor, public IMorph, public IEnemy
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AZombie();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshZombie;

	UFUNCTION()
	void OnOverlapBeginFunction(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	float DistanciaInicial;
	FVector UbicacionInicial;
	FVector LocalizacionObjetivo = FVector(-800.0f, -400.0f, 160.0f); // Cambia la ubicación objetivo según tus necesidades
	// Calcula la dirección y distancia al objetivo
	FVector Direccion = LocalizacionObjetivo - FVector(-800.0f, 400.0f, 160.0f);
	// Calcula la distancia de al objetivo
	float DistanciaAlObjetivo = FVector::Dist(LocalizacionObjetivo, this->GetActorLocation());

	UPROPERTY(EditAnywhere)
	float MovementSpeed;


private:
	//The Clock Tower of this Subscriber
	UPROPERTY()
	AClockTower* ClockTower;

	bool bIsTimerActive;
	float ElapsedTime;


private:
	UPROPERTY(EditAnywhere, Category = "Movement")
	float MoveSpeed = 0.2f; // Velocidad de movimiento del zombie

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float DamageGenerates = 10.0f;
	float Health = 500.0f;
	float SpawnAfter = 0.0f;
	bool bCanMove = false;


	float TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);

	FORCEINLINE void SetSpawnAfter(float _SpawnAfter) { SpawnAfter = _SpawnAfter; }
	FORCEINLINE float GetSpawnAfter() { return SpawnAfter; }
	FORCEINLINE void SetCanMove(bool _bCanMove) { bCanMove = _bCanMove; }

	virtual void AumentoMovimiento() override {}
	virtual float GetVelocidad() override { return MovementSpeed += 0.2f; }
	virtual void EstablecerVelocidad(float NuevaVelocidad) override {}

	virtual void Destroyed() override;
	//Called when the Plublisher changed its state, it will execute thisSubscriber routine
	virtual void Update(class APublisher* Publisher) override;
	//Execute this Subscriber routine
	virtual void Morph();
	//Set the Clock Tower of this Subscriber
	void SetClockTower(AClockTower* myClockTower);
	
};
