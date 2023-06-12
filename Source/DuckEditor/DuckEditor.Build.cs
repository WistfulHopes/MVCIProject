using UnrealBuildTool;

public class DuckEditor : ModuleRules {
	public DuckEditor(TargetInfo Target)
    {
        PrivateDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "Slate",
            "SlateCore",
            "UnrealEd",
            "Duck",
        });
    }
}
