#pragma once
#include "DuckModule.h"
#include "EStoryTextPlSpBufType.generated.h"

UENUM(BlueprintType)
enum class EStoryTextPlSpBufType : uint8 {
    TXT_PL_SPBUF_PL007_HC_REINFORCEMENT,
    TXT_PL_SPBUF_PL008_HC_REINFORCEMENT,
    TXT_PL_SPBUF_STONE_GAUGE_INC,
    TXT_PL_SPBUF_STONE_GAUGE_DEC,
    TXT_PL_SPBUF_MAX UMETA(Hidden),
};

