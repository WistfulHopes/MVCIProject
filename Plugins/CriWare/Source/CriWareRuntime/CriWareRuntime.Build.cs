using UnrealBuildTool;

public class CriWareRuntime : ModuleRules {
    public CriWareRuntime(TargetInfo Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "RenderCore",
        });
    }
}
