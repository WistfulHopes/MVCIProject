#pragma once
#include "DuckModule.h"
#include "EStoryTextPlNmlBufType.generated.h"

UENUM(BlueprintType)
enum class EStoryTextPlNmlBufType : uint8 {
    TXT_PL_NMLBUF_NML_ATK_UP,
    TXT_PL_NMLBUF_SP_ATK_UP,
    TXT_PL_NMLBUF_HC_ATK_UP,
    TXT_PL_NMLBUF_HC_GAUGE_MORE_INC,
    TXT_PL_NMLBUF_HC_GAUGE_REGENE,
    TXT_PL_NMLBUF_SUPER_ARMOR,
    TXT_PL_NMLBUF_SPD_UP,
    TXT_PL_NMLBUF_HP_REGENE,
    TXT_PL_NMLBUF_ATK_ALL_UP,
    TXT_PL_NMLBUF_MAX UMETA(Hidden),
};

