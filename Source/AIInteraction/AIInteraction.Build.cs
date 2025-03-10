// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AIInteraction : ModuleRules
{
	public AIInteraction(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"GameplayTasks",
			"NavigationSystem"
		});
	}
}
