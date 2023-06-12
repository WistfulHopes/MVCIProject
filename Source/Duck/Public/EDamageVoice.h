#pragma once
#include "DuckModule.h"
#include "EDamageVoice.generated.h"

UENUM(BlueprintType)
enum class EDamageVoice : uint8 {
    NO_VOICE,
    VO_DMG_L,
    VO_DMG_M,
    VO_DMG_H,
    DAMAGE_VOICE_MAX UMETA(Hidden),
};

