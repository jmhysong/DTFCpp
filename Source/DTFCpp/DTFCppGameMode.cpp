// Fill out your copyright notice in the Description page of Project Settings.

#include "DTFCpp.h"
#include "DTFCppGameMode.h"
#include "DTFCppPlayerController.h"
#include "DTFCppGameState.h"
#include "DTFCppPlayerState.h"
#include "DTFCppHUD.h"





ADTFCppGameMode::ADTFCppGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	//playerIds.Reserve(1000);
	//playerPromotions.Reserve(1000);
	static ConstructorHelpers::FClassFinder<ACharacter>DefChar(TEXT("Blueprint'/Game/Blueprints/DTFCppCharacter.DTFCppCharacter_C'"));
	DefaultPawnClass = DefChar.Class;
	HUDClass = ADTFCppHUD::StaticClass();
	PlayerControllerClass = ADTFCppPlayerController::StaticClass();
	GameStateClass = ADTFCppGameState::StaticClass();
	PlayerStateClass = ADTFCppPlayerState::StaticClass();
	
}

void ADTFCppGameMode::StartPlay()
{
	Super::StartPlay();
	ADTFCppGameState* gs = Cast<ADTFCppGameState>(GetWorld()->GetGameState());
	TArray<APlayerState*> theArray = gs->PlayerArray;
	for (int32 x = 0; x < theArray.Num(); x++)
	{
		ADTFCppPlayerState* ps = Cast<ADTFCppPlayerState>(theArray[x]);
		ps->promotion = 5;
	}



	/*
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; It++)
	{
		ADTFCppPlayerController* pc = Cast<ADTFCppPlayerController>(*It);
		ADTFCppPlayerState* pcps = Cast<ADTFCppPlayerState>(pc->PlayerState);
		pcps->promotion = 5;
	}
	*/
}

void ADTFCppGameMode::SetPromo(int32 amount)
{
	
}

void ADTFCppGameMode::PostLogin(APlayerController* NewPlayer)
{
	ADTFCppPlayerController* pc = Cast<ADTFCppPlayerController>(NewPlayer);
	ADTFCppPlayerState* ps = Cast<ADTFCppPlayerState>(pc->PlayerState);
	ps->promotion = 5;
}
