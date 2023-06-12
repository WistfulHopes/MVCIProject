#pragma once
#include "DuckModule.h"
#include "EChargeAssetCond.h"
#include "ChargeAssetParaKey.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FChargeAssetParaKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChargeAssetCond KeyCond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChargeAssetCond LeverCond;
    
    FChargeAssetParaKey();
};

