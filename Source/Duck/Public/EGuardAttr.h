#pragma once
#include "DuckModule.h"
#include "EGuardAttr.generated.h"

UENUM(BlueprintType)
enum class EGuardAttr : uint8 {
    ATTR_NONE,
    ATTR_UP,
    ATTR_MID,
    ATTR_LOW,
    ATTR_THROW,
    ATTR_IGNORE,
    ATTR_MAX UMETA(Hidden),
};

