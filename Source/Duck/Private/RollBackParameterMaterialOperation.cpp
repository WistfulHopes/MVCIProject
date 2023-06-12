#include "DuckModule.h"
#include "RollBackParameterMaterialOperation.h"

FRollBackParameterMaterialOperation::FRollBackParameterMaterialOperation() {
    this->ParentMaterial = NULL;
    this->isUpdateEmissive = false;
    this->EmissiveIntensity = 0.00f;
    this->EmissiveOriginalIntensity = 0.00f;
    this->EmissiveMergeFrame = 0;
    this->isUpdateEmissiveFlash = false;
    this->EmissiveFlashMax = 0.00f;
    this->EmissiveFlashMin = 0.00f;
    this->EmissiveFlashSpeed = 0.00f;
    this->EmissiveFlashMergeFrame = 0.00f;
    this->isUpdateEffect = false;
    this->EffectIntensity = 0.00f;
    this->EffectOriginalIntensity = 0.00f;
    this->EffectMergeFrame = 0;
    this->EffectSinSpeed = 0.00f;
    this->isDetailNormal = false;
    this->DetailNormalIntensity = 0.00f;
    this->DetailNormalOriginalIntensity = 0.00f;
    this->DetailNormalMergeFrame = 0;
    this->Frame = 0;
    this->UpdateType = 0;
    this->isChangeTexture = false;
    this->isChangeHighlight = false;
}


