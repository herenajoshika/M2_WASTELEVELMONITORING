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


static volatile int pulse = 0;
static volatile int i = 0;
int lightindicator(void);
int voiceindicator(void);

int main(void)
{
    unsigned int ubrr = BAUD_RATE_230400_BPS;
        /* Set Baudrate  */
    UBRR0H = (ubrr>>8);
    UBRR0L = (ubrr);
 
    UCSR0C = 0x06;       /* Set frame format: 8data, 1stop bit  */
    UCSR0B = (1<<TXEN0); /* Enable  transmitter                 */


  DDRB = 0xFF;
  DDRD |= 1 << PIND3;
  DDRD |= 1 << PIND4; 
  int16_t count_a = 0; 
  char show_a[16];
  Initialise();
  DDRD = 0b11111011;
  _delay_ms(50);

  Initialise();

  EICRA |= 1<<ISC00;
  EIMSK |= 1<<INT0;

  sei();
 
  while(1)
  { 
    PORTD |= 1<<PIND0;
    _delay_us(15);

    PORTD &= ~(1<<PIND0);
    count_a = pulse/58;

    if(count_a < 6)
    {
      Send_A_String("Dustbin is full");
      voiceindicator();
        lightindicator();
    }
    Send_A_String("Distance Sensor");
    GoToMrLCDLocation(1,2);
    Send_A_String("Distance=");
    itoa(count_a,show_a,10);
    Send_A_String(show_a);
    Send_A_String(" ");
    GoToMrLCDLocation(13,2);
    Send_A_String("cm");
    GoToMrLCDLocation(1,1);
    int data = count_a;
          while (!( UCSR0A & (1<<UDRE0))); /* Wait for empty transmit buffer*/
            UDR0 = data;
  }
}

ISR(INT0_vect)
{
  if(i == 0)
  {
    TCCR1B |= 1<<CS10;
    i = 1;
  }
  else
  {
    TCCR1B = 0;
    pulse = TCNT1;
    TCNT1 = 0;
    i = 0;
  }
}



/*
#ifndef __AVR_ATmega328P__
   #define __AVR_ATmega328P__  
#endif


#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"
#include <avr/interrupt.h>
#include <stdlib.h>

static volatile int pulse = 0;
static volatile int i = 0;

int main(void)
{
  DDRB = 0xFF;
  DDRD |= 1 << PIND3;
  DDRD |= 1 << PIND4; 
  int16_t count_a = 0; 
  char show_a[16];
  Initialise();
  DDRD = 0b11111011;
  _delay_ms(50);

  Initialise();

  EICRA |= 1<<ISC00;
  EIMSK |= 1<<INT0;

  sei();
 
  while(1)
  { 
    PORTD |= 1<<PIND0;
    _delay_us(15);

    PORTD &= ~(1<<PIND0);
    count_a = pulse/58;

    if(count_a < 6)
    {
        Send_A_String("Dustbin is full");
        PORTD ^= 1<<PIND3; // toggle the output
        PORTD ^= 1<<PIND4;
    }
    Send_A_String("Distance Sensor");
    GoToMrLCDLocation(1,2);
    Send_A_String("Distance=");
    itoa(count_a,show_a,10);
    Send_A_String(show_a);
    Send_A_String(" ");
    GoToMrLCDLocation(13,2);
    Send_A_String("cm");
    GoToMrLCDLocation(1,1);
  }
}

ISR(INT0_vect)
{
  if(i == 0)
  {
    TCCR1B |= 1<<CS10;
    i = 1;
  }
  else
  {
    TCCR1B = 0;
    pulse = TCNT1;
    TCNT1 = 0;
    i = 0;
  }
}*/






