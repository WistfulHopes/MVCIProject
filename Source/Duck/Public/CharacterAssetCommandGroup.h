#pragma once
#include "DuckModule.h"
#include "CharacterAssetCmdGrpSelTrg.h"
#include "CharacterAssetCommandGroup.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetCommandGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetCmdGrpSelTrg> SelectTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FCharacterAssetCommandGroup();
};

