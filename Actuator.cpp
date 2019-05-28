#include "Actuator.h"

Actuator::Actuator(uint8_t pwmPin) :
    Actuator(pwmPin, 0, 0, 0) {
    
}

Actuator::Actuator(uint8_t pwmPin, double kP, double kI, double kD) :
    pid(&input, &output, &setpoint, kP, kI, kD, DIRECT) {
    pwm.attach(pwmPin);
    pid.SetMode(AUTOMATIC);
    pid.SetOutputLimits(-1, 1);
}

void Actuator::write(uint16_t signal) {
    pwm.writeMicroseconds(signal);
}

void Actuator::seek() {
    readSensor();
    pid.Compute();
    write((uint16_t) constrain(1500 + 1000 * output, 500, 2500));
}

void Actuator::seek(double target) {
    setpoint = target;
    seek();
}

void Actuator::setTunings(double kP, double kI, double kD) {
    pid.SetTunings(kP, kI, kD);
}

void Actuator::setOutputInverted(bool inverted) {
    pid.SetControllerDirection((inverted) ? REVERSE : DIRECT);
}