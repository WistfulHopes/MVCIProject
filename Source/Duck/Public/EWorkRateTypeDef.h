#pragma once
#include "DuckModule.h"
#include "EWorkRateTypeDef.generated.h"

UENUM(BlueprintType)
enum class EWorkRateTypeDef : uint8 {
    WR_SYSTEM,
    WR_GAME,
    WR_STAGE,
    WR_UI,
    WR_PLAYER,
    WR_UI_ALWAYS_MOVE,
    WR_MAX UMETA(Hidden),
};

