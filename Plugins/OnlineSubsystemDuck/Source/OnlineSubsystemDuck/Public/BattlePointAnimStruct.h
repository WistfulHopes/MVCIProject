#pragma once
#include "Engine.h"
#include "BattlePointAnimStruct.generated.h"

USTRUCT(BlueprintType)
struct FBattlePointAnimStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OldPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewPoint;
    
    ONLINESUBSYSTEMDUCK_API FBattlePointAnimStruct();
};

