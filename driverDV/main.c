/*
 * driverDV.c
 *
 * Created: 15.01.2021 2:22:02
 * Author : akatsnelson
 */ 

#include <avr/io.h>
#include "head.h"

int main(void)
{
	DDRB =   0xff;
	DDRD =   0xff;
    
	sei();
	initMotors();
	initTWI();
    setMotor1(0, 255);
    setMotor2(0, 255);
	setMotor3(0, 255);
	setMotor4(0, 255); 
}

