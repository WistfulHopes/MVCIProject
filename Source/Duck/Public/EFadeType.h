#pragma once
#include "DuckModule.h"
#include "EFadeType.generated.h"

UENUM(BlueprintType)
enum class EFadeType : uint8 {
    FADE_MONOCHROMATIC,
    FADE_ROUND_WIPE,
    FADE_MAX UMETA(Hidden),
};

