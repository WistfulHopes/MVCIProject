#pragma once
#include "DuckModule.h"
#include "RollBackParameterMaterial.h"
#include "RollBackParameterMaterialArray.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FRollBackParameterMaterialArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRollBackParameterMaterial MaterialBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRollBackParameterMaterial> MaterialParts;
    
    FRollBackParameterMaterialArray();
};

