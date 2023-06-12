#pragma once
#include "DuckModule.h"
#include "EStoryCharaStatusType.generated.h"

UENUM(BlueprintType)
enum class EStoryCharaStatusType : uint8 {
    ST_VITAL,
    ST_INIT_VITAL,
    ST_TURBO,
    ST_AT_NORMAL,
    ST_AT_SPECIAL,
    ST_AT_HYPER,
    ST_AT_THROW,
    ST_DF_NORMAL,
    ST_DF_SPECIAL,
    ST_DF_HYPER,
    ST_DF_THROW,
    ST_GAIN_HC,
    ST_GAIN_GEM,
    ST_CPU_LEVEL,
};

