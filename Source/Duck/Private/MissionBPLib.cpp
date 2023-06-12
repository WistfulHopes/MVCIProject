#include "DuckModule.h"
#include "MissionBPLib.h"

void UMissionBPLib::SetupMission() {
}

void UMissionBPLib::SetStageRepeat(bool IsRepeat) {
}

void UMissionBPLib::SetRecordAsset(URecordDataAsset* pAsset) {
}

void UMissionBPLib::SetMissionStage(int32 Stage) {
}

void UMissionBPLib::SetMissionCompleted(bool flag) {
}

void UMissionBPLib::ReStart() {
}

void UMissionBPLib::MissionStageReset() {
}

bool UMissionBPLib::MissionFlgCheckPure(int32 Value, int32 missionNum) {
    return false;
}

bool UMissionBPLib::MissionFlgCheck(int32 Value, int32 missionNum) {
    return false;
}

int32 UMissionBPLib::MissionFlgAddPure(int32 Value, int32 missionNum) {
    return 0;
}

int32 UMissionBPLib::MissionFlgAdd(int32 Value, int32 missionNum) {
    return 0;
}

void UMissionBPLib::MissionDefaultParameter() {
}

bool UMissionBPLib::MissionCompleteCheckPure(int32 Value, int32 CompleteNum) {
    return false;
}

bool UMissionBPLib::MissionCompleteCheck(int32 Value, int32 CompleteNum) {
    return false;
}

int32 UMissionBPLib::MissionClearedNumPure(int32 Value) {
    return 0;
}

int32 UMissionBPLib::MissionClearedNum(int32 Value) {
    return 0;
}

void UMissionBPLib::MissionClearDipCheck(int32 pl) {
}

bool UMissionBPLib::IsTouchDisable(int32 Stage) {
    return false;
}

bool UMissionBPLib::IsMissionCompleted() {
    return false;
}

bool UMissionBPLib::IsMissionClear() {
    return false;
}

int32 UMissionBPLib::GetTutorialStageTitleID(int32 Stage, int32 CategoryID) {
    return 0;
}

TArray<FMissionUI> UMissionBPLib::GetTutorialStageProgressMulti(int32 Stage, int32 CategoryID) {
    return TArray<FMissionUI>();
}

TArray<int32> UMissionBPLib::GetTutorialStageProgress(int32 Stage, int32 CategoryID) {
    return TArray<int32>();
}

void UMissionBPLib::GetTutorialCharaLooksInfo(int32 Stage, int32 CategoryID, int32 teamNo, int32 PartnerNo, int32& PlType, int32& CostumeNo, int32& ColorNo) {
}

int32 UMissionBPLib::GetTutorialChara(int32 Stage, int32 partner) {
    return 0;
}

int32 UMissionBPLib::GetMissionStageTitleID(int32 Stage, int32 charaID) {
    return 0;
}

TArray<FMissionUI> UMissionBPLib::GetMissionStageProgressMulti(int32 Stage, int32 charaID) {
    return TArray<FMissionUI>();
}

int32 UMissionBPLib::GetMissionStage() {
    return 0;
}

int32 UMissionBPLib::GetMissionProgress() {
    return 0;
}

EMissionPositionType UMissionBPLib::GetMissionPositionType(int32 Stage, int32 charaID) {
    return EMissionPositionType::NONE;
}

int32 UMissionBPLib::GetMissionCharaNo(int32 Stage, int32 charaID, int32 PartnerNo) {
    return 0;
}

void UMissionBPLib::GetMissionCharaLooksInfo(int32 Stage, int32 charaID, int32 teamNo, int32 PartnerNo, int32& PlType, int32& CostumeNo, int32& ColorNo) {
}

int32 UMissionBPLib::GetMissionChara() {
    return 0;
}

UMissionBPLib::UMissionBPLib() {
}


