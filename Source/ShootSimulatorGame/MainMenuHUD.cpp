// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuHUD.h"
#include "Blueprint/UserWidget.h"


AMainMenuHUD::AMainMenuHUD()
{
	// Set the crosshair texture
	static ConstructorHelpers::FClassFinder<UUserWidget> CrosshairHUDObj(TEXT("/Game/UIs/MainMenu"));
	GamePlayUIClass = CrosshairHUDObj.Class;
}


void AMainMenuHUD::PostInitializeComponents()
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

void AMainMenuHUD::DrawHUD()
{
	Super::DrawHUD();
}