#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PadConnectChangeEvent.generated.h"

class UPadConnectChangeEvent;

UCLASS(Blueprintable)
class DUCK_API UPadConnectChangeEvent : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPadConnectChange, int32, padNo, bool, IsConnect);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPadConnectChange PadConnectChange;
    
    UPadConnectChangeEvent();
    UFUNCTION(BlueprintCallable)
    static UPadConnectChangeEvent* SetUpPadConnectChangeEvent();
    
};

