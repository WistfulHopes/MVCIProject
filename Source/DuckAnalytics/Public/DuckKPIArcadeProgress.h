#pragma once
#include "DuckModule.h"
#include "DuckKPIArcadeProgress.generated.h"

USTRUCT(BlueprintType)
struct DUCKANALYTICS_API FDuckKPIArcadeProgress {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ClearCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 DeathCount;
    
    FDuckKPIArcadeProgress();
};

