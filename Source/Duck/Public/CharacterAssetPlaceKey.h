#pragma once
#include "DuckModule.h"
#include "CharacterAssetKeyDetails.h"
#include "CharacterAssetPlaceAddPos.h"
#include "CharacterAssetPlaceKey.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetPlaceKey : public FCharacterAssetKeyDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaceRatioZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaceRatioY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaceRatioX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetPlaceAddPos> AddPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddTargetSteerInJointLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VisualOffset;
    
    FCharacterAssetPlaceKey();
};

