#include "DuckModule.h"
#include "GimmickSoundParam.h"

FGimmickSoundParam::FGimmickSoundParam() {
    this->No = 0;
    this->UniqueID = 0;
    this->KillByDamage = false;
    this->IsAttnDisable = false;
    this->RefFacialSlot = false;
    this->RefLockTarget = false;
    this->IsExceptMain = false;
    this->IsExceptDouble = false;
    this->FollowTypeEnd = ECharacterAssetSoundFollowType::NON_FOLLOW;
    this->ControlValueEnd = 0.00f;
    this->CueIDEnd = 0;
    this->AISACTypeEnd = ECharacterAssetSoundAisacType::PAN;
    this->GroupIDEnd = ECharacterAssetSoundGroupID::DEFAULT;
    this->TypeEnd = ECharacterAssetSoundType::SYSTEM;
    this->OperationTypeEnd = ECharacterAssetSoundOpeType::PLAYCUE;
    this->FollowTypeStart = ECharacterAssetSoundFollowType::NON_FOLLOW;
    this->ControlValueStart = 0.00f;
    this->CueIDStart = 0;
    this->AISACTypeStart = ECharacterAssetSoundAisacType::PAN;
    this->GroupIDStart = ECharacterAssetSoundGroupID::DEFAULT;
    this->TypeStart = ECharacterAssetSoundType::SYSTEM;
    this->OperationTypeStart = ECharacterAssetSoundOpeType::PLAYCUE;
    this->BoneID = 0;
    this->ReferGimmicVfxID = 0;
}


