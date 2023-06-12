#pragma once
#include "DuckModule.h"
#include "AttackCollisionKey.h"
#include "AttackDataKey.h"
#include "CharacterAssetActionFrame.h"
#include "CharacterAssetActionInherit.h"
#include "CharacterAssetActionProjectile.h"
#include "CharacterAssetActionRange.h"
#include "CharacterAssetActionState.h"
#include "CharacterAssetAutoTriggerKey.h"
#include "CharacterAssetBonePlaceKey.h"
#include "CharacterAssetBranchKey.h"
#include "CharacterAssetCameraKey.h"
#include "CharacterAssetEventKey.h"
#include "CharacterAssetFacialKey.h"
#include "CharacterAssetFacialMergeKey.h"
#include "CharacterAssetGimmickKey.h"
#include "CharacterAssetLightKey.h"
#include "CharacterAssetMergeKey.h"
#include "CharacterAssetModelPartsKey.h"
#include "CharacterAssetMotionKey.h"
#include "CharacterAssetPlaceKey.h"
#include "CharacterAssetSEKey.h"
#include "CharacterAssetShotKey.h"
#include "CharacterAssetSoundKey.h"
#include "CharacterAssetSteerKey.h"
#include "CharacterAssetSwitchKey.h"
#include "CharacterAssetTriggerKey.h"
#include "CharacterAssetVoiceKey.h"
#include "DamageCollisionKey.h"
#include "ECharacterAssetActionGroup.h"
#include "PushCollisionKey.h"
#include "UniqueCollisionKey.h"
#include "CharacterAssetAction.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAssetActionGroup Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAssetActionProjectile Projectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAssetActionInherit Inherit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAssetActionState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAssetActionFrame ActionFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAssetActionRange Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetSoundKey> SoundKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetGimmickKey> GimmickKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetModelPartsKey> ModelPartsKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetShotKey> ShotKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetBonePlaceKey> BonePlaceKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetPlaceKey> PlaceKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetLightKey> LightKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetEventKey> EventKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetSteerKey> SteerKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetSwitchKey> SwitchKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetBranchKey> BranchKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetSEKey> SEKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetVoiceKey> VoiceKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetAutoTriggerKey> AutoTriggerKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetTriggerKey> TriggerKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetFacialMergeKey> FacialMergeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetMergeKey> MergeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetCameraKey> CameraKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetFacialKey> FacialKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetMotionKey> MotionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackDataKey> AttackDataKeyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniqueCollisionKey> UniqueCollisionKeyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackCollisionKey> AttackCollisionKeyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageCollisionKey> DamageCollisionKeyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPushCollisionKey> PushCollisionKeyList;
    
    FCharacterAssetAction();
};

