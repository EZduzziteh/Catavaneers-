


#include "Player_Weapon.h"
#include "Components/SkeletalMeshComponent.h"


// Sets default values
APlayer_Weapon::APlayer_Weapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	meshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Camera Comp"));
	RootComponent = meshComp;
}

// Called when the game starts or when spawned
void APlayer_Weapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayer_Weapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

