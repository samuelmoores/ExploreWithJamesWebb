// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnVolume.generated.h"

UCLASS()
class CPPTHIRDPERSONTEST_API ASpawnVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnVolume();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//the pickup to spawn
	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class APickup> WhatToSpawn;

	FTimerHandle SpawnTimer;

	//minimum spawn delay
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float SpawnDelayRangeLow;

	//maximum spawn delay
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float SpawnDelayRangeHigh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//returns WhereToSpawn subobject
	FORCEINLINE class UBoxComponent* GetWhereToSpawn() const {return WhereToSpawn;}

	//find a random point within the box component
	UFUNCTION(BlueprintPure, Category = "Spawning")
	FVector GetRandomPointsInVolume();
	
private:
	//Box Component to specify where pickups should be spawned
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = true))
	class UBoxComponent* WhereToSpawn;

	//Handle spawning a new pickup
	void SpawnPickup();

	//The current spawn delay
	float SpawnDelay;

};
