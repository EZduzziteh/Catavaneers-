// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Caravan.h"


// Sets default values
AC_Caravan::AC_Caravan()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AC_Caravan::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_Caravan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AC_Caravan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AC_Caravan::LeaveNode()
{
}

void AC_Caravan::ArriveToNode()
{
}

