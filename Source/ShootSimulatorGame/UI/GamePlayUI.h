// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GamePlayUI.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SHOOTSIMULATORGAME_API UGamePlayUI : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TargetCountText;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TTimer;



	UFUNCTION(BlueprintCallable, Category = "UI")
	void UpdateTargetCount(int TargetCount);

	UFUNCTION(BlueprintCallable, Category = "UI")
	void UpdateTimer(int time);

	UFUNCTION(BlueprintPure, Category = "UI")
	FText GetTargetCountText() const;

};

