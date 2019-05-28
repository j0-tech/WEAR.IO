#include "Button.h"

Button::Button(uint8_t dioPin) :
    pin(dioPin) {
    pinMode(pin, INPUT_PULLUP);
}

bool Button::read() {
    last = digitalRead(pin) == LOW;
    return last;
}

bool Button::wasPressed() {
    return !last && read();
}

bool Button::wasReleased() {
    return last && !read();
}