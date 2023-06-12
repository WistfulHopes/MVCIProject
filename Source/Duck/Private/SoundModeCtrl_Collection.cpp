#include "DuckModule.h"
#include "SoundModeCtrl_Collection.h"

void USoundModeCtrl_Collection::StopVoice() {
}

void USoundModeCtrl_Collection::StopBGM02() {
}

void USoundModeCtrl_Collection::StopBGM() {
}

bool USoundModeCtrl_Collection::SetCueSheetVoice(USoundAtomCueSheet* _CueSheetOrigin, USoundAtomCueSheet* _CueSheetAdd) {
    return false;
}

int32 USoundModeCtrl_Collection::SetCueSheetBGM_EX(USoundAtomCueSheet* _CueSheet) {
    return 0;
}

bool USoundModeCtrl_Collection::SetCueSheetBGM(USoundAtomCueSheet* _CueSheet, int32 _SheetId, int32 _PlayerNo) {
    return false;
}

void USoundModeCtrl_Collection::ResumeBGM() {
}

int32 USoundModeCtrl_Collection::PlayVoice(int32 _CueID, int32 _SelectorID) {
    return 0;
}

int32 USoundModeCtrl_Collection::PlayBGM02(int32 _SheetId, int32 _CueID, bool _IsAutoPlay, int32 _StartTime) {
    return 0;
}

int32 USoundModeCtrl_Collection::PlayBGM(int32 _SheetId, int32 _CueID, bool _IsAutoPlay, int32 _StartTime) {
    return 0;
}

void USoundModeCtrl_Collection::PauseBGM() {
}

ECollectSoundRetType USoundModeCtrl_Collection::IsValidVoiceByIdx(USoundAtomCueSheet* _CueSheet, int32 _Index, bool OpenCheck) {
    return ECollectSoundRetType::VALID;
}

ECollectSoundRetType USoundModeCtrl_Collection::IsValidVoice(USoundAtomCueSheet* _CueSheet, int32 _CueID, bool OpenCheck) {
    return ECollectSoundRetType::VALID;
}

bool USoundModeCtrl_Collection::IsValidCueIDByIdx(USoundAtomCueSheet* _CueSheet, int32 _Index) {
    return false;
}

bool USoundModeCtrl_Collection::IsValidCueID(USoundAtomCueSheet* _CueSheet, int32 _CueID) {
    return false;
}

bool USoundModeCtrl_Collection::IsPlayVoice() {
    return false;
}

bool USoundModeCtrl_Collection::IsPlayBGM() {
    return false;
}

bool USoundModeCtrl_Collection::IsBGMEnd() {
    return false;
}

int32 USoundModeCtrl_Collection::GetCueNum(USoundAtomCueSheet* _CueSheet) {
    return 0;
}

int32 USoundModeCtrl_Collection::GetCueIDByIdx(USoundAtomCueSheet* _CueSheet, int32 _Index) {
    return 0;
}

bool USoundModeCtrl_Collection::GetCollectionVoiceTableData(UDataTable* _Table, int32 _Index, FCollectionVoiceTableCSV& OutRow) {
    return false;
}

void USoundModeCtrl_Collection::AttachBGMFader(int32 FadeInTimeMS, int32 FadeOutTimeMS) {
}

USoundModeCtrl_Collection::USoundModeCtrl_Collection() {
}


