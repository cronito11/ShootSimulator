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
	//ScoreText->SetText(FString::Printf(TEXT("%d"), NewScore));
}