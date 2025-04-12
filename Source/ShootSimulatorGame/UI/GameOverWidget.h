// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameOverWidget.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTSIMULATORGAME_API UGameOverWidget : public UUserWidget
{
	GENERATED_BODY()
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* BestScore;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* LastScore;
};
