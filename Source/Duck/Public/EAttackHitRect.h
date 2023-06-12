#pragma once
#include "DuckModule.h"
#include "EAttackHitRect.generated.h"

UENUM(BlueprintType)
enum class EAttackHitRect : uint8 {
    Attack,
    Catch,
    Atemi,
};

