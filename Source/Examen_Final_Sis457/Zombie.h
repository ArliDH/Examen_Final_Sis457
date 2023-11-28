// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZombiePotent.h"
#include "Subscriptor.h"
#include "Morph.h"
#include "Zombie.generated.h"

class AClockTower;
UCLASS()
class EXAMEN_FINAL_SIS457_API AZombie : public AActor, public IZombiePotent, public ISubscriptor, public IMorph
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
	FVector LocalizacionObjetivo;
	FVector Direccion;
	float DistanciaAlObjetivo;

private:
	//The Clock Tower of this Subscriber
	UPROPERTY()
	AClockTower* ClockTower;

	bool bIsTimerActive;
	float ElapsedTime;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float DamageGenerates = 10.0f;
	float Health = 500.0f;
	float SpawnAfter = 0.0f;
	float MovementSpeed = 6.1f;
	bool bCanMove = false;

	float TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
	void MoveToTarget(FVector TargetLocation);

	FORCEINLINE void SetSpawnAfter(float _SpawnAfter) { SpawnAfter = _SpawnAfter; }
	FORCEINLINE float GetSpawnAfter() { return SpawnAfter; }
	FORCEINLINE void SetCanMove(bool _bCanMove) { bCanMove = _bCanMove; }


	virtual void Fight() override {}
	virtual int GetDamage() override { return 5; }
	virtual void Die() override {}

	virtual void Destroyed() override;
	//Called when the Plublisher changed its state, it will execute thisSubscriber routine
	virtual void Update(class APublisher* Publisher) override;
	//Execute this Subscriber routine
	virtual void Morph();
	//Set the Clock Tower of this Subscriber
	void SetClockTower(AClockTower* myClockTower);
	
};
