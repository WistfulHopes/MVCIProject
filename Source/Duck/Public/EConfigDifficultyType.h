#pragma once
#include "DuckModule.h"
#include "EConfigDifficultyType.generated.h"

UENUM(BlueprintType)
enum class EConfigDifficultyType : uint8 {
    VERYEASY,
    EASY,
    NORMAL,
    HARD,
    VERYHARD,
};

