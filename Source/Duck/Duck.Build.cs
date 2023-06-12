using UnrealBuildTool;

public class Duck : ModuleRules {
    public Duck(TargetInfo Target) {
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
