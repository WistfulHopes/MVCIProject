#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "HistoryBPLib.generated.h"

UCLASS(Blueprintable)
class DUCK_API UHistoryBPLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHistoryBPLib();
    UFUNCTION(BlueprintCallable)
    static void WinStreakRank(int32 _Win);
    
    UFUNCTION(BlueprintCallable)
    static void WinStreakOther(int32 _Win);
    
    UFUNCTION(BlueprintCallable)
    static void WinRookies(int32 _Win);
    
    UFUNCTION(BlueprintCallable)
    static void WinRank(int32 _Win);
    
    UFUNCTION(BlueprintCallable)
    static void WinLobby(int32 _Win);
    
    UFUNCTION(BlueprintCallable)
    static void WinCasual(int32 _Win);
    
    UFUNCTION(BlueprintCallable)
    static void RankUp(int32 _BP);
    
    UFUNCTION(BlueprintCallable)
    static void RankDown(int32 _BP);
    
    UFUNCTION(BlueprintCallable)
    static void PlayCount(int32 _PlayCnt, int32 _CharaId);
    
    UFUNCTION(BlueprintCallable)
    static void MissionClearNum();
    
    UFUNCTION(BlueprintCallable)
    static void MissionClearChara(int32 _CharaId);
    
    UFUNCTION(BlueprintCallable)
    static void MissionClearALL();
    
    UFUNCTION(BlueprintCallable)
    static void HonorNum(int32 _Num);
    
    UFUNCTION(BlueprintCallable)
    static void ArcadeClearALL();
    
    UFUNCTION(BlueprintCallable)
    static void ArcadeClear(int32 _CharaMain, int32 _CharaSub);
    
};

