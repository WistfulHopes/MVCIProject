#pragma once
#include "DuckModule.h"
#include "HitRect16.h"
#include "HitRectData.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FHitRectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitRect16 RectData;
    
    FHitRectData();
};

