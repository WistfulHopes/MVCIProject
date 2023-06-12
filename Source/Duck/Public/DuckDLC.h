#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DuckDLC.generated.h"

class UDuckDLC;

UCLASS(Blueprintable)
class DUCK_API UDuckDLC : public UObject {
    GENERATED_BODY()
public:
    UDuckDLC();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTitleUpdateVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDuckDLC* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    void execDLCChack();
    
    UFUNCTION(BlueprintCallable)
    bool completeDLCChack();
    
};

