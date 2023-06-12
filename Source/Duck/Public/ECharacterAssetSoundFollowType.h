#pragma once
#include "DuckModule.h"
#include "ECharacterAssetSoundFollowType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetSoundFollowType : uint8 {
    NON_FOLLOW,
    FOLLOW_PARENT,
    FOLLOW_REFER_GIMMICK,
};

