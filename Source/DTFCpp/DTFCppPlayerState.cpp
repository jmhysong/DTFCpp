// Fill out your copyright notice in the Description page of Project Settings.

#include "DTFCpp.h"
#include "DTFCppPlayerState.h"
#include "UnrealNetwork.h"



ADTFCppPlayerState::ADTFCppPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}


void ADTFCppPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ADTFCppPlayerState, promotion);
}
