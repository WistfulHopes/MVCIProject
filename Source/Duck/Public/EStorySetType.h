#pragma once
#include "DuckModule.h"
#include "EStorySetType.generated.h"

UENUM(BlueprintType)
enum class EStorySetType : uint8 {
    PL_SET0,
    EM_SET0,
    EM_SET1,
    EM_SET2,
    EStoryCharaSet_MAX UMETA(Hidden),
};

