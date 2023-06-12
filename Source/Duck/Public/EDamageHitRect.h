#pragma once
#include "DuckModule.h"
#include "EDamageHitRect.generated.h"

UENUM(BlueprintType)
enum class EDamageHitRect : uint8 {
    Head,
    Body,
    Leg,
    Caught,
};

