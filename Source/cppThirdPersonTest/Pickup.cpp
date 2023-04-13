// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"

// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//all pickups start active
	bIsActive = true;
	
	//Create static mesh component and make it the root component
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
	RootComponent = PickupMesh;

}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}

//returns active state
bool APickup::IsActive()
{
	return bIsActive;
}

//changes active state
void APickup::SetActive(bool NewPickupState)
{
	bIsActive = NewPickupState;
}




