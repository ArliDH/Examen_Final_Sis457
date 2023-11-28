// Fill out your copyright notice in the Description page of Project Settings.


#include "HabilidadEnormizar.h"

void AHabilidadEnormizar::ScaleActor(float NewScale)
{
	SetActorScale3D(FVector(NewScale, NewScale, NewScale));
}

void AHabilidadEnormizar::Fight()
{
	Super::Fight();
    ScaleActor(2.0f);
}

int AHabilidadEnormizar::GetDamage()
{
	return Super::GetDamage() + 10;
}

void AHabilidadEnormizar::Die()
{
	Super::Die();
}
