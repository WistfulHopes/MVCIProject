#pragma once
#include "DuckModule.h"
#include "InGameRewardParam.h"
#include "InGameReward.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FInGameReward {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInGameRewardParam Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
public:
    FInGameReward();
};

