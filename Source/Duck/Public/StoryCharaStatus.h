#pragma once
#include "DuckModule.h"
#include "EStoryCharaStatusType.h"
#include "StoryCharaStatus.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FStoryCharaStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoryCharaStatusType Type;
    
    FStoryCharaStatus();
};

