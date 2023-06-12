#pragma once
#include "DuckModule.h"
#include "ESoundAttachBoneType.generated.h"

UENUM(BlueprintType)
enum class ESoundAttachBoneType : uint8 {
    BONE_NONE,
    BONE_Y_NULL,
    BONE_FACE,
    BONE_BREAST,
    BONE_WAIST,
    BONE_HIP,
    BONE_L_HAND,
    BONE_R_HAND,
    BONE_L_FOOT,
    BONE_R_FOOT,
    BONE_MAX UMETA(Hidden),
};

