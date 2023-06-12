#pragma once
#include "DuckModule.h"
#include "OriginalMaterialParts.generated.h"

class UDuckPlayerColorMaterialAsset;

USTRUCT(BlueprintType)
struct DUCK_API FOriginalMaterialParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartsNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDuckPlayerColorMaterialAsset* OriginalMaterialAsset;
    
    FOriginalMaterialParts();
};

