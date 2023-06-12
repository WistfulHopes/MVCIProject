#include "DuckModule.h"
#include "StoryBattleCtrlBase.h"

bool AStoryBattleCtrlBase::SetCharaAction(int32 PlWorkNo, int32 ActionNo, float& OutActionFrame) {
    return false;
}

bool AStoryBattleCtrlBase::IsCharaActionEnd(int32 PlWorkNo) const {
    return false;
}

int32 AStoryBattleCtrlBase::GetCharaActionNo(int32 PlWorkNo) const {
    return 0;
}

AStoryBattleCtrlBase::AStoryBattleCtrlBase() {
}


