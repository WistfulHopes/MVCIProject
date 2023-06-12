#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CollectionArtwarkNew.h"
#include "EInGameRewardRetType.h"
#include "HonorMsgDataCSV.h"
#include "InGameRewardBPLib.generated.h"

UCLASS(Blueprintable)
class DUCK_API UInGameRewardBPLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInGameRewardBPLib();
    UFUNCTION(BlueprintCallable)
    static void OpenProfileCardBG(int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    static void OpenHonor(int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    static void OpenColor(int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    static bool OpenCheckSlectStage();
    
    UFUNCTION(BlueprintCallable)
    static EInGameRewardRetType OpenCheckProfStage(int32 _ProfBGID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> OpenCheckHonor();
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> OpenCheckDatabaseStage();
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> OpenCheckDatabaseChara();
    
    UFUNCTION(BlueprintCallable)
    static EInGameRewardRetType OpenCheckColor(int32 _CharaId, int32 _CostumeNo, int32 _ColorNo);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FCollectionArtwarkNew> OpenCheckArtwark();
    
    UFUNCTION(BlueprintCallable)
    static void OpenCheckAchievement(bool _CheckHonor, bool _CheckColor, bool _CheckProf);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> NoticeCheckDLCChara();
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> NoticeCheckCollectionMovie();
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> NoticeCheckArrangeCostume02();
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> NoticeCheckArrangeCostume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSpecialHonor(int32 _HonorID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpenProfileCardBG(int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpenHonor(int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpenColorDirect(int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpenColor(int32 _CharaId, int32 _CostumeNo, int32 _ColorNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExistNew_Artwark();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetProfileCardBGNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetProfileCardBGFlagNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHonorNum();
    
    UFUNCTION(BlueprintCallable)
    static bool GetHonorMsgData(int32 _FlagIndex, FHonorMsgDataCSV& OutRow, bool WithoutTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetColorNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharaColorNumArange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharaColorNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindHonorMsgDataByID(int32 _HonorID, FHonorMsgDataCSV& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvertHonorIDToFlagIndex(int32 _HonorID);
    
    UFUNCTION(BlueprintCallable)
    static void CheckReward();
    
    UFUNCTION(BlueprintCallable)
    static void ALLOpen(bool _Open);
    
};

