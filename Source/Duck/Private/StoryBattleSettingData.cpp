#include "DuckModule.h"
#include "StoryBattleSettingData.h"

FStoryBattleSettingData::FStoryBattleSettingData() {
    this->EnemyInitX = 0;
    this->PlayerInitX = 0;
    this->CameraInitX = 0;
    this->WinnerDemo = 0;
    this->AppearDemo = 0;
    this->Difficulty = 0;
    this->Time = 0;
    this->ExclusiveRule = EStoryExclusivRule::NONE;
    this->stageNo = 0;
}


