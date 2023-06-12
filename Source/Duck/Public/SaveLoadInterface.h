#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EDataType.h"
#include "SaveLoadInterface.generated.h"

UINTERFACE(Blueprintable)
class DUCK_API USaveLoadInterface : public UInterface {
    GENERATED_BODY()
};

class DUCK_API ISaveLoadInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveWithRetryOption(EDataType Data, bool IsRetryCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Save(EDataType Data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadWithRetryOption(EDataType Data, bool IsRetryCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Load(EDataType Data);
    
};

