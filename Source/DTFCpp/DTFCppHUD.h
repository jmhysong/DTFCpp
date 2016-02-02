// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "DTFCppUserWidget.h"
#include "DTFCppHUD.generated.h"

UCLASS()
class DTFCPP_API ADTFCppHUD : public AHUD
{
	GENERATED_BODY()

public:
		ADTFCppHUD(const FObjectInitializer& ObjectInitializer);

	
	

	void BeginPlay();
};
