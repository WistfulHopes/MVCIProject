#pragma once
#include "DuckModule.h"
#include "ECharacterAssetSwitchPose.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetSwitchPose : uint8 {
    POSE_ST_NONE,
    POSE_ST_STAND,
    POSE_ST_CROUCH,
    POSE_ST_JUMP,
    POSE_ST_DOWN,
};

