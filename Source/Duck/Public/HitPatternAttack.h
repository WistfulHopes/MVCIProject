#pragma once
#include "DuckModule.h"
#include "HitPatternAttack.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FHitPatternAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AttackList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CatchList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AtemiList;
    
    FHitPatternAttack();
};

