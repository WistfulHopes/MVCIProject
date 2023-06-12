#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EComponentMobility -FallbackName=EComponentMobility
#include "History.h"
#include "ProfileBackGroundInfo.h"
#include "ProfileCardData.h"
#include "ProfileCharacterInfo.h"
#include "ProfileCardBPLib.generated.h"

class ULightComponent;
class UMsgDataTbl;

UCLASS(Blueprintable)
class DUCK_API UProfileCardBPLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UProfileCardBPLib();
    UFUNCTION(BlueprintCallable)
    static void SetRotLR(UPARAM(Ref) TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index, int32 _NewRotLR);
    
    UFUNCTION(BlueprintCallable)
    static void SetPosLR(UPARAM(Ref) TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index, int32 _NewPosLR);
    
    UFUNCTION(BlueprintCallable)
    static void SetPosFB(UPARAM(Ref) TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index, int32 _NewPosFB);
    
    UFUNCTION(BlueprintCallable)
    static void SetPauseNo(UPARAM(Ref) TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index, int32 _NewPause);
    
    UFUNCTION(BlueprintCallable)
    static void SetOnlineMyProfileCardData(const FProfileCardData& _CardData);
    
    UFUNCTION(BlueprintCallable)
    static void SetLocalSaveHistoryData(UPARAM(Ref) FProfileCardData& _CardData);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightMobility(ULightComponent* LightComponent, TEnumAsByte<EComponentMobility::Type> NewMobility);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightChannel(ULightComponent* LightComponent, bool _Channel00, bool _Channel01, bool _Channel02);
    
    UFUNCTION(BlueprintCallable)
    static void SetLatestEditTime(UPARAM(Ref) FProfileCardData& _CardData, FDateTime _NewTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsOpen(UPARAM(Ref) FProfileCardData& _CardData, bool _NewIsOpen);
    
    UFUNCTION(BlueprintCallable)
    static void SetHonor(UPARAM(Ref) FProfileCardData& _CardData, int32 _NewHonor);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugHistoryRank(UPARAM(Ref) FProfileCardData& _Info, int32 _Index, int32 _BP);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugHistory(UPARAM(Ref) FProfileCardData& _Info);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugBattleData(UPARAM(Ref) FProfileCardData& _Info);
    
    UFUNCTION(BlueprintCallable)
    static void SetCostumeNo(UPARAM(Ref) TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index, int32 _InCostume);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorNo(UPARAM(Ref) TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index, int32 _NewColor);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharaInfoCostumeNo(UPARAM(Ref) FProfileCardData& _CardData, int32 _Index, int32 _InCostume);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharaInfoColorNo(UPARAM(Ref) FProfileCardData& _CardData, int32 _Index, int32 _NewColor);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharaInfoCharaID(UPARAM(Ref) FProfileCardData& _CardData, int32 _Index, int32 _InID);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharaID(UPARAM(Ref) TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index, int32 _InID);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterInfo(UPARAM(Ref) FProfileCardData& _CardData, TArray<FProfileCharacterInfo> _NewInfoArray);
    
    UFUNCTION(BlueprintCallable)
    static void SetBGPosUD(UPARAM(Ref) FProfileBackGroundInfo& _Info, int32 _PosUD);
    
    UFUNCTION(BlueprintCallable)
    static void SetBGPosFB(UPARAM(Ref) FProfileBackGroundInfo& _Info, int32 _PosFB);
    
    UFUNCTION(BlueprintCallable)
    static void SetBGInfo(UPARAM(Ref) FProfileCardData& _CardData, FProfileBackGroundInfo _NewInfo);
    
    UFUNCTION(BlueprintCallable)
    static void SetBackGroundID(UPARAM(Ref) FProfileBackGroundInfo& _Info, int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMsgDataTbl* LoadHistoryMsgData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRotLR(const TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPosLR(const TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPosFB(const TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPauseNo(const TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    static FProfileCardData GetOnlineMyProfileCardData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetLatestEditTime(const FProfileCardData& _CardData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHonor(const FProfileCardData& _CardData);
    
    UFUNCTION(BlueprintCallable)
    static FText GetHistoryText(const TArray<FText>& _MsgData, const FHistory& _History);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCostumeNo(const TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetColorNo(const TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharaID(const TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FProfileCharacterInfo> GetCharacterInfo(const FProfileCardData& _CardData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBGPosUD(const FProfileBackGroundInfo& _Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBGPosFB(const FProfileBackGroundInfo& _Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FProfileBackGroundInfo GetBGInfo(const FProfileCardData& _CardData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBackGroundID(const FProfileBackGroundInfo& _Info);
    
    UFUNCTION(BlueprintCallable)
    static void CheckProfileCardData(UPARAM(Ref) FProfileCardData& _CardData, bool IsCheckPlayGO, bool IsCheckPurchase);
    
};

