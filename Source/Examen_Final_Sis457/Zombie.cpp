// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie.h"
#include "ClockTower.h"

// Sets default values
AZombie::AZombie()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	MeshZombie = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Zombie Mesh"));

	MeshZombie->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	//MeshZombie->SetSimulatePhysics(true);
	MeshZombie->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);

	MeshZombie->SetCollisionProfileName(UCollisionProfile::BlockAllDynamic_ProfileName);
	MeshZombie->SetupAttachment(RootComponent);

	RootComponent = MeshZombie;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));


	//Mesh o aspecto alternativo
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset2(TEXT("StaticMesh'/Game/StarterContent/Architecture/Pillar_50x500.Pillar_50x500'"));


	//Definición del mesh
	MeshZombie->SetStaticMesh(ZombieMeshAsset.Object);

	Tags.Add(TEXT("Enemy"));
	DamageGenerates = 10.0f;
	Health = 50.0f;
	MovementSpeed = 0.2f;
	bCanMove = false;
	bIsTimerActive = true;
	ElapsedTime= 0.0f;

}

void AZombie::OnOverlapBeginFunction(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Estamos aqui")));

	if ((OverlappedComponent != nullptr) && (OtherActor != this))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Estamos aqui")));

		//OtherComp->AddImpulseAtLocation(GetVelocity() * 200.0f, GetActorLocation());
		if (OtherActor->ActorHasTag("Plant"))
		{
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

			OtherActor->TakeDamage(DamageGenerates, FDamageEvent(), nullptr, this);
			//OtherComp->DestroyComponent();
			//OtherActor->Destroy();
		}
		else
		{
			// Realiza acciones normales para la colisión con otros actores
			//OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		}
	}
}

void AZombie::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	//if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Estamos aqui")));

		//OtherComp->AddImpulseAtLocation(GetVelocity() * 200.0f, GetActorLocation());
		if (OtherActor->ActorHasTag("Plant"))
		{
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

			OtherActor->TakeDamage(DamageGenerates, FDamageEvent(), nullptr, this);
			//OtherComp->DestroyComponent();
			//OtherActor->Destroy();
		}
		else
		{
			// Realiza acciones normales para la colisión con otros actores
			//OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		}

	}
}

// Called when the game starts or when spawned
void AZombie::BeginPlay()
{
	Super::BeginPlay();
	
	UWorld* const World = GetWorld();
}

// Called every frame
void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsTimerActive)
	{
		ElapsedTime += DeltaTime;
	}

	float DeltaMove = MovementSpeed * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove > DistanciaAlObjetivo)
	{
		// Si el desplazamiento excede la distancia al objetivo, mueve directamente al objetivo
		this->SetActorLocation(LocalizacionObjetivo);
	}
	else
	{
		// Mueve el objeto en la dirección calculada
		this->AddActorWorldOffset(Direccion * DeltaMove);

	}


	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Este es un mensaje")));

}

float AZombie::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Health -= Damage;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Health Zombie: %f"), this->Health));
	// Devuelve la cantidad de daño que se aplicó realmente.
	return Health;
}

void AZombie::Destroyed()
{
	Super::Destroyed();
	//Unsubscribe from the Clock Tower if it's destroyed
	ClockTower->UnSubscribe(this);
}

void AZombie::Update(APublisher* Publisher)
{
	Morph();
}

void AZombie::Morph()
{
	FString Time = ClockTower->GetTime();

	if (!Time.Compare("no lo eliminaste"))
	{
		//Execute the Morning routine
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Ya pasaron 10 minutos en el que el zombie no muere"), *Time));

	}
	else if (!Time.Compare("eliminaste"))
	{
		//Execute the Midday routine
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("It is %s, so FreakyAllen's right eye starts to twitch"),*Time));
	}
	//else if (!Time.Compare("Evening"))
	//{
	//	//Execute the Evening routine
	//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("It is %s, so FreakyAllen morphs into a blood suckingwogglesnort"), *Time));
	//}


}

void AZombie::SetClockTower(AClockTower* myClockTower)
{
	//Set the Clock Tower and Subscribe to that
	ClockTower = myClockTower;
	ClockTower->Subscribe(this);
}




