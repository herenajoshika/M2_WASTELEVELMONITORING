#ifndef MrLCD
#define MrLCD
#ifndef __AVR_ATmega328P__
   #define __AVR_ATmega328P__  
#endif

#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>

#define MrLCDsCrib				PORTB
#define DataDir_MrLCDCrib		DDRB

#define MrLCDsControl			PORTC
#define DataDir_MrLCDsControl	DDRC

#define LightSwitch				0	//for the enable pin 
#define ReadWrite				1	//for R/W pin
#define BipolarMood				2	// for the Rs pin(Register Select)

char firstColumnPositionForMrLCD[2]={0,64};

void Initialise(void);
void Check_If_Mr_LCD_Is_Busy(void);
void Peek_A_Boo(void);
void Send_A_Command(unsigned char command);
void Send_A_Character(unsigned char character);
void Send_A_String(char *stringOfChar);
void GoToMrLCDLocation(uint8_t x, uint8_t y);



void Initialise(void)
{
DataDir_MrLCDsControl|=1<<LightSwitch|1<<ReadWrite|1<<BipolarMood;	//these information will go towards the LCD

_delay_ms(15);								// Wait for the LCD to start

Send_A_Command(0x01);	// to clear the screen
_delay_ms(2);
Send_A_Command(0x38);	// TO tell LCD about 8 data lines
_delay_us(50);
Send_A_Command(0b00001110);	//Some cursor command
_delay_us(50);

}

void Check_If_Mr_LCD_Is_Busy()
{
	DataDir_MrLCDCrib=0x00;					//Crib will take the input from the user
	
	
	MrLCDsControl|=1<<ReadWrite;			// Switch on the read mode
	MrLCDsControl&=~(1<<BipolarMood);			//activate the command mode
	
	while (MrLCDsCrib>=0x80)
	{
		Peek_A_Boo();
	}
	
	DataDir_MrLCDCrib=0xff;					// Put crib to display output
}

void Peek_A_Boo()
{
	MrLCDsControl|=1<<LightSwitch;			// Switch on the light 
	
	asm volatile("nop");					//wait for some time 
	asm volatile("nop");
	
	MrLCDsControl&=~(1<<LightSwitch);			// Switch off the light
}


void Send_A_Command(unsigned char command)
{
	
	Check_If_Mr_LCD_Is_Busy();
	
	MrLCDsCrib=command;						// Load the crib with the 8 bit command
	
	MrLCDsControl&=~(1<<ReadWrite);			// Set the LCD to write mode
	MrLCDsControl&=~(1<<BipolarMood);			// Set it to the command mode	
	Peek_A_Boo();
	MrLCDsCrib=0;							//Erase the crib after use
}
void Send_A_Character(unsigned char character)
{
	Check_If_Mr_LCD_Is_Busy();
	
	MrLCDsCrib=character;					// load the 8 bit characters on the data line
	
	MrLCDsControl&=~(1<<ReadWrite);			// Set to the write mode
	MrLCDsControl|=1<<BipolarMood;			// Set it to the character mode	
	
	Peek_A_Boo();
	MrLCDsCrib=0;							// Erase the crib after use
	
	
}

void Send_A_String(char *stringOfChar)
{
	while(*stringOfChar>0)
	{
		Send_A_Character(*stringOfChar++);
	}
}


void GoToMrLCDLocation(uint8_t x, uint8_t y)
{
	Send_A_Command(0x80+ firstColumnPositionForMrLCD[y-1] + (x-1));
}


#endif