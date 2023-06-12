#pragma once
#include "DuckModule.h"
#include "EConfigFightType.generated.h"

UENUM(BlueprintType)
enum class EConfigFightType : uint8 {
    NONE,
    FIGHT,
    GO,
};

