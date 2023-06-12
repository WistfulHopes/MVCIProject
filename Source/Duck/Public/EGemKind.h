#pragma once
#include "DuckModule.h"
#include "EGemKind.generated.h"

UENUM(BlueprintType)
enum class EGemKind : uint8 {
    GEM_POWER,
    GEM_TIME,
    GEM_SPACE,
    GEM_SOUL,
    GEM_REALITY,
    GEM_MIND,
    GEM_KIND_NUM,
    GEM_MAX UMETA(Hidden),
};

