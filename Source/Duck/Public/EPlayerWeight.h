#pragma once
#include "DuckModule.h"
#include "EPlayerWeight.generated.h"

UENUM(BlueprintType)
enum class EPlayerWeight : uint8 {
    PL_WEIGHT_0,
    PL_WEIGHT_1,
    PL_WEIGHT_2,
    PL_WEIGHT_3,
    PL_WEIGHT_4,
    PL_WEIGHT_5,
    PL_WEIGHT_6,
    PL_WEIGHT_7,
    PL_WEIGHT_MAX UMETA(Hidden),
};

