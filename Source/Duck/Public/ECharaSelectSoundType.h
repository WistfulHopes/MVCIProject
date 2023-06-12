#pragma once
#include "DuckModule.h"
#include "ECharaSelectSoundType.generated.h"

UENUM(BlueprintType)
enum class ECharaSelectSoundType : uint8 {
    CharaSelectSound_SELECT,
    CharaSelectSound_VERSUS,
    CharaSelectSound_SELECT_NA,
    CharaSelectSound_SELECT_VO,
    CharaSelectSound_MAX UMETA(Hidden),
};

