#pragma once
#include "DuckModule.h"
#include "EStorySkipResult.generated.h"

UENUM(BlueprintType)
enum class EStorySkipResult : uint8 {
    STORY_SKIP_RESULT_BATTLE,
    STORY_SKIP_RESULT_MOVIE,
    STORY_SKIP_RESULT_END,
    STORY_SKIP_RESULT_CREDIT,
    STORY_SKIP_RESULT_MAX UMETA(Hidden),
};

