#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PadManagerUpdater.generated.h"

class UObject;

UCLASS(Blueprintable)
class DUCK_API APadManagerUpdater : public AActor {
    GENERATED_BODY()
public:
    APadManagerUpdater();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="pWorldContext"))
    static void SpawnPadManagerUpdaterDoseNotExist(UObject* pWorldContext);
    
};

