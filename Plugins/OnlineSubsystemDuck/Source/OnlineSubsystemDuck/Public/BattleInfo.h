#pragma once
#include "Engine.h"
#include "MemberInfo.h"
#include "BattleInfo.generated.h"

USTRUCT(BlueprintType)
struct FBattleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 battleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMemberInfo> PriorityList;
    
    ONLINESUBSYSTEMDUCK_API FBattleInfo();
};

