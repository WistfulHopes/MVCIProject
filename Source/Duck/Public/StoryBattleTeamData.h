#pragma once
#include "DuckModule.h"
#include "StoryFinishCondition.h"
#include "StoryBattleTeamData.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FStoryBattleTeamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FinishMessage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryFinishCondition FinishCondition[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GGaugeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HGaugeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StoneBit;
    
    FStoryBattleTeamData();
};

