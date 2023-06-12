#include "DuckModule.h"
#include "DuckDebugSystem.h"

UDuckDebugSystem* UDuckDebugSystem::GetInstance() {
    return NULL;
}

void UDuckDebugSystem::DuckPrintLowLevel(const FString& Msg) {
}

void UDuckDebugSystem::DuckPrint(UObject* WorldContextObject, const FString& inString, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration) {
}

UDuckDebugSystem::UDuckDebugSystem() {
}


