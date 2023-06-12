#pragma once
#include "DuckModule.h"
#include "CharacterAssetSwitchInvisible.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetSwitchInvisible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Owner;
    
    FCharacterAssetSwitchInvisible();
};

