#pragma once
#include "DuckModule.h"
#include "EMaterialColorType.generated.h"

UENUM(BlueprintType)
enum class EMaterialColorType : uint8 {
    DEFAULT,
    ICE_DAMAGE,
    FIRE_DAMAGE,
    ELEC_DAMAGE,
    PSYCO_DAMAGE,
    TWO_PLATOON,
    FLASH_RED,
    FLASH_BLUE,
    FLASH_WHITE,
    FLASH_YELLOW,
    FADE_OFF,
    GEM_POWER,
    GEM_TIME,
    GEM_SPACE,
    GEM_SOUL,
    GEM_REALITY,
    GEM_MIND,
    FLASH_RED_BOSS,
    FLASH_ARMOR,
    NUM,
};

