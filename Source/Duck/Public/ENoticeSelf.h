#pragma once
#include "DuckModule.h"
#include "ENoticeSelf.generated.h"

UENUM(BlueprintType)
enum class ENoticeSelf : uint8 {
    NONE,
    FIRST_ATTACK,
    AERIAL_RAVE,
    ADVANCING_GUARD,
    ADVANCING_GUARD_REFLEC,
    TECH_HIT,
    REVERSAL,
    COUNTER_HIT,
    AUTO_COMBO,
    SIMPLE_COMMAND,
    V_SHIFT,
    EX_V_SHIFT,
    VARIABLE_COMBINATION,
};

