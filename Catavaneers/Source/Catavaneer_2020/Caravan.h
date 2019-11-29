// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Caravan.generated.h"

class UCaravan_inventory;
UCLASS()
class CATAVANEER_2020_API ACaravan : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACaravan();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Caravan Inventory")
		TSubclassOf<UCaravan_inventory> CaravanInventory;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
