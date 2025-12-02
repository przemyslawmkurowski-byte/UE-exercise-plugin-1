// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_exercise_plugin_1 : ModuleRules
{
	public UE_exercise_plugin_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
