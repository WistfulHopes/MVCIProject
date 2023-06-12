#pragma once
#include "DuckModule.h"
#include "EBlendingCondition.generated.h"

UENUM(BlueprintType)
enum class EBlendingCondition : uint8 {
    ALWAYS,
    COMMON_MOTION,
    NON_COMMON_MOTION,
};

