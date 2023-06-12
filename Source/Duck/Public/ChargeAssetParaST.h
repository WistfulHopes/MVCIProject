#pragma once
#include "DuckModule.h"
#include "ChargeAssetParaKey.h"
#include "ChargeAssetParaST.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FChargeAssetParaST {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OKKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChargeAssetParaKey OKPara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NGKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChargeAssetParaKey NGPara;
    
    FChargeAssetParaST();
};

