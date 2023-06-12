#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PopupInterface.generated.h"

UINTERFACE(Blueprintable)
class DUCK_API UPopupInterface : public UInterface {
    GENERATED_BODY()
};

class DUCK_API IPopupInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckInputPopupActive();
    
};

