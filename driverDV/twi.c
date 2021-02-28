/*
 * twi.c
 *
 * Created: 20.02.2021 16:22:07
 *  Author: akatsnelson
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

void initTWI(){
	TWAR0 = 0xA*2+0;
	TWSR0 = 0;
	TWCR0 = 1<<TWEN | 1<<TWEA | 1<<TWINT | 1<<TWIE;
	DDRC = 0;
}
int len = 0;
int data[4];

ISR(TWI_vect) {
int TWS = TWSR0 & 0b11111000;
switch (TWS){
	case 0x80:
		data[len] = TWDR0;
		len++;
	break;
	
	case 0xA0:
		len = 0;
		for (int i = 0; i< 4; i++)
			if (data[i] % 2 == 1)
				data[i] = -(data[i]-1);
		setMotor1(data[0]);
		setMotor2(data[1]);
		setMotor3(data[2]);
		setMotor4(data[3]);
	break;
	
}
}



