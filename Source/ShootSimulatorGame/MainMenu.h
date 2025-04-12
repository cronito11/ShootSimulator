// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenu.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class SHOOTSIMULATORGAME_API AMainMenu : public AGameModeBase
{
	GENERATED_BODY()
public:
	AMainMenu();
	virtual void BeginPlay() override;
};
