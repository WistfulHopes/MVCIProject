#pragma once
#include "DuckModule.h"
#include "EConfigDamageLevel.generated.h"

UENUM(BlueprintType)
enum class EConfigDamageLevel : uint8 {
    LOWEST,
    LOW,
    MEDIUM,
    HIGH,
    HIGHEST,
};

