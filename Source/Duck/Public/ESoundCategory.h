#pragma once
#include "DuckModule.h"
#include "ESoundCategory.generated.h"

UENUM(BlueprintType)
enum class ESoundCategory : uint8 {
    CATEGORY_BGM,
    CATEGORY_VOICE,
    CATEGORY_SE,
    CATEGORY_AMBIENT,
    CATEGORY_SYS_VOICE,
    CATEGORY_SYS_SE,
    CATEGORY_VOICE_CHAT,
    CATEGORY_STORY_MOVIE,
    CATEGORY_NA_BATTLE,
    CATEGORY_MAX UMETA(Hidden),
};

