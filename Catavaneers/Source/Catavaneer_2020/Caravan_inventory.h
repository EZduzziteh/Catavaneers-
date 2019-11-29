// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Caravan_inventory.generated.h"


UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CATAVANEER_2020_API UCaravan_inventory : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCaravan_inventory();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//TArray<int32> inventory;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Caravan Inventory")
	int wood=0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Caravan Inventory")
	int bandages=0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Caravan Inventory")
	int traps=0;		
};
