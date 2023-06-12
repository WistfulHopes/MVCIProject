#include "DuckModule.h"
#include "PartsVisible.h"

FPartsVisible::FPartsVisible() {
    this->IsVisible = false;
    this->isSameParentBone = false;
    this->isReverseNullRotate = false;
    this->MatColorUpdateType = EPartsAssetMatUpdateType::ALL_UPDATE;
    this->mesh = NULL;
    this->mirror_index = 0;
    this->mirror_bone_setting = NULL;
    this->physics_bone_setting = NULL;
    this->override_material = NULL;
}


