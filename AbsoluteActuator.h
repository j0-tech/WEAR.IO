#ifndef J0_TECH_ABSOLUTE_ACTUATOR_H
#define J0_TECH_ABSOLUTE_ACTUATOR_H

#include "Actuator.h"
#include "Arduino.h"

class AbsoluteActuator : public Actuator {
public:
    AbsoluteActuator(uint8_t pwmPin, uint8_t aioPin);
    AbsoluteActuator(uint8_t pwmPin, uint8_t aioPin, double kP, double kI, double kD);
protected:
    void readSensor();
private:
    uint8_t analogPin;
};

#endif