// Fill out your copyright notice in the Description page of Project Settings.


#include "GameOverWidget.h"
#include "../ShootingGameInstance.h"
#include "Components/TextBlock.h"

void UGameOverWidget::NativeConstruct()
{
	Super::NativeConstruct();
	UShootingGameInstance* GameInstance = Cast<UShootingGameInstance>(GetGameInstance());
	FString ScoreText = TEXT("Best Times:\n");
	
	int32 Index = 1;
	for (float Time : GameInstance->BestTimes)
	{
		ScoreText += FString::Printf(TEXT("%d. %.2f seconds\n"), Index, Time);
		Index++;
	}


	BestScore->SetText(FText::FromString(ScoreText));
	LastScore->SetText(FText::FromString(FString::Printf(TEXT("Last Score: %.2f seconds"), GameInstance->lastLevelTime)));
}