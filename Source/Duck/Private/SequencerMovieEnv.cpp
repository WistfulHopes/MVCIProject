#include "DuckModule.h"
#include "SequencerMovieEnv.h"








ASequencerMovieEnv::ASequencerMovieEnv() {
    this->StageTitle_ListNo = -1.00f;
    this->StageTitle_MsgNo = -1.00f;
    this->StageTitle_FadeType = ETextFadeType::TEXT_NONE;
    this->StageTitle_PosType = ETextPosType::POS_HEIGHT_06;
    this->StageTitle_SizeType = ETextSizeType::SIZE_MIDDLE;
    this->DayText_ListNo = -1.00f;
    this->DayText_MsgNo = -1.00f;
    this->DayText_FadeType = ETextFadeType::TEXT_NONE;
    this->DayText_PosType = ETextPosType::POS_HEIGHT_06;
    this->DayText_SizeType = ETextSizeType::SIZE_MIDDLE;
    this->Subtitle_ListNo = -1.00f;
    this->Subtitle_MsgNo = -1.00f;
    this->Subtitle_FadeType = ETextFadeType::TEXT_NONE;
    this->Subtitle_StyleType = ESubtitleStyleType::SINGLE;
    this->bPlayMovie = false;
    this->ViewFadeType = EDemoViewFadeType::VIEW_FADE_NONE;
}


