#pragma once
#include "DuckModule.h"
#include "RollBackParameterActioninf.h"
#include "RollBackParameterActioninfArray.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FRollBackParameterActioninfArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRollBackParameterActioninf> ActionInf;
    
    FRollBackParameterActioninfArray();
};

