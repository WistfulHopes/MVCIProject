#pragma once
#include "DuckModule.h"
#include "EScrollEventType.generated.h"

UENUM(BlueprintType)
enum class EScrollEventType : uint8 {
    EVENT_NONE,
    VIBRATION,
    HYPER_COMBO,
    BATTLE_FINISH,
    BATTLE_START,
};

