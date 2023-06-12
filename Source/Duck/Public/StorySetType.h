#pragma once
#include "DuckModule.h"
#include "EStorySetOperation.h"
#include "StorySetType.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FStorySetType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArrayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStorySetOperation Type;
    
    FStorySetType();
};

