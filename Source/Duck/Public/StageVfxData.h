#pragma once
#include "DuckModule.h"
#include "ECharacterAssetVfxCategory.h"
#include "StageVfxData.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FStageVfxData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VfxID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAssetVfxCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageID;
    
    FStageVfxData();
};

