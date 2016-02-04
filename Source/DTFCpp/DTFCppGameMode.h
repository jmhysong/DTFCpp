// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "DTFCppPlayerController.h"
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
		void StartPlay() override;
		void SetPromo(int32 amount);
		int32 player1promotion;
		int32 player2promotion;
		void PostLogin(APlayerController* NewPlayer) override;
		
};
