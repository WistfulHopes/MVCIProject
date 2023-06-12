#pragma once
#include "DuckModule.h"
#include "MissionSaveData.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FMissionSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ArrMissionClearFlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ArrTutorialClearFlg;
    
    FMissionSaveData();
};

