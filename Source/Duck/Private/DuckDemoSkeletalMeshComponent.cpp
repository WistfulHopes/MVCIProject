#include "DuckModule.h"
#include "DuckDemoSkeletalMeshComponent.h"

UDuckDemoSkeletalMeshComponent::UDuckDemoSkeletalMeshComponent() {
    this->bDuckVisible = true;
    this->bDuckCollisionEnable = true;
    this->bDuckUpdateCollisionStateInvisible = false;
    this->bDuckCollideWithEnvironment = true;
    this->DuckPhysicsBlendWeight = 0.00f;
    this->DuckClothBlendWeight = 1.00f;
    this->MatCtrlEnable_01 = false;
    this->MatCtrlElmNo_01 = 0.00f;
    this->MatCtrlUVType01 = EMatCtrlUVType::GENERAL_EYE;
    this->MatCtrlEnable_02 = false;
    this->MatCtrlElmNo_02 = 0.00f;
    this->MatCtrlUVType02 = EMatCtrlUVType::GENERAL_EYE;
    this->MatCtrlEnable_03 = false;
    this->MatCtrlElmNo_03 = 0.00f;
    this->MatCtrlUVType03 = EMatCtrlUVType::GENERAL_EYE;
}


