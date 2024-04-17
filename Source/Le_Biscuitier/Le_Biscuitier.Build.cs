// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Le_Biscuitier : ModuleRules
{
	public Le_Biscuitier(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
