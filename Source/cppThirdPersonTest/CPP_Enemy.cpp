// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Enemy.h"

#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ACPP_Enemy::ACPP_Enemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_Enemy::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void ACPP_Enemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_Enemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACPP_Enemy::takeDamage(float damageAmount)
{
	
	health -= damageAmount;
		
	
	UE_LOG(LogTemp, Warning, TEXT("Enemy HealthCPPPPPPPPPP: %f"), health);
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("CPP -- Take Damage"));
	
	if(health < 0.0001f)
	{
		isDead = true;

		GetCharacterMovement()->MaxWalkSpeed = 0.0f;
		

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("isHit"));

		isHit = true;
	}


}

void ACPP_Enemy::Attack()
{
	isAttacking = true;
}

