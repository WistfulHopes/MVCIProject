#pragma once
#include "DuckModule.h"
#include "EHitSound.generated.h"

UENUM(BlueprintType)
enum class EHitSound : uint8 {
    NO_SOUND,
    HIT_L,
    HIT_M,
    HIT_H_PUNCH,
    HIT_H_KICK,
    HIT_SLASH_L,
    HIT_SLASH_M,
    HIT_SLASH_H_PUNCH,
    HIT_SLASH_H_KICK,
    HIT_GRAB,
    HIT_STAB,
    HIT_BONE,
    HIT_BITE,
    HIT_TIGHTEN,
    HIT_SHELL,
    HIT_BULLET,
    HIT_THROW,
    HIT_SFX_FIRE,
    HIT_SFX_ELEC,
    HIT_SFX_ICE,
    HIT_SFX_ICEBREAK,
    HIT_SFX_POISON,
    HIT_SFX_EXP_L,
    HIT_SFX_EXP_H,
    HIT_SFX_SP,
    GUARD,
    CONC_DOWN,
    JUMP_NORMAL,
    JUMP_AIR,
    JUMP_SP,
    STEP_FRONT,
    STEP_BACK,
    STEP_SWOOP,
    STUN_IN,
    SLIDING_L,
    SLIDING_M,
    SLIDING_H,
    WALL_LAND_NORMAL,
    WALL_LAND_METAL,
    WALL_LAND_BIG,
    WALL_JUMP_NORMAL,
    WALL_JUMP_METAL,
    WALL_JUMP_BIG,
    STUN_CAP,
    STUN_MAR,
    SHELL_OFFSET,
    ATEMI_SUCCESS,
    ADV_GUARD,
    THROW_OUT,
    CHANGE_ATK,
    SC_START,
    SC_DELAY,
    FIN_DOWN,
    FIN_KO,
    FIN_AKEBONO,
    NA_READY,
    NA_FIGHT,
    NA_KO,
    NA_TIMEOVER,
    NA_GEM_MIND,
    NA_GEM_POWER,
    NA_GEM_REALITY,
    NA_GEM_SOUL,
    NA_GEM_SPACE,
    NA_GEM_TIME,
    HIT_SOUND_MAX UMETA(Hidden),
};
