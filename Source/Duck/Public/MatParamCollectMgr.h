#pragma once
#include "DuckModule.h"
#include "MatParamCollectMgr.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct DUCK_API FMatParamCollectMgr {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* mpMatParamCollect;
    
public:
    FMatParamCollectMgr();
};

