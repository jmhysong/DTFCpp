// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameInstance.h"
#include "DTFCppChatSystem.h"
#include "DTFCppGameInstance.generated.h"


UCLASS()
class DTFCPP_API UDTFCppGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
		UDTFCppGameInstance(const FObjectInitializer& ObjectInitializer);
		/*
		UPROPERTY()
			TArray<ADTFCppChatSystem*> Players_In_Chat;
		UPROPERTY()
			TArray<FString> Chat_Groups;
		*/
	
};
