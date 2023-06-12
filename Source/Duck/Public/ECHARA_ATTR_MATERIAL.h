#pragma once
#include "DuckModule.h"
#include "ECHARA_ATTR_MATERIAL.generated.h"

UENUM(BlueprintType)
enum class ECHARA_ATTR_MATERIAL : uint8 {
    DEFAULT,
    METAL,
    CLOTH,
    ECHARA_ATTR_MAX UMETA(Hidden),
};

