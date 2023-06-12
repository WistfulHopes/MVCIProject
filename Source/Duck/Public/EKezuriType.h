#pragma once
#include "DuckModule.h"
#include "EKezuriType.generated.h"

UENUM(BlueprintType)
enum class EKezuriType : uint8 {
    NONE,
    KEZURI_SP,
    KEZURI_HC,
    KEZURI_BEAM,
    KEZURI_NORM,
};

