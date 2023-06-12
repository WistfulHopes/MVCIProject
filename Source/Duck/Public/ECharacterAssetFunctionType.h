#pragma once
#include "DuckModule.h"
#include "ECharacterAssetFunctionType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetFunctionType : uint8 {
    NORMAL,
    HYPER,
    SPECIAL,
    DASH,
    AIR_DASH,
    NORMAL_JUMP,
    AIR_JUMP,
    SUPER_JUMP,
    TOUCH,
    ASSIST,
    GEM,
    GEM_HYPER,
    GEM_ASSIST,
    NO_EFFECT,
    MINION,
    FUNC_TYPE_NUM,
};

