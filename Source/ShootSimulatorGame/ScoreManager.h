// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ScoreManager.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTSIMULATORGAME_API AScoreManager : public AGameModeBase
{
	GENERATED_BODY()
public:
	int32 targets = 0;

	void AddTarget();
	void RemoveTarget();
protected:
	void UpdateHUD();
};
