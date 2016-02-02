// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "DTFCppUserWidget.h"
#include "DTFCppChatSystem.generated.h"

UCLASS()
class DTFCPP_API ADTFCppChatSystem : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADTFCppChatSystem(const FObjectInitializer& ObjectInitializer);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
	
	
};
