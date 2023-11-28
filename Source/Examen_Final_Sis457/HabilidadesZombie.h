// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZombiePotent.h"
#include "HabilidadesZombie.generated.h"

UCLASS()
class EXAMEN_FINAL_SIS457_API AHabilidadesZombie : public AActor, public IZombiePotent
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHabilidadesZombie();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	IZombiePotent* ZombiePotent;

public:
	virtual void Fight() override;
	virtual int GetDamage() override;
	virtual void Die() override;


	void SetZombiePotent(IZombiePotent* _ZombiePotent) { ZombiePotent = _ZombiePotent; }
	IZombiePotent* GetPotenciar() { return ZombiePotent; }

};
