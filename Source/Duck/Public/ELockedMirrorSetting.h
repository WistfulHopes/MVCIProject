#pragma once
#include "DuckModule.h"
#include "ELockedMirrorSetting.generated.h"

UENUM(BlueprintType)
enum class ELockedMirrorSetting : uint8 {
    DEFAULT,
    INVERSE_MIRROR,
};

