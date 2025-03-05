// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NPCController.generated.h"

/**
 * 
 */
UCLASS()
class AIINTERACTION_API ANPCController : public AAIController
{
	GENERATED_BODY()

public:
	explicit ANPCController(FObjectInitializer const& ObjectInitializer); 

	virtual void OnPossess(APawn* InPawn) override;

};
