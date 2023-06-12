#pragma once
#include "DuckModule.h"
#include "EGimmickCondition.generated.h"

UENUM(BlueprintType)
namespace EGimmickCondition {
    enum Type {
        FLY,
        SUPER_JUMP,
        NORMAL_JUMP,
        DAMAGE,
        GEM_POWER,
        GEM_TIME,
        GEM_SPACE,
        GEM_SOUL,
        GEM_REALITY,
        GEM_MIND,
        GEM_BURST_POWER,
        GEM_BURST_TIME,
        GEM_BURST_SPACE,
        GEM_BURST_SOUL,
        GEM_BURST_REALITY,
        GEM_BURST_MIND,
        DAMAGE_FIRE,
        DAMAGE_ICE,
        DAMAGE_ELEC,
        DAMAGE_PSYCO,
        DAMAGE_MIND,
        DAMAGE_PIYO,
        DAMAGE_SHOCK,
        SUPER_ARMOR,
        DAMAGE_TAISEI,
        ATTACK_HOSEI,
        DEFENSE_HOSEI,
        SPEED_UP,
        DAMAGE_ABSORB,
        VARIABLE_CROSS,
        HYPER_COMBO,
        NOVA_LV2,
        NOVA_LV3,
    };
}

