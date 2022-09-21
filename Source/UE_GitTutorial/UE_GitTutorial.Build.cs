// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_GitTutorial : ModuleRules
{
	public UE_GitTutorial(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
