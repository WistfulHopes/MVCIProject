#include "DuckModule.h"
#include "RollBackParameterGimmickInf.h"

FRollBackParameterGimmickInf::FRollBackParameterGimmickInf() {
    this->Key = 0;
    this->GimmickKind = ECharacterAssetGimmickKind::VFX;
    this->GimmickID = 0;
    this->DeadOperation = ECharacterAssetGimmickDeadOperation::OP_DELETE;
    this->shotID = 0;
    this->Slot = 0;
    this->isDoubleAction = false;
    this->KindFlags = 0;
    this->isCommonGimmick = false;
    this->isSpawnPersistentVision = false;
}


