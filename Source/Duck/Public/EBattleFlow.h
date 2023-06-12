#pragma once
#include "DuckModule.h"
#include "EBattleFlow.generated.h"

UENUM(BlueprintType)
enum class EBattleFlow : uint8 {
    INIT,
    WAIT,
    APPEAR,
    READY,
    NOW,
    NEXT,
    END,
    WIPE_WAIT,
    WIPE,
    WIN,
    FINISH,
    DUMMY,
    CAPT_WAIT,
};

