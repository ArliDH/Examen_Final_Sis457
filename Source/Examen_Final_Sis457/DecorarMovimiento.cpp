// Fill out your copyright notice in the Description page of Project Settings.


#include "DecorarMovimiento.h"
#include "Zombie.h"



//ADecorarMovimiento::ADecorarMovimiento(IEnemy* _Decorar)
//{
//}

//void ADecorarMovimiento::BeginPlay()
//{
//	Super::BeginPlay();
//}
//
//void ADecorarMovimiento::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//}



ADecorarMovimiento::ADecorarMovimiento()
{

}

void ADecorarMovimiento::AumentoMovimiento()
{
	Super::AumentoMovimiento();
    //if (Decorar)
    //{
    //    Decorar->AumentoMovimiento();

    //    // Lógica adicional para aumentar la velocidad de movimiento
    //    // Puedes ajustar el valor según tus necesidades
    //    float NuevaVelocidad = Decorar->ObtenerVelocidad() * 1.5f;
    //    Decorar->EstablecerVelocidad(NuevaVelocidad);
    //}
}

float ADecorarMovimiento::GetVelocidad()
{
    Velocidad = 0.1f;

    return  Super::GetVelocidad()+Velocidad;
}


void ADecorarMovimiento::EstablecerVelocidad(float NuevaVelocidad)
{
}

