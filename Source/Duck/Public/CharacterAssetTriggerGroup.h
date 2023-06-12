#pragma once
#include "DuckModule.h"
#include "CharacterAssetTrgGrpSelTrg.h"
#include "CharacterAssetTriggerGroup.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetTriggerGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetTrgGrpSelTrg> SelectTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FCharacterAssetTriggerGroup();
};

