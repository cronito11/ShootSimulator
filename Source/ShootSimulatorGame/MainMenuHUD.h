// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MainMenuHUD.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class SHOOTSIMULATORGAME_API AMainMenuHUD : public AHUD
{
	GENERATED_BODY()
protected:
	virtual void PostInitializeComponents() override;
public:
	AMainMenuHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;
	class AGameManager* GameManager;
	TSubclassOf<UUserWidget> GamePlayUIClass;
	UUserWidget* GamePlayUI;


};
