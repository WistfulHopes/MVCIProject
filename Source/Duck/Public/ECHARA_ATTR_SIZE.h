#pragma once
#include "DuckModule.h"
#include "ECHARA_ATTR_SIZE.generated.h"

UENUM(BlueprintType)
enum class ECHARA_ATTR_SIZE : uint8 {
    DEFAULT,
    SMALL,
    MIDIUM,
    LARGE,
    ECHARA_ATTR_MAX UMETA(Hidden),
};

