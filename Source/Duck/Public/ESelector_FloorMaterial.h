#pragma once
#include "DuckModule.h"
#include "ESelector_FloorMaterial.generated.h"

UENUM(BlueprintType)
enum class ESelector_FloorMaterial : uint8 {
    SELECTOR_FLOOR_CONC,
    SELECTOR_FLOOR_METAL,
    SELECTOR_FLOOR_DART,
    SELECTOR_FLOOR_MAX UMETA(Hidden),
};

