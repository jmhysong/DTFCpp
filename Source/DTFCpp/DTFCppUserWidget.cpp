// Fill out your copyright notice in the Description page of Project Settings.

#include "DTFCpp.h"
#include "DTFCppUserWidget.h"
#include "DTFCppPlayerController.h"
#include "DTFCppGameState.h"
#include "DTFCppPlayerState.h"
#include "UnrealNetwork.h"




UDTFCppUserWidget::UDTFCppUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

int32 UDTFCppUserWidget::GetPromo()
{
	ADTFCppPlayerController* pc = Cast<ADTFCppPlayerController>(this->GetOwningPlayer());
	//ADTFCppPlayerController* pc = Cast<ADTFCppPlayerController>(GetOwningLocalPlayer()->PlayerController);
	ADTFCppPlayerState* ps = Cast<ADTFCppPlayerState>(pc->PlayerState);
	if (ps != NULL)
	{
		return ps->promotion;
	}
	else
	{
		return 666;
	}
		//ADTFCppGameState* gs = Cast<ADTFCppGameState>(GetWorld()->GetGameState());
	//return gs->promotion;
	//return 0;
}
