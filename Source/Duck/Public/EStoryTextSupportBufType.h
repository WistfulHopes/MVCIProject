#pragma once
#include "DuckModule.h"
#include "EStoryTextSupportBufType.generated.h"

UENUM(BlueprintType)
enum class EStoryTextSupportBufType : uint8 {
    TXT_SUPPORT_BUF_ATK_UP,
    TXT_SUPPORT_BUF_ATK_DOWN,
    TXT_SUPPORT_BUF_DEF_UP,
    TXT_SUPPORT_BUF_HC_GAUGE_INC,
    TXT_SUPPORT_BUF_HC_GAUGE_DEC,
    TXT_SUPPORT_BUF_CONTINUED_DAMAGE,
    TXT_SUPPORT_BUF_MAX UMETA(Hidden),
};

