#pragma once
#include "DuckModule.h"
#include "EEventParamType.h"
#include "EventParam.generated.h"

USTRUCT(BlueprintType)
struct FEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventParamType Type;
    
    DUCK_API FEventParam();
};

