#include "DuckModule.h"
#include "GimmickMaterialParam.h"

FGimmickMaterialParam::FGimmickMaterialParam() {
    this->No = 0;
    this->UniqueID = 0;
    this->BlackOutVanishStage = false;
    this->BlackOutAlphaRatio = 0.00f;
    this->BlackOutDimension = 0.00f;
    this->BlackOutEndFrame = 0.00f;
    this->BlackOutStartFrame = 0.00f;
    this->BlackOut = false;
    this->EffectSinSpeed = 0.00f;
    this->OuterColorA = 0.00f;
    this->OuterColorB = 0.00f;
    this->OuterColorG = 0.00f;
    this->OuterColorR = 0.00f;
    this->InnerColorA = 0.00f;
    this->InnerColorB = 0.00f;
    this->InnerColorG = 0.00f;
    this->InnerColorR = 0.00f;
    this->HighlightOffsetY = 0.00f;
    this->HighlightOffsetX = 0.00f;
    this->MergeFrameDetailNormal = 0;
    this->OriginalIntensityDetailNormal = 0.00f;
    this->DetailNormalIntensity = 0.00f;
    this->MergeFrameEffect = 0;
    this->OriginalIntensityEffect = 0.00f;
    this->EffectIntensity = 0.00f;
    this->MergeFrameEmissiveFlash = 0;
    this->EmissiveFlashSpeed = 0.00f;
    this->EmissiveFlashMinIntensity = 0.00f;
    this->EmissiveFlashMaxIntensity = 0.00f;
    this->MergeFrame = 0;
    this->OriginalIntensity = 0.00f;
    this->EmissiveIntensity = 0.00f;
    this->Highlight = false;
    this->Detail = false;
    this->effect = false;
    this->EmissiveFlash = false;
    this->Emissive = false;
    this->FixOperation = false;
    this->RSMAMap = NULL;
    this->NormalMap = NULL;
    this->ColorMap = NULL;
    this->ChangeTexture = false;
    this->Material = NULL;
    this->ChargeBit = 0;
    this->StyleBit = 0;
    this->DefaultSetting = false;
}


