// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingGameInstance.h"

void UShootingGameInstance::SetBestTime(float time)
{
	
    BestTimes.push_back(time);
	BestTimes.sort(); // sort the list
	for (auto it = BestTimes.begin(); it != BestTimes.end(); ++it)
	{
		UE_LOG(LogTemp, Warning, TEXT("Best Time: %f"), *it);
	}
}

void UShootingGameInstance::SetLevelTime( float time) 
{
    currentLevelsTime += time;
}
void UShootingGameInstance::FinishLevels()
{
	SetBestTime(currentLevelsTime);
	lastLevelTime = currentLevelsTime;
	currentLevelsTime = 0.0f;
}