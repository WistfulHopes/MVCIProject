#pragma once
#include "Engine.h"
#include "EEngineIniFileType.generated.h"

UENUM(BlueprintType)
namespace EEngineIniFileType {
    enum Type {
        EngBaseEngineIni,
        EngWindowsEngineIni,
        EngPS4EngineIni,
        EngXboxOneEngineIni,
        ProjDefaultEngineIni,
        ProjWindowsEngineIni,
        ProjPS4EngineIni,
        ProjXboxOneEngineIni,
    };
}

