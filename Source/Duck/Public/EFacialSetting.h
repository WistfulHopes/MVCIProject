#pragma once
#include "DuckModule.h"
#include "EFacialSetting.generated.h"

UENUM(BlueprintType)
enum class EFacialSetting : uint8 {
    DEFAULT,
    CONTAIN_BODY,
    USE_FACIAL,
};

