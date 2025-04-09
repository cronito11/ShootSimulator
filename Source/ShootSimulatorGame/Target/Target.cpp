// Fill out your copyright notice in the Description page of Project Settings.


#include "Target.h"
#include "EngineUtils.h" // Include the header for TActorIterator

// Sets default values for this component's properties
UTarget::UTarget()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTarget::BeginPlay()
{
	Super::BeginPlay();

	// Find the GameManager in the world
	for (TActorIterator<AGameManager> It(GetWorld()); It; ++It)
	{
		scoreManager = *It;
		break;
	}
	scoreManager->AddTarget();	
}


// Called every frame
void UTarget::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	//UE_LOG(LogTemp, Warning, TEXT("Target Remind %s"), scoreManager);
	// ...
}

void UTarget::TakeDamage(float damageAmount)
{
	GetOwner()->Destroy();
	scoreManager->RemoveTarget();
	// Implement damage logic here
}

