#pragma once
#include "DuckModule.h"
#include "CharacterAssetKeyDetails.h"
#include "AttackCollisionKey.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FAttackCollisionKey : public FCharacterAssetKeyDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionListIndex;
    
    FAttackCollisionKey();
};

