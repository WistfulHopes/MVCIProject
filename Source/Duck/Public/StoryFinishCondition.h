#pragma once
#include "DuckModule.h"
#include "EConfigFinishCond.h"
#include "StoryFinishCondition.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FStoryFinishCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConfigFinishCond Type;
    
    FStoryFinishCondition();
};

