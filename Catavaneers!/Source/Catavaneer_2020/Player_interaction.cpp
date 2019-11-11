// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_interaction.h"
#include "Player_inventory.h"

// Sets default values for this component's properties
UPlayer_interaction::UPlayer_interaction()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayer_interaction::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPlayer_interaction::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPlayer_interaction::wood_to_caravan()
{
	current_player->wood_to_caravan();
}

void UPlayer_interaction::buy_trap()
{
	current_player->buy_trap();
}

