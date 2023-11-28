// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HabilidadesZombie.h"
#include "HabilidadEnormizar.generated.h"

/**
 * 
 */
UCLASS()
class EXAMEN_FINAL_SIS457_API AHabilidadEnormizar : public AHabilidadesZombie
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "Scaling")
	void ScaleActor(float NewScale);
	//Start Fighting
	virtual void Fight() override;
	//Returns how much damage this enemy has taken
	virtual int GetDamage() override;
	//Kill this enemy
	virtual void Die() override;
};
