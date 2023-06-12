#pragma once
#include "Engine.h"
#include "EAutoMatchType_UI.h"
#include "EAutoMatch_QoS.h"
#include "SearchdAutoMatchInfo.generated.h"

USTRUCT(BlueprintType)
struct FSearchdAutoMatchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAutoMatchType_UI MatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAutoMatch_QoS QoS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SameRegion;
    
    ONLINESUBSYSTEMDUCK_API FSearchdAutoMatchInfo();
};

