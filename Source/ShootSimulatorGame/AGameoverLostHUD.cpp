// Fill out your copyright notice in the Description page of Project Settings.


#include "AGameoverLostHUD.h"
#include "Blueprint/UserWidget.h"

AAGameoverLostHUD::AAGameoverLostHUD()
{
	// Set the crosshair texture
	static ConstructorHelpers::FClassFinder<UUserWidget> CrosshairHUDObj(TEXT("/Game/UIs/GameOver_2"));
	GamePlayUIClass = CrosshairHUDObj.Class;
}


void AAGameoverLostHUD::PostInitializeComponents()
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