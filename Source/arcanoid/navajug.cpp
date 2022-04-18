// Fill out your copyright notice in the Description page of Project Settings.


#include "navajug.h"

// Sets default values
Anavajug::Anavajug()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Anavajug::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Anavajug::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Anavajug::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

