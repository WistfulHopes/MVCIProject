#pragma once
#include "DuckModule.h"
#include "ELoadMapPriority.generated.h"

UENUM(BlueprintType)
enum class ELoadMapPriority : uint8 {
    LOAD_MAP_PRIORITY_NORMAL,
    LOAD_MAP_PRIORITY_HIGH,
    LOAD_MAP_PRIORITY_CRITICAL,
    LOAD_MAP_PRIORITY_MAX UMETA(Hidden),
};

