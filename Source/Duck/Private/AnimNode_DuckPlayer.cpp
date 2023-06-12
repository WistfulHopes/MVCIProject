#include "DuckModule.h"
#include "AnimNode_DuckPlayer.h"

FAnimNode_DuckPlayer::FAnimNode_DuckPlayer() {
    this->Sequence = NULL;
    this->InternalTimeAccumulator = 0.00f;
    this->ExplicitTime = 0.00f;
    this->bLoopAnimation = false;
    this->PlayRate = 0.00f;
    this->Type = 0;
    this->GroupIndex = 0;
    this->GroupRole = EAnimGroupRole::CanBeLeader;
    this->lastSequence = NULL;
}


