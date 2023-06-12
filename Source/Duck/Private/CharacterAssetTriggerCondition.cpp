#include "DuckModule.h"
#include "CharacterAssetTriggerCondition.h"

FCharacterAssetTriggerCondition::FCharacterAssetTriggerCondition() {
    this->UParamValue = 0;
    this->UParamCond = ECharacterAssetCompCond::EQ;
    this->UParamType = ECharacterAssetUParamType::NONE;
    this->ShotCategoryFlag = 0;
    this->GemKind = 0;
    this->EffectLimit = 0;
    this->MultiJumpLimit = 0;
    this->JumpCommandLimit = 0;
    this->VitalRatioCondition = ECharacterAssetTriggerCondType::NONE;
    this->VitalRatio = 0;
    this->RangeConditionType = ECharacterAssetRangeCond::NONE;
    this->RangeFix = 0;
    this->SelectFightStyle = 0;
}


