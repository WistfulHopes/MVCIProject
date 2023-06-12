#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EBattleFlow.h"
#include "EComboCompliment.h"
#include "EConfigTimerType.h"
#include "EFinishType.h"
#include "EGemKind.h"
#include "EGuardAttr.h"
#include "EScrollEventType.h"
#include "ESound_SYS.h"
#include "EWinTeam.h"
#include "EWinType.h"
#include "Templates/SubclassOf.h"
#include "UIFightBPLib.generated.h"

class AActor;
class APlayerController;
class ULightComponentBase;
class UObject;
class UTexture;

UCLASS(Blueprintable)
class DUCK_API UUIFightBPLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIFightBPLib();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopUISound(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SortArrayForwardFeed(const TArray<int32>& TargetArray, int32 validNum);
    
    UFUNCTION(BlueprintCallable)
    static void SortArrayBackwardFeed(const TArray<int32>& TargetArray, int32 validNum);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetResultStageVisible(UObject* WorldContextObject, bool flgVisibleOn);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightVisibilityForStoryDemo(bool bDuringStoryDemo);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsEasyHC(int32 teamNo, bool IsEasyHC);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsAutoSJ(int32 teamNo, bool IsAutoSJ);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsAutoCombo(int32 teamNo, bool IsAutoCombo);
    
    UFUNCTION(BlueprintCallable)
    static void ResetStoryTrgFlg();
    
    UFUNCTION(BlueprintCallable)
    static void ResetCameraFOV(APlayerController* pPlayerCtrl);
    
    UFUNCTION(BlueprintCallable)
    static int32 RepeatValueInt32ForArray(int32 Value, int32 MinValue, int32 MaxValue);
    
    UFUNCTION(BlueprintCallable)
    static int32 RepeatValueInt32(int32 Value, int32 MinValue, int32 MaxValue);
    
    UFUNCTION(BlueprintCallable)
    static void PopItemFromArray(const TArray<int32>& TargetArray, int32 index, int32& Item, bool LeftJustified);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayUISound(UObject* WorldContextObject, ESound_SYS Type);
    
    UFUNCTION(BlueprintCallable)
    static void PlaySoundBattleVoice(int32 teamNo, int32 PartnerNo, int32 CueID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWinPerfect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWinHC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidArrayElemIndex(const TArray<int32>& TargetArray, int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTimerInf();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTimerGauge(int32 TeamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStoryBattleReset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStoryBattleLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStoryAutoProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSkipStoryBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsPlayerVanishPlId(int32 plID, bool& outIsVanish);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsPlayerCoopPlId(int32 plID, bool& outIsCoop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsPlayerCoop(int32 teamNo, bool& outIsCoop, int32 memberId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsPlayerBattleActivePlId(int32 plID, bool& outIsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsPlayerBattleActive(int32 teamNo, bool& outIsActive, int32 memberId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnlineHUD_Dip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnlineAutoRematch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNoDispFight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMemberChange(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMasterCharacterMainSelected(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHudNoCreate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHidePlayerIconId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGemUse(int32 TeamID, EGemKind GemKind);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCharaOffScreen(UObject* WorldContextObject, int32 teamNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCharaAssist(UObject* WorldContextObject, int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAssistNG(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Is3Round();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EWinType GetWinType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWinTeamNo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EWinTeam GetWinTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWinning(int32 teamNo, int32& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWinCount(int32 TeamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUniqueParam(int32 teamNo, int32 PartnerNo, int32 index);
    
    UFUNCTION(BlueprintCallable)
    static float GetTraningGCIntervalTime();
    
    UFUNCTION(BlueprintCallable)
    static float GetTPGaugeRate(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTitle(int32 teamNo, int32& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EConfigTimerType GetTimerType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTimerGaugeRatio(int32 TeamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSubCharacterNo(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetStreamingLevelNames(UObject* WorldContextObject, TArray<FString>& OutLevelNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULightComponentBase* GetStageActressLight();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSpaconMaxLevel(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSingleDamageValue(int32 TeamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSID(int32 teamNo, FString& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EScrollEventType GetScrollEventType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRemainEnemyNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRank(int32 teamNo, int32& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlRecoverRateForEach(int32 teamNo, int32 PartnerNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlLifeRateForEach(int32 teamNo, int32 PartnerNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlLifeRate_Buff(int32 teamNo, int32 PartnerNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlLifeRate(int32 teamNo);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerWaistPosFightPlId(int32 plID, FVector& outPos);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerWaistPosFight(int32 teamNo, FVector& outPos, int32 memberId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerRefrainNumber(int32 teamNo, int32 memberId);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerPosFightPlId(int32 plID, FVector& outPos, bool& flgRight);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerPosFight(int32 teamNo, FVector& outPos, bool& flgRight, int32 memberId);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerLooksInfo(int32 teamNo, int32 memberId, int32& PlType, int32& CostumeNo, int32& ColorNo);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerIdFight(int32 teamNo, int32 memberId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxComboDamageValue(int32 TeamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMasterCharacterNo(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetKeyDisplayNum(int32 Data, int32 index, int32& Num);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetKeyDisplayDataInt(int32 TeamID, int32 No, int32& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetKeyDisplayData(int32 TeamID, int32 No, FString& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHitCnt(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGuardAttr GetGuardAttribute(int32 TeamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGemUseRatio(int32 TeamID, EGemKind GemKind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGemTimerRatio(int32 TeamID, EGemKind GemKind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGaugeValueRate(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGaugeLvMax(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGaugeLv(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFinishType GetFinishType(int32 TeamID, int32 WinCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFinalRound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFightStyle(int32 plID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetExtraGaugeRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetComboDamageValue(int32 TeamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EComboCompliment GetComboComplimentId(int32 hitCnt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture* GetCharaCutInTexture(int32 teamNo, int32 PartnerNo, bool IsLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBattleFlow GetBattleFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetArrayElemSafe(const TArray<int32>& TargetArray, int32 index, int32& Item);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsOfClassFromSubLevel(UObject* WorldContextObject, const FString& LevelName, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckTeamAdvantage(int32 teamNo);
    
};

