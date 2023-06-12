#pragma once
#include "DuckModule.h"
#include "EConfigHandicapType.generated.h"

UENUM(BlueprintType)
enum class EConfigHandicapType : uint8 {
    LOWEST,
    LOW,
    MEDIUM,
    HIGH,
    HIGHEST,
};

