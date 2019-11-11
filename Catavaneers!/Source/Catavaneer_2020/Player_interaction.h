// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Player_interaction.generated.h"

class UCaravan_inventory;
class UPlayer_inventory;
UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CATAVANEER_2020_API UPlayer_interaction : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayer_interaction();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Inventory")
		TSubclassOf<UPlayer_inventory> PlayerInventory;
	UPlayer_inventory* current_player;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Caravan Inventory")
		TSubclassOf<UCaravan_inventory> CaravanInventory;
	UCaravan_inventory* caravan_inventory;

	void wood_to_caravan();
	void buy_trap();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
