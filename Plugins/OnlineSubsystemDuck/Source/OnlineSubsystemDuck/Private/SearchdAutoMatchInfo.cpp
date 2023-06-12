#include "SearchdAutoMatchInfo.h"

FSearchdAutoMatchInfo::FSearchdAutoMatchInfo() {
    this->MatchType = EAutoMatchType_UI::Off;
    this->QoS = EAutoMatch_QoS::AUTOMATCH_LEVEL1_QOS;
    this->SameRegion = false;
}

