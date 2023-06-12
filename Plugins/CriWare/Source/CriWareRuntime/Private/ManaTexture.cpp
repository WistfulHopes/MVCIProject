#include "ManaTexture.h"

UManaTexture::UManaTexture() {
    this->bRenderToTexture = false;
    this->AddressX = TA_Wrap;
    this->AddressY = TA_Wrap;
    this->TargetGamma = 0.00f;
}

