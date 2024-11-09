// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DK_Prueba : ModuleRules
{
	public DK_Prueba(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
