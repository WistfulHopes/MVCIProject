#pragma once
#include "DuckModule.h"
#include "ECharaFlip.generated.h"

UENUM(BlueprintType)
enum class ECharaFlip : uint8 {
    FLIP_AUTO,
    FLIP_FRONT,
    FLIP_BACK,
    FLIP_MAX UMETA(Hidden),
};

