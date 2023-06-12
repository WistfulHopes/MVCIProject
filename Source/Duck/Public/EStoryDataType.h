#pragma once
#include "DuckModule.h"
#include "EStoryDataType.generated.h"

UENUM(BlueprintType)
enum class EStoryDataType : uint8 {
    STORY_DATA_PLAYING,
    STORY_DATA_LOADING,
    STORY_DATA_MAX UMETA(Hidden),
};

