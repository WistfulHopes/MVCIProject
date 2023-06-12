#include "DuckModule.h"
#include "StoryVersusData.h"

bool UStoryVersusData::IsDuckCustomDepthEnable() const {
    return false;
}

EStoryTextWinType UStoryVersusData::GetTxtWinType() const {
    return EStoryTextWinType::TXT_WIN_DEFEAT_TEAM;
}

EStoryTextSupportChara UStoryVersusData::GetTxtSupportChara() const {
    return EStoryTextSupportChara::TXT_SUPPORT_NONE;
}

TArray<EStoryTextSupportBufType> UStoryVersusData::GetTxtSupportBufType(int32 teamNo) const {
    return TArray<EStoryTextSupportBufType>();
}

TArray<EStoryTextSpType> UStoryVersusData::GetTxtSpType() const {
    return TArray<EStoryTextSpType>();
}

TArray<EStoryTextPlSpBufType> UStoryVersusData::GetTxtPlSpBufType(int32 teamNo, int32 PartnerNo) const {
    return TArray<EStoryTextPlSpBufType>();
}

UTexture* UStoryVersusData::GetScreenTexture() const {
    return NULL;
}

USoundAtomCueSheet* UStoryVersusData::GetCueSheet() const {
    return NULL;
}

int32 UStoryVersusData::GetCueId() const {
    return 0;
}

UStoryVersusData::UStoryVersusData() {
    this->TxtWinType = EStoryTextWinType::TXT_WIN_DEFEAT_TEAM;
    this->TxtSupportChara = EStoryTextSupportChara::TXT_SUPPORT_NONE;
    this->CueSheet = NULL;
    this->CueID = 0;
    this->ScreenTexture = NULL;
    this->DuckCustomDepthEnable = true;
}


