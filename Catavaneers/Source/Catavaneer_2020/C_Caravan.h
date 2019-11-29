// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "C_Caravan.generated.h"

UCLASS()
class CATAVANEER_2020_API AC_Caravan : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AC_Caravan();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FPlane startLocation;
	FPlane endLocation;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void LeaveNode();
	void ArriveToNode();

};
