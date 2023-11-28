// Fill out your copyright notice in the Description page of Project Settings.


#include "Publisher.h"

// Sets default values
APublisher::APublisher()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APublisher::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APublisher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APublisher::Subscribe(AActor* Subscriber)
{
	Subscribers.Add(Subscriber);
}

void APublisher::UnSubscribe(AActor* SubscriberToRemove)
{
	Subscribers.Remove(SubscriberToRemove);
}

void APublisher::NotifySubscribers()
{
	for (AActor* Actor : Subscribers)
	{
		//Cast each of them to a concrete Subscriber
		ISubscriptor* Sub = Cast<ISubscriptor>(Actor);
		if (Sub)
		{
			//Notify each of them that something has changed, so they can executetheir own routine
			Sub->Update(this);
		}
	}
}

