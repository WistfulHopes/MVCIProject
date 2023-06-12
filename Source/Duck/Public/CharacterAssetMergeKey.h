#pragma once
#include "DuckModule.h"
#include "CharacterAssetKeyDetails.h"
#include "ECharacterAssetMergeTarget.h"
#include "ECharacterAssetMergeType.h"
#include "CharacterAssetMergeKey.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetMergeKey : public FCharacterAssetKeyDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPoseMerge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPlaceMerge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAssetMergeTarget Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAssetMergeType Type;
    
    FCharacterAssetMergeKey();
};

