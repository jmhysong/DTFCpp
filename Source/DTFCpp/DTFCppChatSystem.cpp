// Fill out your copyright notice in the Description page of Project Settings.

#include "DTFCpp.h"
#include "DTFCppChatSystem.h"




// Sets default values
ADTFCppChatSystem::ADTFCppChatSystem(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

}

// Called when the game starts or when spawned
void ADTFCppChatSystem::BeginPlay()
{
	Super::BeginPlay();

	
	
}

// Called every frame
void ADTFCppChatSystem::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ADTFCppChatSystem::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

