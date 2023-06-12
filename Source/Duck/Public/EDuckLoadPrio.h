#pragma once
#include "DuckModule.h"
#include "EDuckLoadPrio.generated.h"

UENUM(BlueprintType)
enum class EDuckLoadPrio : uint8 {
    DUCK_LOAD_PRIO_LOW,
    DUCK_LOAD_PRIO_MID,
    DUCK_LOAD_PRIO_HIGH,
    DUCK_LOAD_PRIO_MAX UMETA(Hidden),
};

