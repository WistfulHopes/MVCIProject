#include "DuckModule.h"
#include "MissionParamStage.h"

FMissionParamStage::FMissionParamStage() {
    this->TouchDisable = false;
    this->EndDelayTime = 0;
    this->CameraInitX = 0;
    this->PlayerInitX = 0;
    this->EnemyInitX = 0;
    this->PositionType = EMissionPositionType::NONE;
    this->TitleUI = 0;
}


