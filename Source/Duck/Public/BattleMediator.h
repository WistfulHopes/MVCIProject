#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EBattleFlow.h"
#include "EPlayerType.h"
#include "EScrollEventType.h"
#include "EWinTeam.h"
#include "EWinType.h"
#include "PlayerInfo.h"
#include "BattleMediator.generated.h"

class ADuckCharaVisualManager;
class UCharacterAsset;
class UGemAsset;
class UGimmickMaterialAsset;
class UGimmickSoundAsset;
class UGimmickVfxAsset;
class UGlobalParamAsset;
class UPersonalData;
class USoundBattleSEDataAsset;

USTRUCT(BlueprintType)
struct DUCK_API FBattleMediator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerType PlayerType[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInfo Info[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 IsMemberChange[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleFlow FlowNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWinTeam WinTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWinType WinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WinPerfect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AkebonoFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWorld;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InputNew[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InputOld[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Timer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Gauge[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GemGauge[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TouchOK[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VariableCross[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraCeil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraVibY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraHokan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StageCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScrollEventType ScrEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADuckCharaVisualManager* mpVisualManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBattleSEDataAsset* mpSoundBattleAsset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAsset* mpCharacterAsset[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAsset* mpCharacterAssetCommon;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersonalData* mpPersonalData[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersonalData* mpPersonalDataCommon;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickVfxAsset* mpGimmickVfxAsset[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickMaterialAsset* mpGimmickMaterialAsset[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickSoundAsset* mpGimmickSoundAsset[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickVfxAsset* mpGimmickVfxAssetCommon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickMaterialAsset* mpGimmickMaterialAssetCommon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickSoundAsset* mpGimmickSoundAssetCommon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGemAsset* mpGemAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalParamAsset* mpGlobalParamAsset;
    
    FBattleMediator();
};

