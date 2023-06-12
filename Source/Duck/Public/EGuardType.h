#pragma once
#include "DuckModule.h"
#include "EGuardType.generated.h"

UENUM(BlueprintType)
enum class EGuardType : uint8 {
    GD_ALL,
    GD_LOW,
    GD_HIGH,
    GD_IGNORE,
    GD_MAX UMETA(Hidden),
};

