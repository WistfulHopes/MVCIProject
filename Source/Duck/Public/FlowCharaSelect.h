#pragma once
#include "DuckModule.h"
#include "EDuckLoadPrio.h"
#include "FlowBase.h"
#include "FlowCharaSelect.generated.h"

UCLASS(Blueprintable)
class DUCK_API AFlowCharaSelect : public AFlowBase {
    GENERATED_BODY()
public:
    AFlowCharaSelect();
    UFUNCTION(BlueprintCallable)
    int32 RequestLoadCharaSelectAssets(int32 teamNo, int32 PartnerNo, int32 CharaNo, EDuckLoadPrio Prio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadEndVersusAssets(int32 teamNo, int32 PartnerNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadEndCharaSelectAssets(int32 teamNo, int32 PartnerNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadEndAllVersusAssets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadEndAllCharaSelectAssets();
    
};

