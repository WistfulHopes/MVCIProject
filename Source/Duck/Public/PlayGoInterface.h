#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PlayGoInterface.generated.h"

UINTERFACE(Blueprintable)
class DUCK_API UPlayGoInterface : public UInterface {
    GENERATED_BODY()
};

class DUCK_API IPlayGoInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetComplete();
    
};

