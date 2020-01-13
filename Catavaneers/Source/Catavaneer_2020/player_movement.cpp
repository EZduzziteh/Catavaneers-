// Fill out your copyright notice in the Description page of Project Settings.
//Write by WIlliam

#include "player_movement.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/World.h"
#include "Player_Weapon.h"

// Sets default values
Aplayer_movement::Aplayer_movement()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	cameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Comp"));
	springComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Comp"));
	springComp->SetupAttachment(RootComponent);
	cameraComp->SetupAttachment(springComp);
	springComp->bUsePawnControlRotation = true;
}

// Called when the game starts or when spawned
void Aplayer_movement::BeginPlay()
{
	Super::BeginPlay();
	currentWeapon = GetWorld()->SpawnActor<APlayer_Weapon>(weaponType);
	currentWeapon->AttachToComponent(Cast<USceneComponent>(GetMesh()),
		FAttachmentTransformRules::SnapToTargetIncludingScale,
		"WeaponSocket");
	currentWeapon->SetOwner(this);
}

void Aplayer_movement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Aplayer_movement::MoveForward(float axis)
{
	AddMovementInput(GetActorForwardVector() * axis );
}

void Aplayer_movement::MoveSideways(float axis)
{
	AddMovementInput(GetActorRightVector() * axis );
}

void Aplayer_movement::StartCrouch()
{
	Crouch();
}

void Aplayer_movement::EndCrouch()
{
	UnCrouch();
}
// Called every frame


// Called to bind functionality to input
void Aplayer_movement::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//PlayerInputComponent->BindAxis("MoveForwards", this, &Aplayer_movement::MoveForward);
	//PlayerInputComponent->BindAxis("MoveSideways", this, &Aplayer_movement::MoveSideways);
	PlayerInputComponent->BindAxis("LookUp", this, &Aplayer_movement::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookSideways", this, &Aplayer_movement::AddControllerYawInput);
	//PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &Aplayer_movement::StartCrouch);
	//PlayerInputComponent->BindAction("Crouch", IE_Released, this, &Aplayer_movement::EndCrouch);

}

