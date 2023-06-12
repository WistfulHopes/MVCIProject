#include "DuckModule.h"
#include "SaveBattleRecord.h"

FSaveBattleRecord::FSaveBattleRecord() {
    this->BattlePoint = 0;
    this->Victory = 0;
    this->Defeat = 0;
    this->Draw = 0;
    this->WinStreak = 0;
    this->MaxWinStreak = 0;
    this->Lv1HCFinish = 0;
    this->Lv3HCFinish = 0;
    this->PerfectFinish = 0;
    this->CheapFinish = 0;
    this->JudgmentFinish = 0;
    this->BattleTime = 0;
    this->FirstAttack = 0;
    this->AerialRave = 0;
    this->autoCombo = 0;
    this->CounterHit = 0;
    this->Guard = 0;
    this->AdvancingGuard = 0;
    this->InfinitySurge = 0;
    this->InfinityStorm = 0;
    this->AShift = 0;
    this->AShiftCombo = 0;
    this->UseHCGauge = 0;
    this->MaxComboCnt = 0;
    this->Throw = 0;
    this->InfinityFinish = 0;
    this->VS2PPlayCnt = 0;
}


