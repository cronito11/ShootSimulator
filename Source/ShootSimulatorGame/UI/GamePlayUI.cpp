
#include "GamePlayUI.h"
#include "../GameManager.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"

void UGamePlayUI::UpdateTargetCount(int TargetCount)
{
	if (TargetCountText)
	{
		TargetCountText->SetText(FText::FromString(FString::Printf(TEXT("Targets Remaining: %d"), TargetCount)));
	}
}

void UGamePlayUI::UpdateTimer(int time)
{
	// Assuming 'time' is an integer representing seconds
	int32 Minutes = time / 60; // Calculate minutes
	int32 Seconds = time % 60; // Calculate remaining seconds

	// Format the time as "MM:SS" (e.g., "03:45")
	FString FormattedTime = FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
	if (TTimer)
	{
		// Set the formatted time in TTimer
		TTimer->SetText(FText::FromString(FormattedTime));
	}
}

FText UGamePlayUI::GetTargetCountText() const
{
	AGameManager* GameManager = Cast<AGameManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGameManager::StaticClass()));
	if (GameManager)
	{
		int32 TargetCount = GameManager->GetTargetCount();
		return FText::FromString(FString::Printf(TEXT("Target Count: %d"), TargetCount));
	}
	return FText::FromString(TEXT("Target Count: 0"));
}
