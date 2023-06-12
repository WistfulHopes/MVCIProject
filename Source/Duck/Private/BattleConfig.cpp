#include "DuckModule.h"
#include "BattleConfig.h"

FBattleConfig::FBattleConfig() {
    this->GameMode = 0;
    this->HeroTeam = 0;
    this->MaxWinCount = 0;
    this->bEndlessRound = false;
    this->bEnableReset = false;
    this->bRoundReset = false;
    this->bBalanceAdjust = false;
    this->bTimeupJudge = false;
    this->TimerType = 0;
    this->DamageLevel = 0;
    this->DifficultyArcade[0] = 0;
    this->DifficultyArcade[1] = 0;
    this->DifficultyArcade[2] = 0;
    this->DifficultyArcade[3] = 0;
    this->DifficultyArcade[4] = 0;
    this->DifficultyArcade[5] = 0;
    this->InitLayout = 0;
    this->InitCenter = 0;
    this->bReverseSide = false;
    this->bNonGemMode = false;
    this->bNonAppear = false;
    this->bNonReady = false;
    this->ReadyType = 0;
    this->FightType = 0;
    this->FinishType = 0;
    this->bNonWinPose = false;
    this->bWinCalc = false;
}


