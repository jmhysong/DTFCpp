// Fill out your copyright notice in the Description page of Project Settings.

#include "DTFCpp.h"
#include "DTFCppGameMode.h"
#include "DTFCppChatSystem.h"
#include "DTFCppPlayerController.h"
#include "DTFCppHUD.h"




ADTFCppGameMode::ADTFCppGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	DefaultPawnClass = ADTFCppChatSystem::StaticClass();
	HUDClass = ADTFCppHUD::StaticClass();
	PlayerControllerClass = ADTFCppPlayerController::StaticClass();
}
