#ifndef __AVR_ATmega328P__
   #define __AVR_ATmega328P__  
#endif

#include <avr/io.h>
#include "trash.h"
#include <avr/interrupt.h>
#include <stdlib.h>

int lightindicator(void)
{
    PORTD ^= 1<<PIND3;
    return 3;
}