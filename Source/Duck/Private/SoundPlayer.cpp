#include "DuckModule.h"
#include "SoundPlayer.h"

bool USoundPlayer::UnInitialize() {
    return false;
}

bool USoundPlayer::Stop(bool _IsImmediate) {
    return false;
}

void USoundPlayer::SetVolume(float _InVolume) {
}

void USoundPlayer::SetSelector(const FString& Selector, const FString& Label) {
}

bool USoundPlayer::SetCueSheet(const FString& _CueSheetFilePath) {
    return false;
}

bool USoundPlayer::Play_Sys(const ESound_SYS _SysID, const int32 _StartTime) {
    return false;
}

bool USoundPlayer::Play_CueSheet(USoundAtomCueSheet* _CueSheet, const int32 _CueID, const int32 _StartTime) {
    return false;
}

bool USoundPlayer::Play_Cmn(const ESound_CMN _CmnID, const int32 _StartTime) {
    return false;
}

bool USoundPlayer::Play(const int32 _CueID, const int32 _StartTime) {
    return false;
}

bool USoundPlayer::Pause(const bool _IsPause) {
    return false;
}

void USoundPlayer::OutputSelectorNames() {
}

bool USoundPlayer::IsPlay() const {
    return false;
}

bool USoundPlayer::IsPause() const {
    return false;
}

bool USoundPlayer::Initialize(USoundManager* _SoundManager) {
    return false;
}

void USoundPlayer::ClearSelector() {
}

USoundPlayer::USoundPlayer() {
    this->SoundManager = NULL;
}


