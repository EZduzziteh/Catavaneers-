

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Player_Weapon.generated.h"
class USkeletalMeshComponent;
UCLASS()
class CATAVANEER_2020_API APlayer_Weapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayer_Weapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom Components")
	USkeletalMeshComponent* meshComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
