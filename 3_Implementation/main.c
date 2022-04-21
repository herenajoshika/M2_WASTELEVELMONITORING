/**
 * @file main.c
 * @author HERENA JOSHIKA A S
 * @brief main program executing the trash level monitoring system
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#ifndef __AVR_ATmega328P__
   #define __AVR_ATmega328P__  
#endif

#define BAUD_RATE_230400_BPS  2 // 230.4kps'

#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"
#include "trash.h"
#include <avr/interrupt.h>
#include <stdlib.h>


static volatile int pulse = 0; //It is used to store the count value from the TCNT register
static volatile int i = 0; //It is used as a flag to indicate the current status of the Echo pin
int lightindicator(void);
int voiceindicator(void);

int main(void)
{
    unsigned int ubrr = BAUD_RATE_230400_BPS; // Setting baud rate for USART
        /* Set Baudrate  */
    UBRR0H = (ubrr>>8);
    UBRR0L = (ubrr);
 
    UCSR0C = 0x06;       /* Set frame format: 8data, 1stop bit  */
    UCSR0B = (1<<TXEN0); /* Enable  transmitter                 */


  DDRB = 0xFF; //setting port B as output
  DDRD |= 1 << PIND3; //setting port D PIN3 as output
  DDRD |= 1 << PIND4; //setting port D PIN4 as output
  int16_t count_a = 0; 
  char show_a[16];
  Initialise();
  DDRD = 0b11111011; //Setting Echo pin as input
  _delay_ms(50);

  Initialise();

  EICRA |= 1<<ISC00; //setting external interrupt
  EIMSK |= 1<<INT0; // enabling external interrupt masking

  sei(); // enabling global interrupt
 
  while(1)
  { 
    PORTD |= 1<<PIND0; //sending signal from trigpin
    _delay_us(15);

    PORTD &= ~(1<<PIND0); //stopping signal from trigpin
    count_a = pulse/58; // calculation of distance

    if(count_a < 6)
    {
      Send_A_String("Dustbin is full");
      voiceindicator();
      lightindicator();
    }
    Send_A_String("Distance Sensor");
    GoToMrLCDLocation(1,2);
    Send_A_String("Distance=");
    itoa(count_a,show_a,10); // turning integer to string to display in LCD 
    Send_A_String(show_a);
    Send_A_String(" ");
    GoToMrLCDLocation(13,2);
    Send_A_String("cm");
    GoToMrLCDLocation(1,1);
    int data = count_a;
          while (!( UCSR0A & (1<<UDRE0))); /* Wait for empty transmit buffer*/
            UDR0 = data; // showing data in USART Serial monitor
  }
}

ISR(INT0_vect)
{
  if(i == 0)
  {
    TCCR1B |= 1<<CS10; // timer starts counting
    i = 1; //checks if echo pin is high and set to 1
  }
  else
  {
    TCCR1B = 0; // timer stopped as echo pin becomes low
    pulse = TCNT1; // count is placed in pulse
    TCNT1 = 0; // count is set 0
    i = 0; // echo pin status is made low
  }
}

