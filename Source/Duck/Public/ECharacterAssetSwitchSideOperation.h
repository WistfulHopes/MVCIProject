#pragma once
#include "DuckModule.h"
#include "ECharacterAssetSwitchSideOperation.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetSwitchSideOperation : uint8 {
    OPE_NONE,
    SET_SIDE,
    SET_SIDE_INNER,
    REVERSE_SIDE,
    REVERSE_SIDE_INNER,
    TARGET_SIDE,
    TARGET_SIDE_INNER,
    REVERSE_TARGET_SIDE,
    REVERSE_TARGET_SIDE_INNER,
    SET_SIDE_LEFT,
    SET_SIDE_RIGHT,
    PARENT_SIDE,
    SCREEN_CENTER,
    STAGE_CENTER,
    VELOCITY_X,
    REVERSE_VELOCITY_X,
    HIT_TARGET_SIDE,
    HIT_TARGET_SIDE_INNER,
    REVERSE_HIT_TARGET_SIDE,
    REVERSE_HIT_TARGET_SIDE_INNER,
};

