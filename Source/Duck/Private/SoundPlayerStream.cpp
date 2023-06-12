#include "DuckModule.h"
#include "SoundPlayerStream.h"

int32 USoundPlayerStream::PrepareStream(int32 SheetId, int32 CueID, bool FlgAutoPlay, int32 StartTime) {
    return 0;
}

bool USoundPlayerStream::PlayStream(int32 PlayDataId) {
    return false;
}

bool USoundPlayerStream::IsEndPrepareStream(int32 PlayDataId) const {
    return false;
}

USoundPlayerStream::USoundPlayerStream() {
}


