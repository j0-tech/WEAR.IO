#include "AbsoluteActuator.h"

AbsoluteActuator::AbsoluteActuator(uint8_t pwmPin, uint8_t aioPin) :
    Actuator(pwmPin),
    analogPin(aioPin) {
    pinMode(analogPin, INPUT);
}

AbsoluteActuator::AbsoluteActuator(uint8_t pwmPin, uint8_t aioPin, double kP, double kI, double kD) :
    Actuator(pwmPin, kP, kI, kD),
    analogPin(aioPin) {
    pinMode(analogPin, INPUT);
}

void AbsoluteActuator::readSensor() {
    Actuator::input = analogRead(analogPin);
}