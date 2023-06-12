#pragma once
#include "DuckModule.h"
#include "CharacterAssetActionFrame.h"
#include "CharacterAssetActionInherit.h"
#include "CharacterAssetActionProjectile.h"
#include "CharacterAssetActionState.h"
#include "CharacterAssetFacialKey.h"
#include "CharacterAssetGimmickKey.h"
#include "CharacterAssetMergeKey.h"
#include "CharacterAssetModelPartsKey.h"
#include "CharacterAssetMotionKey.h"
#include "CharacterAssetPlaceKey.h"
#include "CharacterAssetShotKey.h"
#include "CharacterAssetSteerKey.h"
#include "DemoCharacterAssetAction.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FDemoCharacterAssetAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAssetActionProjectile Projectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAssetActionInherit Inherit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAssetActionState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAssetActionFrame ActionFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetGimmickKey> GimmickKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetModelPartsKey> ModelPartsKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetShotKey> ShotKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetPlaceKey> PlaceKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetSteerKey> SteerKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetMergeKey> MergeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetFacialKey> FacialKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetMotionKey> MotionKey;
    
    FDemoCharacterAssetAction();
};

