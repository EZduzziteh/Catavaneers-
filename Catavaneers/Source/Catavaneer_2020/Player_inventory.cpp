// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_inventory.h"

// Sets default values for this component's properties
UPlayer_inventory::UPlayer_inventory()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayer_inventory::BeginPlay()
{
	Super::BeginPlay();

	if (Trap1 > 0)
	{
		Trap1 = 0;
		printf_s("Hey, it looks like you tried to carry too many traps. Don't worry I'll carry some for you friend, don't want you to trip and fall now do we?");
	}
	if (Trap2 > 0)
	{
		Trap2 = 0;
		printf_s("Hey, it looks like you tried to carry too many traps. Don't worry I'll carry some for you friend, don't want you to trip and fall now do we?");
	}
	if (CaravanPart > 0)
	{
		CaravanPart = 0;
		printf_s("Don't worry so much my friend, take your time, those Caravan Parts aren't going anywhere");
	}
}


// Called every frame
void UPlayer_inventory::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//inventory[0] = GP;
	//inventory[1] = wood;
	//inventory[2] = CaravanPart;
	//inventory[3] = Trap1;
	//inventory[4] = Trap2;
	//inventory[5] = Bandage;
	//inventory[6] = Weapon;

	//Not sure if we'll ever use this but i wanted to add it just in case
	//if (inventory[3] == 1 || inventory[4] == 1)
	//	bl_hasTrap = true;
	//else
	//	bl_hasTrap = false;

	

	// ...
}

void UPlayer_inventory::wood_to_caravan()
{
	wood = 0;
}

void UPlayer_inventory::buy_trap()
{
	if (Trap1 == 0)
	{
		Trap1 = 1;
	}
	else
	{
		Trap2 = 1;
	}
}

