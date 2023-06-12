#pragma once
#include "DuckModule.h"
#include "GlobalParamKonjo.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FGlobalParamKonjo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Vital;
    
    FGlobalParamKonjo();
};

