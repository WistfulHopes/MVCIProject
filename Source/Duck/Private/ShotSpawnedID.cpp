#include "DuckModule.h"
#include "ShotSpawnedID.h"

FShotSpawnedID::FShotSpawnedID() {
    this->ParamIndex = 0;
    this->UniqueID = 0;
    this->ShotType = 0;
    this->shotKind = 0;
    this->shotProperty = 0;
    this->isHitToPlayer = false;
    this->isRecieved = false;
    this->isDoubleAction = false;
    this->IsMirrorMove = false;
    this->DelayFrame = 0;
    this->spawnFlags = 0;
}


