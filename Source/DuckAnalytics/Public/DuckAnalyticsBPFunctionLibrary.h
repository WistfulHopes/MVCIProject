#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Duck -ObjectName=EBattleSettingDifficulty -FallbackName=EBattleSettingDifficulty
//CROSS-MODULE INCLUDE V2: -ModuleName=Duck -ObjectName=EGameMode -FallbackName=EGameMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Duck -ObjectName=EWinTeam -FallbackName=EWinTeam
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DuckAnalyticsBPFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class DUCKANALYTICS_API UDuckAnalyticsBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDuckAnalyticsBPFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static FString ToHashedString(const FString& inString);
    
    UFUNCTION(BlueprintCallable)
    static bool StartSession();
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_UserInfo();
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_Training(const uint8 PlayerType);
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_Story(const EBattleSettingDifficulty Difficulty, const int32 ChapterNo);
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_Option();
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_ModeSelect(const EGameMode GameMode);
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_MatchStart();
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_MatchSkill(const int32 Team);
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_MatchEnd();
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_MatchCharacter(const int32 Team, const int32 PartnerNo);
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_LocalVSGem();
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_LocalVSChara();
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_LocalVS();
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_ItemAcquirement(const uint8 PlayerType);
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_ControllerSetting(const int32 PlayerNo);
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_ClientData();
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_CharacterUsage(const uint8 PlayerType);
    
    UFUNCTION(BlueprintCallable)
    static void RecordEvent_Arcade(const EBattleSettingDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    static void OnTrainingStartSub(const uint8 Pl1, const uint8 Pl2);
    
    UFUNCTION(BlueprintCallable)
    static void OnTrainingStart();
    
    UFUNCTION(BlueprintCallable)
    static void OnTrainingEnd();
    
    UFUNCTION(BlueprintCallable)
    static void OnStoryMovieSkipSub2(const EBattleSettingDifficulty Difficulty, const int32 ChapterNo);
    
    UFUNCTION(BlueprintCallable)
    static void OnStoryMovieSkipSub(const int32 ChapterNo);
    
    UFUNCTION(BlueprintCallable)
    static void OnStoryMovieSkip();
    
    UFUNCTION(BlueprintCallable)
    static void OnStoryChapterStartSub2(const EBattleSettingDifficulty Difficulty, const int32 ChapterNo, const bool isClear);
    
    UFUNCTION(BlueprintCallable)
    static void OnStoryChapterStartSub(const int32 ChapterNo, const bool isClear);
    
    UFUNCTION(BlueprintCallable)
    static void OnStoryChapterStart();
    
    UFUNCTION(BlueprintCallable)
    static void OnStoryBattleEndSub(const EBattleSettingDifficulty Difficulty, const int32 ChapterNo, const EWinTeam WinTeam);
    
    UFUNCTION(BlueprintCallable)
    static void OnStoryBattleEnd();
    
    UFUNCTION(BlueprintCallable)
    static void OnModeSelect(const EGameMode GameMode);
    
    UFUNCTION(BlueprintCallable)
    static void OnCharacterSelectSub(const uint8 Pl1, const int32 Cos1, const int32 Col1, const uint8 Pl2, const int32 Cos2, const int32 Col2);
    
    UFUNCTION(BlueprintCallable)
    static void OnCharacterSelect_LocalVSSub(const int32 GemTeam1, const uint8 Pl1Team1, const uint8 Pl2Team1, const int32 GemTeam2, const uint8 Pl1Team2, const uint8 Pl2Team2);
    
    UFUNCTION(BlueprintCallable)
    static void OnCharacterSelect_LocalVS();
    
    UFUNCTION(BlueprintCallable)
    static void OnCharacterSelect();
    
    UFUNCTION(BlueprintCallable)
    static void OnArcadeBattleEndSub(const EBattleSettingDifficulty Difficulty, const int32 BattleNo, const EWinTeam WinTeam);
    
    UFUNCTION(BlueprintCallable)
    static void OnArcadeBattleEnd();
    
    UFUNCTION(BlueprintCallable)
    static bool IsApproved();
    
    UFUNCTION(BlueprintCallable)
    static void FlushEventsWithAuthCode(const FString& AuthCode, const FString& AuthIssuer);
    
    UFUNCTION(BlueprintCallable)
    static void FlushEvents();
    
    UFUNCTION(BlueprintCallable)
    static void EndSession();
    
};

