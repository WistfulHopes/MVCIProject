#pragma once
#include "DuckModule.h"
#include "CharacterAssetTrgGrpSelTrg.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetTrgGrpSelTrg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 No;
    
    FCharacterAssetTrgGrpSelTrg();
};

