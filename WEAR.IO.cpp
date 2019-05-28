/*
WEAR.IO source. For now, this is empty. In the future, however,
any special behaviour for the WEAR.IO will be implemented here.

This software is meant for the WEAR.IO wearable RIO.
https://github.com/j0-tech/WEAR.IO/

This software is licensed under the j0 tech open source license:
https://github.com/j0-tech/license/blob/master/README.md

Copyright (c) 2019 j0 tech
*/

#include "WEAR.IO.h"

/*void J0_TECH_WEARIO_REGISTER_ISR() {
    #ifdef WEARIO_USE_ISR
    if (!J0_TECH_WEARIO_ISR_REGISTERED) {
        cli();
        TCCR0A = TCCR0B = TCNT = 0;
        OCR0A = 77;
        TCCR0B |= (1 << WGM01);
        TCCR0B |= (1 << CS02) | (0 << CS01) | (1 << CS00);
        TIMSK0 |= (1 << OCIE0A);
        sei();
        J0_TECH_WEARIO_ISR_REGISTERED = true;
    }
    #endif
}

ISR(TIMER0_COMPA_vect) {
    
}*/