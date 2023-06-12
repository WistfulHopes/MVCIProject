#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BattleMain.generated.h"

class UCharacterAIAsset;
class UCharacterAILevelAsset;
class UCharacterAsset;
class UChargeAsset;
class UCommandAsset;
class UGimmickMaterialAsset;
class UGimmickSoundAsset;
class UGimmickVfxAsset;
class UPersonalData;
class USoundBattleSEDataAsset;

UCLASS(Blueprintable)
class DUCK_API ABattleMain : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommandAsset* mpCommandAsset[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UChargeAsset* mpChargeAsset[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAsset* mpCharacterAsset[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersonalData* mpPersonalData[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickVfxAsset* mpGimmickVfxAsset[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickMaterialAsset* mpGimmickMaterialAsset[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickSoundAsset* mpGimmickSoundAsset[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAIAsset* mpCharacterAIAsset[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAILevelAsset* mpCharacterAILevelAsset[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommandAsset* mpCommonCommandAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAsset* mpCommonCharacterAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersonalData* mpCommonPersonalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickVfxAsset* mpCommonGimmickVfxAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickMaterialAsset* mpCommonGimmickMaterialAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickSoundAsset* mpCommonGimmickSoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAIAsset* mpCommonCharacterAIAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAILevelAsset* mpCommonCharacterAILevelAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBattleSEDataAsset* mpSoundBattleAsset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommandAsset* mpLoadCommandAsset[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UChargeAsset* mpLoadChargeAsset[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAsset* mpLoadCharacterAsset[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersonalData* mpLoadPersonalData[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickVfxAsset* mpLoadGimmickVfxAsset[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickMaterialAsset* mpLoadGimmickMaterialAsset[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickSoundAsset* mpLoadGimmickSoundAsset[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAIAsset* mpLoadCharacterAIAsset[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAILevelAsset* mpLoadCharacterAILevelAsset[6];
    
public:
    ABattleMain();
};

