#include "DuckModule.h"
#include "DuckCharaAttrSystem.h"

int32 UDuckCharaAttrSystem::RowCounter(const FText& Text) {
    return 0;
}

bool UDuckCharaAttrSystem::PopStockMessageAndRegisterHistory(int32 teamNo, FText& OutText, int32& OutCueId) {
    return false;
}

bool UDuckCharaAttrSystem::MessageSelecterForResult(int32 teamNo, int32 MainCharaID, int32 OpponentMainCharaID, int32 OpponentPertnerCharaID, FText& OutText, int32& OutCueId) {
    return false;
}

bool UDuckCharaAttrSystem::MessageSelecterForAppear(int32 teamNo, int32 MainCharaID, int32 PartnerCharaID, int32 OpponenCharaID) {
    return false;
}

bool UDuckCharaAttrSystem::MessageSelecter(EMsgBtlCase MsgType, int32 MainCharaID, int32 PartnerCharaID, int32 OpponenCharaID, bool FlgAddHistory, FText& OutText, int32& OutCueId) {
    return false;
}

bool UDuckCharaAttrSystem::LT_SetupBattleMsg(EMsgBtlCase Type, int32 PlType) {
    return false;
}

bool UDuckCharaAttrSystem::LT_IsSetupBattleMsgEnd() const {
    return false;
}

int32 UDuckCharaAttrSystem::LT_GetBattleMsgNum() const {
    return 0;
}

bool UDuckCharaAttrSystem::LT_GetBattleMsg(int32 index, FText& OutText, int32& CueID) const {
    return false;
}

void UDuckCharaAttrSystem::LT_Clear() {
}

bool UDuckCharaAttrSystem::LT_CheckBattleMsgExist(int32 index) const {
    return false;
}

UDuckCharaAttrSystem* UDuckCharaAttrSystem::GetInstanceExe() {
    return NULL;
}

UDuckCharaAttrSystem* UDuckCharaAttrSystem::GetInstance() {
    return NULL;
}

TArray<FDuckCharaMessageDetail> UDuckCharaAttrSystem::GetAllMessageDetailsResult(int32 MainCharaID, int32 OpponentMainCharaID, int32 OpponentPartnerCharaID) const {
    return TArray<FDuckCharaMessageDetail>();
}

TArray<FDuckCharaMessageDetail> UDuckCharaAttrSystem::GetAllMessageDetailsAppear(int32 MainCharaID, int32 PartnerCharaID, int32 OpponentCharaID) const {
    return TArray<FDuckCharaMessageDetail>();
}

void UDuckCharaAttrSystem::ClearStockMessage() {
}

void UDuckCharaAttrSystem::ClearMessageHistory() {
}

UDuckCharaAttrSystem::UDuckCharaAttrSystem() {
}


