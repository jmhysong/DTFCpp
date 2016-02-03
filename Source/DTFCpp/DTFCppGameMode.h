// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "DTFCppGameMode.generated.h"

UCLASS()
class DTFCPP_API ADTFCppGameMode : public AGameMode
{
	GENERATED_BODY()

public:
		ADTFCppGameMode(const FObjectInitializer& ObjectInitializer);
	
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
			TSubclassOf<class APawn> DTFCppChar;
		UPROPERTY()
			APawn* DTFCppCharChat;
	
};
