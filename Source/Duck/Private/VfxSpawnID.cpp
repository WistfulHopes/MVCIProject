#include "DuckModule.h"
#include "VfxSpawnID.h"

FVfxSpawnID::FVfxSpawnID() {
    this->ParamIndex = 0;
    this->UniqueID = 0;
    this->PlayerID = 0;
    this->shotID = 0;
    this->Category = 0;
    this->isIgnoreWorld = false;
    this->isAffectHitStop = false;
    this->isDemoCamera = false;
    this->isIgnoreSystemStop = false;
}


