#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SmallMemberListInterface.generated.h"

UINTERFACE(Blueprintable)
class DUCK_API USmallMemberListInterface : public UInterface {
    GENERATED_BODY()
};

class DUCK_API ISmallMemberListInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickSmallMemberList(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroy();
    
};

