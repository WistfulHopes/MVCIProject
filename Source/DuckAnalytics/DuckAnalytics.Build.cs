using UnrealBuildTool;

public class DuckAnalytics : ModuleRules {
    public DuckAnalytics(TargetInfo Target) {
        PublicDependencyModuleNames.AddRange(new string[] {
            "CableComponent",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "Duck",
            "Engine",
            "InputCore",
            "LevelSequence",
            "MovieScene",
            "MovieSceneTracks",
            "OnlineSubsystemDuck",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
