#include "MemberInfo.h"

FMemberInfo::FMemberInfo() {
    this->IsValid = false;
    this->isSelf = false;
    this->IsHost = false;
    this->isPrivate = false;
    this->IsTalking = false;
    this->hasMic = false;
    this->isSpectateOnly = false;
    this->isInLobby = false;
    this->index = 0;
    this->BattlePoint = 0;
    this->CasualPoint = 0;
    this->MannerPoint = 0;
    this->Honor = 0;
    this->WinStreak = 0;
    this->QoS = 0;
    this->Rank = 0;
}

