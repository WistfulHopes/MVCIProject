#pragma once
#include "DuckModule.h"
#include "BattleInfo.h"
#include "ELobbyMemberState.h"
#include "ELobbyVoiceRestrict.h"
#include "ELobby_Style.h"
#include "LobbyInfo.h"
#include "LobbyRule.h"
#include "MemberInfo.h"
#include "Lobby.generated.h"

class ULobby;

UCLASS(Blueprintable)
class DUCK_API ULobby : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdateLobbyRule);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdateLobby);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTemplateMessage, int32, member_index, int32, messageID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartBattle, ELobby_Style, Style);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestStartBattle, ELobby_Style, Style);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReadyWatch, ELobby_Style, Style);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReadyBattle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHostChange, int32, member_index);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeclineBattle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCancelStartBattle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMemberLeave, int32, member_index, const FMemberInfo&, Info);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMemberJoin, int32, member_index, const FMemberInfo&, Info);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFailure);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMemberJoin MemberJoin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMemberLeave MemberLeave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFailure Failure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateLobby OnUpdateLobby;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadyBattle OnReadyBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeclineBattle OnDeclineBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadyWatch OnReadyWatch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateLobbyRule OnUpdateLobbyRule;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestStartBattle OnRequestStartBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCancelStartBattle OnCancelStartBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartBattle OnStartBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTemplateMessage OnTemplateMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHostChange OnHostChange;
    
    ULobby();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELobbyMemberState UpdateMyState(ELobbyMemberState nowState);
    
    UFUNCTION(BlueprintCallable)
    void TryChangeSide(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void StartBattleNow(ELobby_Style Style);
    
    UFUNCTION(BlueprintCallable)
    static void SetVoiceRestrict(ELobbyVoiceRestrict lvt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLobbyInfo SetupSearchLobbyInfo();
    
    UFUNCTION(BlueprintCallable)
    static ULobby* SetupLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLobbyInfo SetupCreateLobbyInfo();
    
    UFUNCTION(BlueprintCallable)
    static void SetSpeakerVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void SetMemberMute(bool flag, int32 index);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyRule(FLobbyRule Rule);
    
    UFUNCTION(BlueprintCallable)
    static void SendTemplateMessage(int32 messageID);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SearchLobbyAgain(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SearchLobby(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FLobbyInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void ResetContinuousBattleNum();
    
    UFUNCTION(BlueprintCallable)
    void ResetBattleResult(int32 memberIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestStartBattle(ELobby_Style Style);
    
    UFUNCTION(BlueprintCallable)
    static void NoticeRoomState(bool isBattle, ELobby_Style Style);
    
    UFUNCTION(BlueprintCallable)
    static void NoticeResetRoomState();
    
    UFUNCTION(BlueprintCallable)
    static void NoticeInLobby(bool inLobby);
    
    UFUNCTION(BlueprintCallable)
    static void LeaveLobby();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void JoinLobby(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FLobbyInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTalking(int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpectator();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpponentMemberValid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpponemtMemberInLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMemberMute(int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInvited();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHost();
    
    UFUNCTION(BlueprintCallable)
    void Invite();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELobbyVoiceRestrict GetVoiceRestrict();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSpeakerVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSessionId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPrivateMemberNumInLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPriority();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPreviousBattleIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FMemberInfo> GetMemberList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMemberInfo GetMemberInfoFromIndex(int32 memberIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLobbyRule GetLobbyRule();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FLobbyInfo> getLobbyList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLobbyInfo GetLobbyInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGuestMemberNumInLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEmptyPrivateSlotNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEmptyGuestSlotNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLobbyRule GetCurrentRule();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetContinuousBattleNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetBattleState(int32 memberIndex, int32& State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBattleResultFromSpectator(int32 teamNo, int32& win, int32& lose, int32& Draw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBattleResult(int32& win, int32& lose, int32& Draw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FBattleInfo> GetBattleList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleIndex();
    
    UFUNCTION(BlueprintCallable)
    void ExitBattle();
    
    UFUNCTION(BlueprintCallable)
    void EntryBattleAsSpectate(int32 battle_index);
    
    UFUNCTION(BlueprintCallable)
    void EntryBattle(int32 battle_index);
    
    UFUNCTION(BlueprintCallable)
    void DeclineBattle();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CreateLobby(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FLobbyInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckSendStartBattle(bool& IsSend, ELobby_Style& Style);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckIsValidSpectatorInBattle(int32 battleIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckIsValidNextChallengerInBattle(int32 battleIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckIsValidMemberInBattle(int32 battleIndex);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CancelStartBattle(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void CancelRequest();
    
    UFUNCTION(BlueprintCallable)
    void AcceptStartBattle();
    
};

