#pragma once
#include "DuckModule.h"
#include "ECharacterAssetShotMatSetting.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetShotMatSetting : uint8 {
    NO_INHERT,
    INHERIT_SAME_COLOR,
    USE_SAME_MATERIAL,
    INHERIT_PARENT_SHOT,
};

