// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreManager.h"

void AScoreManager::AddTarget()
{
	targets++;
	AScoreManager::UpdateHUD();
}

void AScoreManager::RemoveTarget()
{
	targets--;
	AScoreManager::UpdateHUD();
}

void AScoreManager::UpdateHUD()
{
	UE_LOG(LogTemp, Warning, TEXT("Target Remind %s"), targets);
}