#include "DuckModule.h"
#include "CharacterAssetCameraKey.h"

FCharacterAssetCameraKey::FCharacterAssetCameraKey() {
    this->EaseCurveP1 = 0.00f;
    this->EaseCurveP0 = 0.00f;
    this->IsIntLocal = false;
    this->IntTargetType = ECamTargetType::NONE;
    this->IntJointNo = 0;
    this->IntOffsetZ = 0;
    this->IntOffsetY = 0;
    this->IntOffsetX = 0;
    this->IsPosLocal = false;
    this->PosTargetType = ECamTargetType::NONE;
    this->PosJointNo = 0;
    this->PosOffsetZ = 0;
    this->PosOffsetY = 0;
    this->PosOffsetX = 0;
    this->VisibleOther = false;
    this->VisibleTarget = false;
    this->IsDemoStop = false;
    this->IsMainPlayerOnly = false;
    this->Roll = 0.00f;
    this->FOV = 0.00f;
    this->EndHokan = 0;
    this->HokanFrame = 0;
}


