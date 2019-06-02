/*
 * LCD_Driver.c
 *
 * Created: 10/18/2018 1:40:39 PM
 * Author : braso
 */ 

#ifndef F_CPU
#define F_CPU 7372800UL 
#endif


#include "lcd_defines.h"
//LCD initialization 


#include <avr/io.h>
#include <util/delay.h>


int main(void)
{	
	
	liquidCrystalPortInit(&PORTA,&PORTC,PORTC0,PORTC1,PORTC2);
	//lcd_clear();
	
	lcd_goToLine(1,1);
	lcd_displayChar("Linia 1");
	
	lcd_goToLine(2,1);
	lcd_displayChar("Linia 2");
	
	lcd_goToLine(3,1);
	lcd_displayChar("Linia 3");
	
	lcd_goToLine(4,1);
	lcd_displayChar("Linia 4");

	do 
	{
	} while (1);
}

