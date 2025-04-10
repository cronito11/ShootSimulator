// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Interfaces/Damageable.h"
#include "../GameManager.h"
#include "Target.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHOOTSIMULATORGAME_API UTarget : public UActorComponent, public IDamageable
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTarget();
	float helath = 100.0f;
	AGameManager* scoreManager;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void TakeDamage(float DamageAmount) override;
};
