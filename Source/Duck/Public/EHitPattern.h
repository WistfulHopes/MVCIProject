#pragma once
#include "DuckModule.h"
#include "EHitPattern.generated.h"

UENUM(BlueprintType)
enum class EHitPattern : uint8 {
    Attack,
    Damage,
    Push,
    Unique,
};

