// Fill out your copyright notice in the Description page of Project Settings.


#include "ClockTower.h"

AClockTower::AClockTower()
{
	// Set this actor to call Tick() every frame. You can turn this off toimprove performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AClockTower::BeginPlay()
{
	Super::BeginPlay();

}

void AClockTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AClockTower::TimeChanged()
{
	//When the time has changed, this Clock Tower (that is a Publisher)notifies to all the subscribers that the time has changed
	NotifySubscribers();
}

void AClockTower::SetTimeOfDay(FString myTime)
{
	//Set the time using the passed parameter and warn that it's changed
	//ActivarHabilidad = _ActivarHabilidad;
	Time = myTime;
	TimeChanged();
}
