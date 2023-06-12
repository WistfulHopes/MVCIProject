#include "DuckModule.h"
#include "DuckUserData.h"

UDuckUserData::UDuckUserData() {
    this->PlayerName = TEXT("Player0");
    this->UserIndex = 0;
    this->Language = ELanguage::English;
    this->Honor = 0;
    this->SaveSlotName = TEXT("System");
    this->IsBattleCommentary = true;
    this->SoundVolumeRates[0] = 0.00f;
    this->SoundVolumeRates[1] = 0.00f;
    this->SoundVolumeRates[2] = 0.00f;
    this->SoundVolumeRates[3] = 0.00f;
    this->SoundVolumeRates[4] = 0.00f;
    this->HudHeight[0] = 0.00f;
    this->HudHeight[1] = 0.00f;
    this->IsBattleSubTitleVisible = true;
    this->IsStorySubTitleVisible = true;
    this->IsControllerSelect = false;
    this->IsReplayAutoUpload = true;
    this->IsReplayAutoSave = true;
    this->IsStatAutoUpload = false;
    this->IsStatAutoUploadConfirm = true;
    this->IsFullScreen = true;
    this->DisplayQuality = 2;
    this->ScalingResolution = 66;
    this->DisplayDistance = 2;
    this->AntiAliasSetting = 2;
    this->PostProccesSetting = 2;
    this->ShadowSetting = 2;
    this->TextureSetting = 2;
    this->EffectSetting = 2;
    this->IsSteamStarted = false;
    this->IsVoiceChatUIVisible = true;
    this->IsBattleChatOnlyRoom = true;
    this->IsShowMsgOpenStage01 = false;
    this->IsShowMsgOpenStage02 = false;
    this->IsShowMsgOpenStage03 = false;
    this->ProfileLatestEditTime = 0;
    this->IsOpenProfCard = true;
    this->StoryPlayIndex = 0;
    this->StoryClearIndex = 0;
    this->StoryAllClear = false;
    this->StoryLowerCPUDifCnt = 0;
    this->SaveDataVersion = 0;
}


