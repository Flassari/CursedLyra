// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CursedLyraRuntime : ModuleRules
{
    public CursedLyraRuntime(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
            new string[] {
                "Core",
                "CoreUObject",
                "Engine",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[] {
			}
        );
    }
}
