// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MVP2 : ModuleRules
{
	public MVP2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}