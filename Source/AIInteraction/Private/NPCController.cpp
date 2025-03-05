// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCController.h"

#include "NPC.h"
#include "BehaviorTree/BehaviorTree.h"

ANPCController::ANPCController(FObjectInitializer const& ObjectInitializer)
{
}

void ANPCController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (ANPC* MyNPC = Cast<ANPC>(InPawn))
	{
		if (UBehaviorTree* Tree = MyNPC->GetBehaviorTree())
		{
			UBlackboardComponent* BComponent;

			UseBlackboard(Tree->BlackboardAsset, BComponent);
			Blackboard = BComponent;

			RunBehaviorTree(Tree);
		}
	}
}
