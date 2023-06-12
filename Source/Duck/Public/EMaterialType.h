#pragma once
#include "DuckModule.h"
#include "EMaterialType.generated.h"

UENUM(BlueprintType)
enum class EMaterialType : uint8 {
    DEFAULT,
    BODY,
    METAL,
    NO_SOUND,
};

