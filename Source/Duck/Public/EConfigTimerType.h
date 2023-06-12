#pragma once
#include "DuckModule.h"
#include "EConfigTimerType.generated.h"

UENUM(BlueprintType)
enum class EConfigTimerType : uint8 {
    COUNT_NONE,
    COUNT_INF,
    COUNT_99,
    COUNT_60,
    COUNT_30,
};

