#pragma once
#include "Engine.h"
#include "ELobbyVoiceRestrict.generated.h"

UENUM(BlueprintType)
enum class ELobbyVoiceRestrict : uint8 {
    RESTRICT_NONE,
    RESTRICT_BATTLELIST,
    RESTRICT_MAX UMETA(Hidden),
};

