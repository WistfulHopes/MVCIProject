#include "DuckModule.h"
#include "SoundModeCtrl_Story.h"

void USoundModeCtrl_Story::StopBGM(int32 SheetId, int32 FadeOutTime) {
}

int32 USoundModeCtrl_Story::PrepareBGM(int32 SheetId, int32 CueID, int32 FadeInTime, bool bAutoPlay, int32 StartTime) {
    return 0;
}

bool USoundModeCtrl_Story::PlayMovieBGM() {
    return false;
}

bool USoundModeCtrl_Story::PlayBGM(int32 DataId) {
    return false;
}

bool USoundModeCtrl_Story::IsPrepareMovieBGMEnd() const {
    return false;
}

int32 USoundModeCtrl_Story::GetTime() {
    return 0;
}

int32 USoundModeCtrl_Story::GetSyncTime(int32 index) {
    return 0;
}

bool USoundModeCtrl_Story::CheckAlreadyPlaying(USoundAtomCueSheet* pCueSheet, int32 CueID) const {
    return false;
}

USoundModeCtrl_Story::USoundModeCtrl_Story() {
    this->mpSoundPlayerBGM = NULL;
}


