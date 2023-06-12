#include "DuckModule.h"
#include "FlowCharaSelect.h"

int32 AFlowCharaSelect::RequestLoadCharaSelectAssets(int32 teamNo, int32 PartnerNo, int32 CharaNo, EDuckLoadPrio Prio) {
    return 0;
}

bool AFlowCharaSelect::IsLoadEndVersusAssets(int32 teamNo, int32 PartnerNo) {
    return false;
}

bool AFlowCharaSelect::IsLoadEndCharaSelectAssets(int32 teamNo, int32 PartnerNo) {
    return false;
}

bool AFlowCharaSelect::IsLoadEndAllVersusAssets() {
    return false;
}

bool AFlowCharaSelect::IsLoadEndAllCharaSelectAssets() {
    return false;
}

AFlowCharaSelect::AFlowCharaSelect() {
}


