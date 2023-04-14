// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_Gun.h"
#include "CPP_Pistol.generated.h"

/**
 * 
 */
UCLASS()
class CPPTHIRDPERSONTEST_API ACPP_Pistol : public ACPP_Gun
{
	GENERATED_BODY()

public:
	
	ACPP_Pistol();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnOverlapBegin(class AActor* OverlappedActor, class UPrimitiveComponent* OtherComp);
	
};
