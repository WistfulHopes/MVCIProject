#pragma once
#include "DuckModule.h"
#include "DuckKPIFirstPlay.h"
#include "DuckKPIMode.generated.h"

USTRUCT(BlueprintType)
struct DUCKANALYTICS_API FDuckKPIMode : public FDuckKPIFirstPlay {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Count;
    
    FDuckKPIMode();
};

