#pragma once
#include "DuckModule.h"
#include "MissionUI.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FMissionUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommandUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartnerNo;
    
    FMissionUI();
};

