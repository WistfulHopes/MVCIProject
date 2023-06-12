#pragma once
#include "DuckModule.h"
#include "SoundPlayerEx.h"
#include "SoundPlayerOnMemory.generated.h"

UCLASS(Blueprintable)
class DUCK_API USoundPlayerOnMemory : public USoundPlayerEx {
    GENERATED_BODY()
public:
    USoundPlayerOnMemory();
};

