#pragma once
#include "DuckModule.h"
#include "ESelector_Language.generated.h"

UENUM(BlueprintType)
enum class ESelector_Language : uint8 {
    SELECTOR_LANG_JPN,
    SELECTOR_LANG_ENG,
    SELECTOR_LANG_MAX UMETA(Hidden),
};

