// Fill out your copyright notice in the Description page of Project Settings.

#include "DTFCpp.h"
#include "DTFCppGameInstance.h"
#include "UnrealNetwork.h"

UDTFCppGameInstance::UDTFCppGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UDTFCppGameInstance::GetLifetimeReplicatedProps(TArray< class FLifetimeProperty > & OutLifetimeProps)
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UDTFCppGameInstance, Chat_Groups);
}
