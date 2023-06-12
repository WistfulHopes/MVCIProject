#include "DuckModule.h"
#include "SoundModeCtrl_Battle.h"

void USoundModeCtrl_Battle::StopResultBGM() {
}

void USoundModeCtrl_Battle::StopJingleIntruder() {
}

void USoundModeCtrl_Battle::StopJingleGameOver() {
}

void USoundModeCtrl_Battle::StopJingleClear() {
}

void USoundModeCtrl_Battle::StopCharaAllSound(int32 PlWorkNo) {
}

void USoundModeCtrl_Battle::SetCharaFacialCtrlOn(bool FlgOn) {
}

void USoundModeCtrl_Battle::PlayStagePropSE(USoundAtomCue* pCue) {
}

void USoundModeCtrl_Battle::PlayStageAmbient(int32 CueID) {
}

void USoundModeCtrl_Battle::PlayResultBGM() {
}

void USoundModeCtrl_Battle::PlayJingleIntruder() {
}

void USoundModeCtrl_Battle::PlayJingleGameOver() {
}

void USoundModeCtrl_Battle::PlayJingleClear() {
}

void USoundModeCtrl_Battle::PlayCmnSEWithSide(int32 SheetId, int32 CueID, bool IsLeft) {
}

void USoundModeCtrl_Battle::PlayCmnSERollbackTarget(int32 SheetId, int32 CueID) {
}

void USoundModeCtrl_Battle::PlayCmnSEBP(int32 SheetId, int32 CueID) {
}

void USoundModeCtrl_Battle::PlayCharaVoiceBP(int32 CueID, int32 PlWorkNo) {
}

void USoundModeCtrl_Battle::PlayCharaOrgSEBP(int32 CueID, int32 PlWorkNo) {
}

void USoundModeCtrl_Battle::PauseSound(bool FlgOn) {
}

bool USoundModeCtrl_Battle::IsPlayingResultBGM() const {
    return false;
}

bool USoundModeCtrl_Battle::IsJingleEndIntruder() const {
    return false;
}

bool USoundModeCtrl_Battle::IsJingleEndGameOver() const {
    return false;
}

bool USoundModeCtrl_Battle::IsJingleEndClear() const {
    return false;
}

void USoundModeCtrl_Battle::FadeOutAllSoundByIntruder() {
}

USoundModeCtrl_Battle::USoundModeCtrl_Battle() {
    this->mpStageData = NULL;
}


