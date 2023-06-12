#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "UIFadeInterface.generated.h"

UINTERFACE(Blueprintable)
class DUCK_API UUIFadeInterface : public UInterface {
    GENERATED_BODY()
};

class DUCK_API IUIFadeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Wait(int32 Option);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Out(int32 Option);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFadeEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void In(int32 Option);
    
};

