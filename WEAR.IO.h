/*
WEAR.IO header.

This software is meant for the WEAR.IO wearable RIO.
https://github.com/j0-tech/WEAR.IO/

This software is licensed under the j0 tech open source license:
https://github.com/j0-tech/license/blob/master/README.md

Copyright (c) 2019 j0 tech
*/

#ifndef J0_TECH_WEAR_IO_H
#define J0_TECH_WEAR_IO_H

#include "Arduino.h"

#define PWM0 3
#define PWM1 5
#define PWM2 6
#define PWM3 9
#define NUMPWM 4

#define DIO0 2
#define DIO1 4
#define DIO2 7
#define DIO3 8
#define NUMDIO 4

#define AIO0 A0
#define AIO1 A1
#define AIO2 A2
#define AIO3 A3
#define NUMAIO 4

#define ENCODER0A 10
#define ENCODER0B 11
#define ENCODER1A 12
#define ENCODER1B 13
#define NUMENCODER 2

#define ISPWM(x) x == PWM0 || x == PWM1 || x == PWM2 || x == PWM3
#define ISDIO(x) x == DIO0 || x == DIO1 || x == DIO2 || x == DIO3
#define ISAIO(x) x == AIO0 || x == AIO1 || x == AIO2 || x == AIO3

//bool J0_TECH_WEARIO_ISR_REGISTERED;

#endif