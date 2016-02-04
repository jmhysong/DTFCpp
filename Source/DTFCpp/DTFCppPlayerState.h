// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerState.h"
#include "DTFCppPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class DTFCPP_API ADTFCppPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	ADTFCppPlayerState(const FObjectInitializer& ObjectInitializer);
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	UPROPERTY(BlueprintReadOnly, Replicated)
		int32 promotion;
	
	
};
