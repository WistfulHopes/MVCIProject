#pragma once
#include "DuckModule.h"
#include "FloatParam.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FFloatParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FFloatParam();
};

