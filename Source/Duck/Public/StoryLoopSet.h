#pragma once
#include "DuckModule.h"
#include "StoryLoopSet.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FStoryLoopSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FStoryLoopSet();
};

