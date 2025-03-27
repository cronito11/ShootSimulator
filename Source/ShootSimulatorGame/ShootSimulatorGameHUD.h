// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ShootSimulatorGameHUD.generated.h"

UCLASS()
class AShootSimulatorGameHUD : public AHUD
{
	GENERATED_BODY()

public:
	AShootSimulatorGameHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

