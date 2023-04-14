// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Pistol.h"

ACPP_Pistol::ACPP_Pistol()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("This is a debug message!"));

	
	
}

void ACPP_Pistol::BeginPlay()
{
	Super::BeginPlay();

	
	
}

void ACPP_Pistol::OnOverlapBegin(AActor* OverlappedActor, UPrimitiveComponent* OtherComp)
{
	
}



