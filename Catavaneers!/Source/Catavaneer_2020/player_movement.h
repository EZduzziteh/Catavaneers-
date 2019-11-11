// Fill out your copyright notice in the Description page of Project Settings.
//Write by WIlliam
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "player_movement.generated.h"
class UCameraComponent;
class USpringArmComponent;
class ATPSWeapon;

UCLASS()
class CATAVANEER_2020_API Aplayer_movement : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	Aplayer_movement();
	void MoveForward(float axis);
	void MoveSideways(float axis);
	void StartCrouch();
	void EndCrouch();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom Components")
		UCameraComponent* cameraComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom Components")
		USpringArmComponent* springComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	inline UCameraComponent* GetCamera() { return cameraComp; }
};
