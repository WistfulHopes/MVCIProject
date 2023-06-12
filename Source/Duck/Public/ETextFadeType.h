#pragma once
#include "DuckModule.h"
#include "ETextFadeType.generated.h"

UENUM(BlueprintType)
enum class ETextFadeType : uint8 {
    TEXT_NONE,
    TEXT_DEFAULT,
    TEXT_HIDDEN,
    TEXT_IN_SLOW,
    TEXT_IN_QUICK,
    TEXT_OUT_SLOW,
    TEXT_OUT_QUICK,
    TEXT_MAX UMETA(Hidden),
};

