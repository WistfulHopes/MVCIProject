#pragma once
#include "DuckModule.h"
#include "EInGameRewardRetType.generated.h"

UENUM(BlueprintType)
enum class EInGameRewardRetType : uint8 {
    INVALID,
    CLOSE,
    OPEN,
    OPEN_NOW,
};

