#include "DuckAnalyticsModule.h"
#include "DuckKPIData.h"

void UDuckKPIData::UpdatePlayTimer() {
}

FTimespan UDuckKPIData::GetNowPlayTotalTime() const {
    return FTimespan{};
}

UDuckKPIData::UDuckKPIData() {
    this->SaveDataVersion = 0;
    this->Mode.AddDefaulted(17);
    this->story.AddDefaulted(5);
    this->CharaUsage.AddDefaulted(47);
    this->Arcade.AddDefaulted(5);
    this->Training.AddDefaulted(47);
    this->ItemAcquirement.AddDefaulted(47);
    this->TrainingPlayerType0 = 0;
    this->TrainingPlayerType1 = 0;
    this->MatchIDHash[0] = 0;
    this->MatchIDHash[1] = 0;
    this->MatchIDHash[2] = 0;
    this->MatchIDHash[3] = 0;
    this->MatchIDHash[4] = 0;
    this->MatchIDHash[5] = 0;
    this->MatchIDHash[6] = 0;
    this->MatchIDHash[7] = 0;
    this->MatchIDHash[8] = 0;
    this->MatchIDHash[9] = 0;
    this->MatchIDHash[10] = 0;
    this->MatchIDHash[11] = 0;
    this->MatchIDHash[12] = 0;
    this->MatchIDHash[13] = 0;
    this->MatchIDHash[14] = 0;
    this->MatchIDHash[15] = 0;
    this->MatchIDHash[16] = 0;
    this->MatchIDHash[17] = 0;
    this->MatchIDHash[18] = 0;
    this->MatchIDHash[19] = 0;
    this->Ping = 0;
}

