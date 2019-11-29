// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Player_inventory.generated.h"


UCLASS( Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CATAVANEER_2020_API UPlayer_inventory : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayer_inventory();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	bool bl_hasTrap;
	//TArray<int32> inventory;
	//inventory.Init(0, 8);


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Inventory")
		int GP=0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Inventory")
		int wood=0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Inventory")
		int CaravanPart=0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Inventory")
		int Trap1=0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Inventory")
		int Trap2=0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Inventory")
		int Bandage=0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Inventory")
		int Weapon=0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Inventory")
		int score=0;

	void wood_to_caravan();
	void buy_trap();
};
