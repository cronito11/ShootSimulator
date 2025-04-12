// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"

#include "Kismet/GameplayStatics.h"

#include "ShootingGameInstance.h" // Include the header for UShootingGameInstance
#include "Blueprint/UserWidget.h"

#include "UI/GamePlayUI.h"
#include "ShootSimulatorGameHUD.h"
#include "EngineUtils.h" // Include the header for TActorIterator


// Sets default values
AGameManager::AGameManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

UGamePlayUI* GamePlayUI;

// Called when the game starts or when spawned
void AGameManager::BeginPlay()
{
	Super::BeginPlay();
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	UE_LOG(LogTemp, Warning, TEXT("PC: %d"), PC);
	if (PC)
	{
		AShootSimulatorGameHUD* HUD = Cast<AShootSimulatorGameHUD>(PC->GetHUD());

		if (HUD)
		{
			GamePlayUI = HUD->GetGamePlayUI();
		}
	}

	UpdateUI();
}

// Called every frame
void AGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (LevelFinished)
		return;
	Timer += DeltaTime;
	UpdateTimer();
}


void AGameManager::AddTarget()
{
	TargetCount++;
	UpdateUI();
}

void AGameManager::RemoveTarget()
{
	TargetCount--;
	if (TargetCount <= 0)
		ChangeLevel();
	else
		UpdateUI();
}

int AGameManager::GetTargetCount()
{
	return TargetCount;
}

void AGameManager::UpdateTimer()
{
	if (!GamePlayUI || LevelFinished)
		return;
	GamePlayUI->UpdateTimer(Timer);
}

void AGameManager::UpdateUI()
{
	if (!GamePlayUI)
		return;
	GamePlayUI->UpdateTargetCount(TargetCount);
	
}

void AGameManager::ChangeLevel()
{
	// Specify the name of the level you want to load
	FName LevelName = FName(NextLevel);  // Replace with the level's name

	// Load the new level
	LevelFinished = true;
	// Access the custom GameInstance
	if (UShootingGameInstance* SGI = Cast<UShootingGameInstance>(GetGameInstance()))
	{
		// Example usage: setting time for level 0
		SGI->SetLevelTime(Timer); // or whatever logic you want
		if(Finished)
		{
			// Save the game state or perform any other necessary actions
			SGI->FinishLevels();
		}
		UE_LOG(LogTemp, Warning, TEXT("Found"));

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not Found"));
	}

	UGameplayStatics::OpenLevel(GetWorld(), LevelName);
}