#pragma once
#include "DuckModule.h"
#include "EStoryCharaAttribute.generated.h"

UENUM(BlueprintType)
enum class EStoryCharaAttribute : uint8 {
    ATTR_VITAL_SHARE,
    ATTR_REGENE_LIFE,
    ATTR_REGENE_HC,
    ATTR_ATTACK_UP,
    ATTR_DEFENSE_UP,
    ATTR_SUPER_ARMOR,
    ATTR_VIRUS,
    ATTR_WEAK_ATK_1,
    ATTR_WEAK_DMG_1,
    ATTR_WEAK_ATK_2,
    ATTR_WEAK_DMG_2,
    ATTR_WEAK_ATK_3,
    ATTR_WEAK_DMG_3,
    ATTR_FREE_MOVE,
    ATTR_DIE_OUT,
    ATTR_COOPERATIVE,
    ATTR_MINION,
};

