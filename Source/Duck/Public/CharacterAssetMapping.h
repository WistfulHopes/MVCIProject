#pragma once
#include "DuckModule.h"
#include "CharacterAssetMapping.generated.h"

class ADuckCharaMotion;
class UParticleAsset;

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADuckCharaMotion* DuckCharaMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleAsset* ParticleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleAsset* StageParticleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleAsset* TargetParticleAsset;
    
    FCharacterAssetMapping();
};

