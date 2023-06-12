#pragma once
#include "DuckModule.h"
#include "ECharacterAssetPartsAttachSetting.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetPartsAttachSetting : uint8 {
    BOTH,
    POS_ONLY,
    ROT_ONLY,
};

