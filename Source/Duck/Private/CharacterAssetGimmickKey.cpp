#include "DuckModule.h"
#include "CharacterAssetGimmickKey.h"

FCharacterAssetGimmickKey::FCharacterAssetGimmickKey() {
    this->IgnoreSpawn = false;
    this->DeadOperation = ECharacterAssetGimmickDeadOperation::OP_DELETE;
    this->GimmickIDMirror = 0;
    this->GimmickID = 0;
    this->GimmickKind = ECharacterAssetGimmickKind::VFX;
}


