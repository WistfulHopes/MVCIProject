#pragma once
#include "DuckModule.h"
#include "DuckCharaMotion.h"
#include "ProjectileDoublePlayer.generated.h"

class UDuckMaterialChangeAsset;

UCLASS(Blueprintable)
class DUCK_API AProjectileDoublePlayer : public ADuckCharaMotion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDuckMaterialChangeAsset* MaterialChangeAsset;
    
public:
    AProjectileDoublePlayer();
};

