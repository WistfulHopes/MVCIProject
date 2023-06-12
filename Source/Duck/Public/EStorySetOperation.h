#pragma once
#include "DuckModule.h"
#include "EStorySetOperation.generated.h"

UENUM(BlueprintType)
enum class EStorySetOperation : uint8 {
    SET,
    WAIT_TIME,
    WAIT_VITAL,
    WAIT_COUNT,
    LOOP,
};

