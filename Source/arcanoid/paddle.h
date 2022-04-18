// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "paddle.generated.h"

class UFloatingPawnMovement;

UCLASS()
class ARCANOID_API Apaddle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	Apaddle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BluprintReadOnly)
		UStaticMeshComponent* SM_Paddle;

	UPROPERTY(VisibleAnywhere, BluprintReadOnly)
		UFloatingPawnMovement* FlotingMovement;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Move(float AxisValue);
};
