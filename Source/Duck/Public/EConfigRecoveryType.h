#pragma once
#include "DuckModule.h"
#include "EConfigRecoveryType.generated.h"

UENUM(BlueprintType)
enum class EConfigRecoveryType : uint8 {
    NONE,
    FORWARD,
    BACK,
    RANDOM,
};

