// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"
#include "MainMenuHUD.h"
#include "GameoverHUD.h"
#include "Kismet/GameplayStatics.h"
AMainMenu::AMainMenu()
{
	if(UGameplayStatics::GetCurrentLevelName(this) == "MainMenu")
		HUDClass = AMainMenuHUD::StaticClass();
	else
		HUDClass = AGameoverHUD::StaticClass();
}

void AMainMenu::BeginPlay()
{
    Super::BeginPlay();

    // Now, get the player controller to show the mouse cursor
    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    if (PlayerController)
    {
        // Show the mouse cursor
        PlayerController->bShowMouseCursor = true;

        // Optionally, you can set cursor behavior
        PlayerController->bEnableClickEvents = true;   // Enable click events
        PlayerController->bEnableMouseOverEvents = true; // Enable mouse-over events
    }
}