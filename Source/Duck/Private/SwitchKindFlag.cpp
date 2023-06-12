#include "DuckModule.h"
#include "SwitchKindFlag.h"

FSwitchKindFlag::FSwitchKindFlag() {
    this->system_kind_flags = 0;
    this->visual_kind_flags = 0;
    this->operation_kind_flags = 0;
    this->operation_done_flags = 0;
    this->pose_kind_flags = 0;
    this->jump_kind_flags = 0;
    this->action_status = 0;
}


