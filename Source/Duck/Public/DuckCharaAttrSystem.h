#pragma once
#include "DuckModule.h"
#include "DuckBaseSystem.h"
#include "DuckCharaMessageDetail.h"
#include "EMsgBtlCase.h"
#include "DuckCharaAttrSystem.generated.h"

class UDuckCharaAttrSystem;

UCLASS(Blueprintable)
class DUCK_API UDuckCharaAttrSystem : public UDuckBaseSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> mLTMsgText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> mLTMsgCueId;
    
public:
    UDuckCharaAttrSystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 RowCounter(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    bool PopStockMessageAndRegisterHistory(int32 teamNo, FText& OutText, int32& OutCueId);
    
    UFUNCTION(BlueprintCallable)
    bool MessageSelecterForResult(int32 teamNo, int32 MainCharaID, int32 OpponentMainCharaID, int32 OpponentPertnerCharaID, FText& OutText, int32& OutCueId);
    
    UFUNCTION(BlueprintCallable)
    bool MessageSelecterForAppear(int32 teamNo, int32 MainCharaID, int32 PartnerCharaID, int32 OpponenCharaID);
    
    UFUNCTION(BlueprintCallable)
    bool MessageSelecter(EMsgBtlCase MsgType, int32 MainCharaID, int32 PartnerCharaID, int32 OpponenCharaID, bool FlgAddHistory, FText& OutText, int32& OutCueId);
    
    UFUNCTION(BlueprintCallable)
    bool LT_SetupBattleMsg(EMsgBtlCase Type, int32 PlType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LT_IsSetupBattleMsgEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 LT_GetBattleMsgNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LT_GetBattleMsg(int32 index, FText& OutText, int32& CueID) const;
    
    UFUNCTION(BlueprintCallable)
    void LT_Clear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LT_CheckBattleMsgExist(int32 index) const;
    
    UFUNCTION(BlueprintCallable)
    static UDuckCharaAttrSystem* GetInstanceExe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDuckCharaAttrSystem* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDuckCharaMessageDetail> GetAllMessageDetailsResult(int32 MainCharaID, int32 OpponentMainCharaID, int32 OpponentPartnerCharaID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDuckCharaMessageDetail> GetAllMessageDetailsAppear(int32 MainCharaID, int32 PartnerCharaID, int32 OpponentCharaID) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearStockMessage();
    
    UFUNCTION(BlueprintCallable)
    void ClearMessageHistory();
    
};

