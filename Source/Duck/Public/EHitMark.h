#pragma once
#include "DuckModule.h"
#include "EHitMark.generated.h"

UENUM(BlueprintType)
enum class EHitMark : uint8 {
    NO_MARK,
    NORMAL_L,
    NORMAL_M,
    NORMAL_H,
    SPECIAL,
    BEAM_L,
    BEAM_H,
    REFLECT,
    AERIAL,
    SLASH_L,
    SLASH_M,
    SLASH_H,
    PIYO,
    CATCH,
    SHELL_L,
    SHELL_H,
    MULTI_L,
    MULTI_M,
    MULTI_H,
    MULTI_SLASH,
    FLOOR_L,
    FLOOR_M,
    FLOOR_H,
    GUARD,
    KEZURI,
    GEM_HIT,
    GEM_KEZURI,
    CRITICAL,
    SPACE,
    RESIST,
};

