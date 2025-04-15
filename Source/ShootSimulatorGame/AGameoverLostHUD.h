// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AGameoverLostHUD.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class SHOOTSIMULATORGAME_API AAGameoverLostHUD : public AHUD
{
	GENERATED_BODY()
protected:
	virtual void PostInitializeComponents() override;
public:
	AAGameoverLostHUD();
private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;
	class AGameManager* GameManager;
	TSubclassOf<UUserWidget> GamePlayUIClass;
	UUserWidget* GamePlayUI;
};
