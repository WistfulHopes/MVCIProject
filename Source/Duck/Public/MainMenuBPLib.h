#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "MainMenuBPLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class DUCK_API UMainMenuBPLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMainMenuBPLib();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ShopStartToBrowse_Latent(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void ShopStartToBrowse();
    
    UFUNCTION(BlueprintCallable)
    static void ShopShutdownh();
    
    UFUNCTION(BlueprintCallable)
    static void LeaveMainMenu();
    
};

