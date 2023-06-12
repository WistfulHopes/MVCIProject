#include "DuckModule.h"
#include "CollectionChara.h"

UCollectionChara::UCollectionChara() {
    this->Override = -1;
    this->IsStoryClear = false;
    this->IsDLC = false;
    this->CharaTexture = NULL;
    this->CharaMesh = NULL;
    this->charaID = -1;
    this->PosX = 0.00f;
    this->PosY = 0.00f;
    this->PosZ = 0.00f;
    this->ModelViewPosX = 0.00f;
    this->ModelViewPosY = 0.00f;
    this->ModelViewPosZ = 0.00f;
    this->RotX = 0.00f;
    this->RotY = 0.00f;
    this->RotZ = 0.00f;
    this->Scale = 1.00f;
    this->StageOffset = 0.00f;
    this->StageScale = 1.00f;
}


