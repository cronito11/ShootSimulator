// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
// Include the list library
#include <list>

#include <array>
#include <vector>
#include <string>
#include "ShootingGameInstance.generated.h"

/**
 * 
 */
UCLASS(Config = Game, Transient, BlueprintType, Blueprintable)
class SHOOTSIMULATORGAME_API UShootingGameInstance : public UGameInstance
{
	GENERATED_BODY()
private:
	void SetBestTime(float time);
public :
	float currentLevelsTime = 0;
	float lastLevelTime = 0;
	std::list<float> BestTimes;

	void SetLevelTime(float time);
	void FinishLevels();
};
