// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "DTFCppUserWidget.h"
#include "DTFCppChatSystem.h"
#include "DTFCppPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class DTFCPP_API ADTFCppPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
		ADTFCppPlayerController(const FObjectInitializer& ObjectInitializer);
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game HUD")
			TSubclassOf<class UDTFCppUserWidget> DTFCppGameHUD;
		UPROPERTY()
			UDTFCppUserWidget* MyGameHUD;
		void BeginPlay();

};
