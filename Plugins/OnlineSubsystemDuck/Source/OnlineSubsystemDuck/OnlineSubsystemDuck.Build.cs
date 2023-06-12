using UnrealBuildTool;

public class OnlineSubsystemDuck : ModuleRules {
    public OnlineSubsystemDuck(TargetInfo Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
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
