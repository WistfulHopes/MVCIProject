#pragma once
#include "DuckModule.h"
#include "EEditorAttackType.generated.h"

UENUM(BlueprintType)
enum class EEditorAttackType : uint8 {
    NONE,
    LP,
    MP,
    HP,
    LK,
    MK,
    HK,
    CATCH_F,
    CATCH_B,
    SPECIAL,
    HYPER,
    TP_RECEIVE_CATCH,
    TP_RECEIVE_AF,
    TP_DASH,
    TP_HYPER,
    TP_TOUCH_DASH,
    GEM,
    SNAPBACK,
    TOUCH,
    ASSIT_A,
    ASSIT_B,
    ASSIT_C,
    OTHER,
};

