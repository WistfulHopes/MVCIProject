#include "ManaComponentTexture.h"

UManaComponentTexture::UManaComponentTexture() {
    this->SizeX = 0;
    this->SizeY = 0;
    this->Format = PF_G8;
    this->ComponentType = Texture_Y;
    this->AddressX = TA_Wrap;
    this->AddressY = TA_Wrap;
}

