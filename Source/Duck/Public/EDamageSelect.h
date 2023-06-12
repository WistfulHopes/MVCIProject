#pragma once
#include "DuckModule.h"
#include "EDamageSelect.generated.h"

UENUM(BlueprintType)
enum class EDamageSelect : uint8 {
    DMG_AUTO_L,
    DMG_AUTO_M,
    DMG_AUTO_H,
    DMG_AUTO_S,
    DMG_HEAD_L,
    DMG_HEAD_M,
    DMG_HEAD_H,
    DMG_HEAD_S,
    DMG_BODY_L,
    DMG_BODY_M,
    DMG_BODY_H,
    DMG_BODY_S,
    DMG_LEG_L,
    DMG_LEG_M,
    DMG_LEG_H,
    DMG_LEG_S,
    DMG_MAX UMETA(Hidden),
};

