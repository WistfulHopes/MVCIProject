#pragma once
#include "Engine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Duck -ObjectName=EAutoMatchType_UI -FallbackName=EAutoMatchType_UI
#include "BattlePointAnimStruct.h"
#include "EAutoMatch_QoS.h"
#include "ERichPresence.h"
#include "SearchdAutoMatchInfo.h"
#include "OSSDuckUtil.generated.h"

UCLASS(Blueprintable)
class ONLINESUBSYSTEMDUCK_API UOSSDuckUtil : public UObject {
    GENERATED_BODY()
public:
    UOSSDuckUtil();
    UFUNCTION(BlueprintCallable)
    static void SuccessAutoMatchWait();
    
    UFUNCTION(BlueprintCallable)
    static void StoreLobbyVoiceMuteSetting();
    
    UFUNCTION(BlueprintCallable)
    static void showProfileUI(TArray<uint8> UserId, bool isSelf);
    
    UFUNCTION(BlueprintCallable)
    static void SetSearchedAutoMatchInfo(EAutoMatchType_UI MatchType, EAutoMatch_QoS QoS, bool SameRegion);
    
    UFUNCTION(BlueprintCallable)
    static void SetRichPresence(ERichPresence Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetInitializeSignInSuccess(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetIgnoreCancelAutoMatchFromBattleEnd();
    
    UFUNCTION(BlueprintCallable)
    static void ResetMultiCheckState();
    
    UFUNCTION(BlueprintCallable)
    static void PrimaryLogin();
    
    UFUNCTION(BlueprintCallable)
    static void OpenStorePage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUGCRestRict();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTextChatRestrict();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPrimarySignIn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnlineReplayNow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnlineBattleNow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMannerBad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsIgnoreCancelAutoMatchFromBattleEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEndOnlineMatchProcess();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableRookie();
    
    UFUNCTION(BlueprintCallable)
    static FString GetUserName(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUpperLimitBattlePointByResult(int32 Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUpperLimitBattlePoint(int32 Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSearchdAutoMatchInfo GetSearchedAutoMatchInfo();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPrimaryUserName();
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> GetPrimaryUniqueId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMyBattlePoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLowerLimitBattlePointByResult(int32 Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLowerLimitBattlePoint(int32 Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLoginResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetInitializeSignInSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDisableMatchEndCountDip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FBattlePointAnimStruct> GetBattlePointAnimArray(int32 OldPoint, int32 NewPoint, int32 rankResult);
    
    UFUNCTION(BlueprintCallable)
    static void DispSpectateError();
    
    UFUNCTION(BlueprintCallable)
    static void DirtyOnlineVariable();
    
    UFUNCTION(BlueprintCallable)
    static void ClearReplaySetting();
    
    UFUNCTION(BlueprintCallable)
    static void ClearLobbyVoiceMuteSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckStrengthByCasualPoint(int32 oppnentPoint);
    
    UFUNCTION(BlueprintCallable)
    static int32 BattlePointToRank(int32 BattlePoint);
    
};

