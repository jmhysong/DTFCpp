// Fill out your copyright notice in the Description page of Project Settings.

#include "DTFCpp.h"
#include "DTFCppGameMode.h"
#include "DTFCppChatSystem.h"
#include "DTFCppPlayerController.h"
#include "DTFCppHUD.h"




ADTFCppGameMode::ADTFCppGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	static ConstructorHelpers::FClassFinder<ACharacter>DefChar(TEXT("Blueprint'/Game/Blueprints/DTFCppCharacter.DTFCppCharacter_C'"));
	DefaultPawnClass = DefChar.Class;
	HUDClass = ADTFCppHUD::StaticClass();
	PlayerControllerClass = ADTFCppPlayerController::StaticClass();
}
