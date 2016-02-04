// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "DTFCppUserWidget.generated.h"

UCLASS()
class DTFCPP_API UDTFCppUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
		UDTFCppUserWidget(const FObjectInitializer& ObjectInitializer);
		UFUNCTION(BluePrintCallable, Category = "Get Promotion Points")
			int32 GetPromo();
		
	
};
