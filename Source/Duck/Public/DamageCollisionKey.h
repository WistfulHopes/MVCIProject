#pragma once
#include "DuckModule.h"
#include "CharacterAssetKeyDetails.h"
#include "DamageCollisionKey.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FDamageCollisionKey : public FCharacterAssetKeyDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionListIndex;
    
    FDamageCollisionKey();
};

