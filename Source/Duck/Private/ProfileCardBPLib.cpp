#include "DuckModule.h"
#include "ProfileCardBPLib.h"

void UProfileCardBPLib::SetRotLR(TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index, int32 _NewRotLR) {
}

void UProfileCardBPLib::SetPosLR(TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index, int32 _NewPosLR) {
}

void UProfileCardBPLib::SetPosFB(TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index, int32 _NewPosFB) {
}

void UProfileCardBPLib::SetPauseNo(TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index, int32 _NewPause) {
}

void UProfileCardBPLib::SetOnlineMyProfileCardData(const FProfileCardData& _CardData) {
}

void UProfileCardBPLib::SetLocalSaveHistoryData(FProfileCardData& _CardData) {
}

void UProfileCardBPLib::SetLightMobility(ULightComponent* LightComponent, TEnumAsByte<EComponentMobility::Type> NewMobility) {
}

void UProfileCardBPLib::SetLightChannel(ULightComponent* LightComponent, bool _Channel00, bool _Channel01, bool _Channel02) {
}

void UProfileCardBPLib::SetLatestEditTime(FProfileCardData& _CardData, FDateTime _NewTime) {
}

void UProfileCardBPLib::SetIsOpen(FProfileCardData& _CardData, bool _NewIsOpen) {
}

void UProfileCardBPLib::SetHonor(FProfileCardData& _CardData, int32 _NewHonor) {
}

void UProfileCardBPLib::SetDebugHistoryRank(FProfileCardData& _Info, int32 _Index, int32 _BP) {
}

void UProfileCardBPLib::SetDebugHistory(FProfileCardData& _Info) {
}

void UProfileCardBPLib::SetDebugBattleData(FProfileCardData& _Info) {
}

void UProfileCardBPLib::SetCostumeNo(TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index, int32 _InCostume) {
}

void UProfileCardBPLib::SetColorNo(TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index, int32 _NewColor) {
}

void UProfileCardBPLib::SetCharaInfoCostumeNo(FProfileCardData& _CardData, int32 _Index, int32 _InCostume) {
}

void UProfileCardBPLib::SetCharaInfoColorNo(FProfileCardData& _CardData, int32 _Index, int32 _NewColor) {
}

void UProfileCardBPLib::SetCharaInfoCharaID(FProfileCardData& _CardData, int32 _Index, int32 _InID) {
}

void UProfileCardBPLib::SetCharaID(TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index, int32 _InID) {
}

void UProfileCardBPLib::SetCharacterInfo(FProfileCardData& _CardData, TArray<FProfileCharacterInfo> _NewInfoArray) {
}

void UProfileCardBPLib::SetBGPosUD(FProfileBackGroundInfo& _Info, int32 _PosUD) {
}

void UProfileCardBPLib::SetBGPosFB(FProfileBackGroundInfo& _Info, int32 _PosFB) {
}

void UProfileCardBPLib::SetBGInfo(FProfileCardData& _CardData, FProfileBackGroundInfo _NewInfo) {
}

void UProfileCardBPLib::SetBackGroundID(FProfileBackGroundInfo& _Info, int32 _Index) {
}

UMsgDataTbl* UProfileCardBPLib::LoadHistoryMsgData() {
    return NULL;
}

int32 UProfileCardBPLib::GetRotLR(const TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index) {
    return 0;
}

int32 UProfileCardBPLib::GetPosLR(const TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index) {
    return 0;
}

int32 UProfileCardBPLib::GetPosFB(const TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index) {
    return 0;
}

int32 UProfileCardBPLib::GetPauseNo(const TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index) {
    return 0;
}

FProfileCardData UProfileCardBPLib::GetOnlineMyProfileCardData() {
    return FProfileCardData{};
}

FDateTime UProfileCardBPLib::GetLatestEditTime(const FProfileCardData& _CardData) {
    return FDateTime{};
}

int32 UProfileCardBPLib::GetHonor(const FProfileCardData& _CardData) {
    return 0;
}

FText UProfileCardBPLib::GetHistoryText(const TArray<FText>& _MsgData, const FHistory& _History) {
    return FText::GetEmpty();
}

int32 UProfileCardBPLib::GetCostumeNo(const TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index) {
    return 0;
}

int32 UProfileCardBPLib::GetColorNo(const TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index) {
    return 0;
}

int32 UProfileCardBPLib::GetCharaID(const TArray<FProfileCharacterInfo>& _InfoArray, int32 _Index) {
    return 0;
}

TArray<FProfileCharacterInfo> UProfileCardBPLib::GetCharacterInfo(const FProfileCardData& _CardData) {
    return TArray<FProfileCharacterInfo>();
}

int32 UProfileCardBPLib::GetBGPosUD(const FProfileBackGroundInfo& _Info) {
    return 0;
}

int32 UProfileCardBPLib::GetBGPosFB(const FProfileBackGroundInfo& _Info) {
    return 0;
}

FProfileBackGroundInfo UProfileCardBPLib::GetBGInfo(const FProfileCardData& _CardData) {
    return FProfileBackGroundInfo{};
}

int32 UProfileCardBPLib::GetBackGroundID(const FProfileBackGroundInfo& _Info) {
    return 0;
}

void UProfileCardBPLib::CheckProfileCardData(FProfileCardData& _CardData, bool IsCheckPlayGO, bool IsCheckPurchase) {
}

UProfileCardBPLib::UProfileCardBPLib() {
}


