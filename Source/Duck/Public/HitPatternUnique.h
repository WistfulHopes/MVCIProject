#pragma once
#include "DuckModule.h"
#include "HitPatternUnique.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FHitPatternUnique {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UniqueList;
    
    FHitPatternUnique();
};

