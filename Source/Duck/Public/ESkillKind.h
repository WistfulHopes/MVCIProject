#pragma once
#include "DuckModule.h"
#include "ESkillKind.generated.h"

UENUM(BlueprintType)
enum class ESkillKind : uint8 {
    NORMAL,
    SPECIAL,
    HYPER,
    OTHER,
    NM_THROW,
    SP_THROW,
    HC_THROW,
};

