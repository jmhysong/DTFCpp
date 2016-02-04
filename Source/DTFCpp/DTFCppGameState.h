// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameState.h"
#include "DTFCppGameState.generated.h"

/**
 * 
 */
UCLASS()
class DTFCPP_API ADTFCppGameState : public AGameState
{
	GENERATED_BODY()

public:
	ADTFCppGameState(const FObjectInitializer& ObjectInitializer);
	void ADTFCppGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
};
