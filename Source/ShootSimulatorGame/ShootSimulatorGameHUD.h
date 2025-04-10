// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ShootSimulatorGameHUD.generated.h"

UCLASS()
class AShootSimulatorGameHUD : public AHUD
{
	GENERATED_BODY()
protected:
	virtual void PostInitializeComponents() override;
public:
	AShootSimulatorGameHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

	UFUNCTION(BlueprintCallable, Category = "UI")
	UGamePlayUI* GetGamePlayUI() const { return GamePlayUI; }
private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;
	class AGameManager* GameManager;
	TSubclassOf<UUserWidget> GamePlayUIClass;
	UGamePlayUI* GamePlayUI;


};

