#pragma once
#include "DuckModule.h"
#include "StoryBattleSet.h"
#include "StoryBattleSettingData.h"
#include "StoryBattleTeamData.h"
#include "StoryCharaSet.h"
#include "StoryInfoBase.h"
#include "StoryLoopSet.h"
#include "StoryWaitCount.h"
#include "StoryWaitTime.h"
#include "StoryWaitVital.h"
#include "StoryInfoBattle.generated.h"

UCLASS(Blueprintable)
class DUCK_API UStoryInfoBattle : public UStoryInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStoryLoopSet> LoopData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStoryWaitCount> CountData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStoryWaitVital> VitalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStoryWaitTime> TimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStoryCharaSet> SetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryBattleSettingData BattleSettingData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryBattleSet SetList[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryBattleTeamData TeamList[2];
    
    UStoryInfoBattle();
};

