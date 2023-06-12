#pragma once
#include "DuckModule.h"
#include "EClothApply.generated.h"

UENUM(BlueprintType)
enum class EClothApply : uint8 {
    Always,
    CommonOnly,
};

