#pragma once
#include "DuckModule.h"
#include "ECharaSelectVoiceTargetType.generated.h"

UENUM(BlueprintType)
enum class ECharaSelectVoiceTargetType : uint8 {
    CMN,
    GROUP,
    PERSON,
};

