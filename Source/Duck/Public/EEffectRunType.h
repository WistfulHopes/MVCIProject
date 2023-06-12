#pragma once
#include "DuckModule.h"
#include "EEffectRunType.generated.h"

UENUM(BlueprintType)
enum class EEffectRunType : uint8 {
    PreRun,
    PostRun,
};

