#pragma once
#include "DuckModule.h"
#include "EConfigReadyType.generated.h"

UENUM(BlueprintType)
enum class EConfigReadyType : uint8 {
    NONE,
    ROUND,
    READY,
};

