#pragma once
#include "DuckModule.h"
#include "EDuckAnimNodeType.generated.h"

UENUM(BlueprintType)
enum class EDuckAnimNodeType : uint8 {
    NON,
    MOTION,
    BLEND,
    FACIAL,
};

