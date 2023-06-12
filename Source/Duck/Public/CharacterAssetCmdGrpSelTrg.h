#pragma once
#include "DuckModule.h"
#include "CharacterAssetCmdGrpSelTrg.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetCmdGrpSelTrg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 No;
    
    FCharacterAssetCmdGrpSelTrg();
};

