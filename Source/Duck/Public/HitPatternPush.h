#pragma once
#include "DuckModule.h"
#include "HitPatternPush.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FHitPatternPush {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PushList;
    
    FHitPatternPush();
};

