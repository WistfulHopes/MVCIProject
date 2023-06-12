#pragma once
#include "DuckModule.h"
#include "LoadPackageData.h"
#include "LoadPackageDataBattle.generated.h"

class UCharacterAIAsset;
class UCharacterAILevelAsset;
class UCharacterAsset;
class UChargeAsset;
class UCommandAsset;
class UEasyCommand;
class UGimmickMaterialAsset;
class UGimmickSoundAsset;
class UGimmickVfxAsset;
class UPersonalData;

UCLASS(Blueprintable)
class DUCK_API ULoadPackageDataBattle : public ULoadPackageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAsset* mpCharacterAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAIAsset* mpCharacterAIAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAILevelAsset* mpCharacterAILevelAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommandAsset* mpCommandAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChargeAsset* mpChargeAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersonalData* mpPersonalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickVfxAsset* mpGimmickVfxAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickMaterialAsset* mpGimmickMaterialAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickSoundAsset* mpGimmickSoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEasyCommand* mpEasyCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> mArrLightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> mArrCableClass;
    
    ULoadPackageDataBattle();
};

