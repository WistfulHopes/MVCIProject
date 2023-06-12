#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "DuckBaseSystem.h"
#include "DuckDebugSystem.generated.h"

class UDuckDebugSystem;
class UObject;

UCLASS(Blueprintable)
class DUCK_API UDuckDebugSystem : public UDuckBaseSystem {
    GENERATED_BODY()
public:
    UDuckDebugSystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDuckDebugSystem* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    void DuckPrintLowLevel(const FString& Msg);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void DuckPrint(UObject* WorldContextObject, const FString& inString, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
    
};

