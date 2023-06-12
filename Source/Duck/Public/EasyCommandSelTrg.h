#pragma once
#include "DuckModule.h"
#include "EasyCommandSelTrg.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FEasyCommandSelTrg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 No;
    
    FEasyCommandSelTrg();
};

