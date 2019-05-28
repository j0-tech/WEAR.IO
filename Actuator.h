#ifndef J0_TECH_ACTUATOR_H
#define J0_TECH_ACTUATOR_H

#include <PID_v1.h>
#include <Servo.h>
#include "Arduino.h"

class Actuator {
public:
    void write(uint16_t signal);
    void seek();
    void seek(double target);
    void setTunings(double kP, double kI, double kD);
    void setOutputInverted(bool inverted);
protected:
    Actuator(uint8_t pwmPin);
    Actuator(uint8_t pwmPin, double kP, double kI, double kD);
    virtual void readSensor() = 0;
    
    double setpoint;
    double input;
    double output;
    PID pid;
    Servo pwm;
};

#endif