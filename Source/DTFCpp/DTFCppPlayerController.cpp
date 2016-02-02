// Fill out your copyright notice in the Description page of Project Settings.

#include "DTFCpp.h"
#include "DTFCppPlayerController.h"
#include "Blueprint/UserWidget.h"





ADTFCppPlayerController::ADTFCppPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	static ConstructorHelpers::FClassFinder<UDTFCppUserWidget>UWidBP(TEXT("WidgetBlueprint'/Game/Blueprints/DTFCppGameHUD.DTFCppGameHUD_C'"));
	if (UWidBP.Class)
	{
		DTFCppGameHUD = UWidBP.Class;
	}
	static ConstructorHelpers::FClassFinder<ADTFCppChatSystem>CSys(TEXT("Blueprint'/Game/BPChatSystem/Blueprints/Chat_System.Chat_System_C'"));
	ChatSystem = CSys.Class;
}

void ADTFCppPlayerController::BeginPlay()
{
	
	
	if (!DTFCppGameHUD)
	{
	return;
	}
	if (!MyGameHUD)
	{
	MyGameHUD = CreateWidget<UDTFCppUserWidget>(this, DTFCppGameHUD);
	}
	if (!MyGameHUD)
	{
	return;
	}
	
	MyGameHUD->AddToViewport();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, ChatSystem->GetName());
	}
}
