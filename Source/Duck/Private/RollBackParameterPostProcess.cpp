#include "DuckModule.h"
#include "RollBackParameterPostProcess.h"

FRollBackParameterPostProcess::FRollBackParameterPostProcess() {
    this->isEnableBlackOut = false;
    this->isEnableColorGrading = false;
    this->isEnableNegaposi = false;
    this->isActiveGemPP = false;
    this->isActiveAnotherWorld = false;
    this->GemKind = 0;
    this->Timer = 0.00f;
    this->StartFrame = 0.00f;
    this->EndFrame = 0.00f;
    this->PlayerID = 0;
    this->MatKind = 0;
    this->BlendKind = 0;
    this->Dimension = 0.00f;
    this->Frame = 0.00f;
    this->BlendAlpha = 0.00f;
    this->isAdjustPosition = false;
    this->isAkebonoFinished = false;
    this->ScalarParamBlackOut = 0.00f;
    this->ScalarParamBlackOutFlip = 0.00f;
    this->ScalarParamBlackOutBlend = 0.00f;
}


