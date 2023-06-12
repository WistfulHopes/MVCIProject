#pragma once
#include "DuckModule.h"
#include "EForceJustification.generated.h"

UENUM(BlueprintType)
enum class EForceJustification : uint8 {
    UseDefault,
    ForceLeft,
    ForceCenter,
    ForceRight,
};

