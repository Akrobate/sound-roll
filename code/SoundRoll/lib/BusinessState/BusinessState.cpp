#include "BusinessState.h"

BusinessState::BusinessState() {
    
}


void BusinessState::setVolume(unsigned int volume) {
    this->volume = volume;
}


unsigned int BusinessState::getVolume() {
    return this->volume;
}
