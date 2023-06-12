#pragma once
#include "DuckModule.h"
#include "EmissiveFlashValue.generated.h"

USTRUCT(BlueprintType)
struct FEmissiveFlashValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntensityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntensityMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    DUCK_API FEmissiveFlashValue();
};

