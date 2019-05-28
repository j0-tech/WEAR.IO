#ifndef J0_TECH_BUTTON_H
#define J0_TECH_BUTTON_H

#include "Arduino.h"
#include "WEAR.IO.h"

class Button {
public:
    Button(uint8_t dioPin);
    
    bool read();
    bool wasPressed();
    bool wasReleased();
private:
    bool last;
    uint8_t pin;
};

#endif