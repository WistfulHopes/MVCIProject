#pragma once
#include "DuckModule.h"
#include "ESoundModeCtrlType.generated.h"

UENUM(BlueprintType)
enum class ESoundModeCtrlType : uint8 {
    SoundModeCtrl_NONE,
    SoundModeCtrl_CMN,
    SoundModeCtrl_BATTLE,
    SoundModeCtrl_CHARA_SELECT,
    SoundModeCtrl_TITLE,
    SoundModeCtrl_LOCALIZE_CHECK,
    SoundModeCtrl_COLLECTION,
    SoundModeCtrl_STORY,
    SoundModeCtrl_COMING_SOON,
    SoundModeCtrl_LOBBY,
    SoundModeCtrl_MAX UMETA(Hidden),
};

