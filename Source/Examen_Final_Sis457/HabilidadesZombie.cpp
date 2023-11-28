// Fill out your copyright notice in the Description page of Project Settings.


#include "HabilidadesZombie.h"

// Sets default values
AHabilidadesZombie::AHabilidadesZombie()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHabilidadesZombie::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHabilidadesZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHabilidadesZombie::Fight()
{
	this->ZombiePotent->Fight();
}

int AHabilidadesZombie::GetDamage()
{
	return this->ZombiePotent->GetDamage();
}

void AHabilidadesZombie::Die()
{
	this->ZombiePotent->Die();
}


