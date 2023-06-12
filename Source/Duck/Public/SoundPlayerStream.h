#pragma once
#include "DuckModule.h"
#include "SoundPlayerEx.h"
#include "SoundPlayerStream.generated.h"

UCLASS(Blueprintable)
class DUCK_API USoundPlayerStream : public USoundPlayerEx {
    GENERATED_BODY()
public:
    USoundPlayerStream();
    UFUNCTION(BlueprintCallable)
    int32 PrepareStream(int32 SheetId, int32 CueID, bool FlgAutoPlay, int32 StartTime);
    
    UFUNCTION(BlueprintCallable)
    bool PlayStream(int32 PlayDataId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndPrepareStream(int32 PlayDataId) const;
    
};

