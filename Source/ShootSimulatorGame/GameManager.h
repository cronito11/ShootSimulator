// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameManager.generated.h"

UCLASS()
class SHOOTSIMULATORGAME_API AGameManager : public AActor
{
	GENERATED_BODY()
private:
	bool LevelFinished;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scene")
	FString NextLevel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targets")
	int32 TargetCount = 14;
	double Timer = 0.0;
	void UpdateUI();
	void UpdateTimer();
	void ChangeLevel();

public:	
	// Sets default values for this actor's properties
	AGameManager();
	void AddTarget();
	void RemoveTarget();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	int GetTargetCount();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> GamePlayUIClass;


};
