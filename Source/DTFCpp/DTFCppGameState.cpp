// Fill out your copyright notice in the Description page of Project Settings.

#include "DTFCpp.h"
#include "DTFCppGameState.h"
#include "UnrealNetwork.h"

void ADTFCppGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

ADTFCppGameState::ADTFCppGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

