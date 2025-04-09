// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootSimulatorGameHUD.h"
#include "Engine/Canvas.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "CanvasItem.h"
#include "EngineUtils.h" // Include the header for TActorIterator
#include "GameManager.h"
#include "UObject/ConstructorHelpers.h"

AShootSimulatorGameHUD::AShootSimulatorGameHUD()
{
	// Set the crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshairTexObj(TEXT("/Game/FirstPerson/Textures/FirstPersonCrosshair"));
	CrosshairTex = CrosshairTexObj.Object;
}


void AShootSimulatorGameHUD::DrawHUD()
{
	Super::DrawHUD();

	// Draw very simple crosshair

	// find center of the Canvas
	const FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);
	const FVector2D Top(Canvas->ClipX * 1.0f, Canvas->ClipY * 1.0f);

	// offset by half the texture's dimensions so that the center of the texture aligns with the center of the Canvas
	const FVector2D CrosshairDrawPosition( (Center.X),
										   (Center.Y + 20.0f));

	// draw the crosshair
	FCanvasTileItem TileItem( CrosshairDrawPosition, CrosshairTex->Resource, FLinearColor::White);
	TileItem.BlendMode = SE_BLEND_Translucent;
	Canvas->DrawItem( TileItem );


	// Get the GameManager instance
	if (!GameManager)
	{
		for (TActorIterator<AGameManager> It(GetWorld()); It; ++It)
		{
			GameManager = *It;
			break;
		}
	}

	// Check if GameManager is valid
	if (GameManager)
	{

		FString TargetCountText = FString::Printf(TEXT("Targets: %d"), GameManager->GetTargetCount());
		FVector2D TextPosition(Center.X, Center.Y - 200.0f); // Adjust position as needed
		FLinearColor TextColor = FLinearColor::Yellow; // Choose your color
		FLinearColor ShadowColor = FLinearColor::Black; // Shadow color
		FFontRenderInfo RenderInfo = Canvas->CreateFontRenderInfo(true, false,
			FColor::Black, FVector2D(15, 15));
		// Draw shadow text
		Canvas->DrawText(GEngine->GetLargeFont(), TargetCountText, TextPosition.X + 1.0f, TextPosition.Y + 1.0f, 4.0f,4.0f, RenderInfo);

		// Draw main text
		//Canvas->DrawText(GEngine->GetLargeFont(), TargetCountText, TextPosition.X, TextPosition.Y, 1.0f, TextColor);
	}


}
