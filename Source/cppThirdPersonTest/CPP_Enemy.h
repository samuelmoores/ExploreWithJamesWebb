// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPP_Enemy.generated.h"

UCLASS()
class CPPTHIRDPERSONTEST_API ACPP_Enemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPP_Enemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Variables

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float health = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isDead = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isHit = false;

	int myDamageCounter = 0;

	UFUNCTION(BlueprintCallable)
	void takeDamage(float damageAmount);

	UFUNCTION(BlueprintCallable)
	void Attack();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool spawnEnemy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isAttacking = false;

};
