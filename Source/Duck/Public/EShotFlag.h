#pragma once
#include "DuckModule.h"
#include "EShotFlag.generated.h"

UENUM(BlueprintType)
enum class EShotFlag : uint8 {
    NON_FLAG,
    HIT_DELETE_SHOT,
    NATURAL_DELETE_SHOT,
    COUNTERACT_SHOT,
    INSTANT_DELETE,
    DELETED_SHOT,
};

