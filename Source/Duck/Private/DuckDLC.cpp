#include "DuckModule.h"
#include "DuckDLC.h"

int32 UDuckDLC::GetTitleUpdateVersion() const {
    return 0;
}

UDuckDLC* UDuckDLC::GetInstance() {
    return NULL;
}

void UDuckDLC::execDLCChack() {
}

bool UDuckDLC::completeDLCChack() {
    return false;
}

UDuckDLC::UDuckDLC() {
}


