// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameManager.generated.h"

UCLASS()
class SHOOTSIMULATORGAME_API AGameManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameManager();
	void AddTarget();
	void RemoveTarget();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int32 TargetCount = 0;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	int GetTargetCount();

};
