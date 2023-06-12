#include "DuckModule.h"
#include "DuckCharaDefaultMotionAsset.h"

UDuckCharaDefaultMotionAsset::UDuckCharaDefaultMotionAsset() {
    this->Condition = EBlendingCondition::ALWAYS;
    this->motion_id = 0;
    this->motion_speed = 0.00f;
}


