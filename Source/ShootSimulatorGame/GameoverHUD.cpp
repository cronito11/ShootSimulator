// Fill out your copyright notice in the Description page of Project Settings.


#include "GameoverHUD.h"

// Fill out your copyright notice in the Description page of Project Settings.
#include "Blueprint/UserWidget.h"


AGameoverHUD::AGameoverHUD()
{
	// Set the crosshair texture
	static ConstructorHelpers::FClassFinder<UUserWidget> CrosshairHUDObj(TEXT("/Game/UIs/Gameover"));
	GamePlayUIClass = CrosshairHUDObj.Class;
}


void AGameoverHUD::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (GamePlayUIClass)
	{
		GamePlayUI = CreateWidget<UUserWidget>(GetWorld(), GamePlayUIClass);
		if (GamePlayUI)
		{
			GamePlayUI->AddToViewport();
		}
	}
}

void AGameoverHUD::DrawHUD()
{
	Super::DrawHUD();
}