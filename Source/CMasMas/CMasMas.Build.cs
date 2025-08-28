// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CMasMas : ModuleRules
{
	public CMasMas(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"CMasMas",
			"CMasMas/Variant_Platforming",
			"CMasMas/Variant_Platforming/Animation",
			"CMasMas/Variant_Combat",
			"CMasMas/Variant_Combat/AI",
			"CMasMas/Variant_Combat/Animation",
			"CMasMas/Variant_Combat/Gameplay",
			"CMasMas/Variant_Combat/Interfaces",
			"CMasMas/Variant_Combat/UI",
			"CMasMas/Variant_SideScrolling",
			"CMasMas/Variant_SideScrolling/AI",
			"CMasMas/Variant_SideScrolling/Gameplay",
			"CMasMas/Variant_SideScrolling/Interfaces",
			"CMasMas/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
