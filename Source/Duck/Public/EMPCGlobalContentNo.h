#pragma once
#include "DuckModule.h"
#include "EMPCGlobalContentNo.generated.h"

UENUM(BlueprintType)
enum class EMPCGlobalContentNo : uint8 {
    IS_BATTLE_RUNNING,
    TIME_SYSTEM,
    TIME_GAME,
    TIME_STAGE,
    TIME_UI,
    TIME_UI_ALWAYS_MOVE,
    TIME_PLAYER,
    TIME_RESERVE07,
    TIME_RESERVE08,
    TIME_RESERVE09,
};

