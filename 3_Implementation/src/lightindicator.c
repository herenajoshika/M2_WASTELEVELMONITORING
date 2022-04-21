/**
 * @file lightindicator.c
 * @author HERENA JOSHIKA A S
 * @brief Program to lit the LED when trash level goes below 6
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#ifndef __AVR_ATmega328P__
   #define __AVR_ATmega328P__  
#endif

#include <avr/io.h>
#include "trash.h"
#include <avr/interrupt.h>
#include <stdlib.h>

/**
 * @brief gives output as high when trash level goes below 6 with light
 * 
 * @return 3
 */

int lightindicator(void)
{
    PORTD ^= 1<<PIND3; // PORTD PIN3 SHOWS OUTPUT AS 1
    return 3;
}