#include "DuckModule.h"
#include "TrainingBPLib.h"

void UTrainingBPLib::SetVitalGaugeType(int32 teamNo, EConfigVTGaugeType GaugeType) {
}

void UTrainingBPLib::SetupTraining() {
}

void UTrainingBPLib::SetupOnlineTraining() {
}

void UTrainingBPLib::SetThrowEscape(EConfigChoice3 Choice3) {
}

void UTrainingBPLib::SetReverseSide(bool Flg) {
}

void UTrainingBPLib::SetRecoveryType(EConfigRecoveryType RecoveryType) {
}

void UTrainingBPLib::SetRecordSelectSlotNum(int32 SlotNum) {
}

void UTrainingBPLib::SetLatencyType(EConfigLatencyType LatencyType) {
}

void UTrainingBPLib::SetInitLayout(EConfigInitLayout InitLayout) {
}

void UTrainingBPLib::SetHyperGaugeType(int32 teamNo, int32 Num) {
}

void UTrainingBPLib::SetGuardType(EConfigGuardType GuardType) {
}

void UTrainingBPLib::SetGemType(int32 teamNo, EGemKind GaugeType) {
}

void UTrainingBPLib::SetGemGaugeType(int32 teamNo, EConfigGMGaugeType GaugeType) {
}

void UTrainingBPLib::SetEasyHC(bool Flg) {
}

void UTrainingBPLib::SetDummyControl(bool Flg) {
}

void UTrainingBPLib::SetDummyAction(EConfigDummyAction Action) {
}

void UTrainingBPLib::SetDifficultyType(EConfigDifficultyType DifficultyType) {
}

void UTrainingBPLib::SetCounterHit(EConfigChoice3 Choice3) {
}

void UTrainingBPLib::SetBreakFall(EConfigBreakFall BreakFall) {
}

void UTrainingBPLib::SetAutoSJ(bool Flg) {
}

void UTrainingBPLib::SetAutoCombo(bool Flg) {
}

void UTrainingBPLib::SetADVGuardType(EConfigGuardType GuardType) {
}

void UTrainingBPLib::ReStart() {
}

void UTrainingBPLib::ReflectionTrainingData(FTrainingData Data, EGemKind gemTypePlayer, EGemKind gemTypeDummy, bool IsOnline) {
}

void UTrainingBPLib::RecordStop() {
}

void UTrainingBPLib::RecordStart() {
}

void UTrainingBPLib::RecordPlayRandom() {
}

void UTrainingBPLib::RecordPlay() {
}

void UTrainingBPLib::RecordDelete(int32 SlotNum) {
}

ETrainingShortcutType UTrainingBPLib::GetShortcutTraining() {
    return ETrainingShortcutType::None;
}

float UTrainingBPLib::GetRecordTime(int32 SlotNum) {
    return 0.0f;
}

ERecordState UTrainingBPLib::GetRecordState() {
    return ERecordState::NONE;
}

int32 UTrainingBPLib::GetRecordSelectSlotNum() {
    return 0;
}

float UTrainingBPLib::GetRecordPlayTime() {
    return 0.0f;
}

bool UTrainingBPLib::GetIsReStartFlg() {
    return false;
}

EGemKind UTrainingBPLib::GetGemType(int32 teamNo) {
    return EGemKind::GEM_POWER;
}

void UTrainingBPLib::DoGaugeReset() {
}

void UTrainingBPLib::ClearReStart() {
}

UTrainingBPLib::UTrainingBPLib() {
}


