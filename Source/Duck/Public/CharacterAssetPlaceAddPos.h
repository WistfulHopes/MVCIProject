#pragma once
#include "DuckModule.h"
#include "ECharacterAssetPlaceAddPosAxis.h"
#include "CharacterAssetPlaceAddPos.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetPlaceAddPos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAssetPlaceAddPosAxis Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Frame;
    
    FCharacterAssetPlaceAddPos();
};

