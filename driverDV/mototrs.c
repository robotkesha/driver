/*
 * mototrs.c
 *
 * Created: 17.02.2021 10:48:59
 *  Author: akatsnelson
 */ 
#include <avr/io.h>
//инит перед пид
void initMotors(){
	
	TCCR2B = 0b00000010;
	TCCR1B = 0b00001010;
	TCCR3B = 0b00001010;
	TCCR4B = 0b00001010;
	TCCR0B = 0b00000010;
	// для работы пида
	TCCR4A = 0b10000001;
	
}

void setMotor1(int mode, int a){
	
	if(mode == 0) {
		OCR2B = a;
		OCR2A = 0;
		TCCR2A = 0b00100011;
		} else if(mode == 1){
		OCR2A = a;
		OCR2B = 0;
		TCCR2A = 0b10000011;
		} else if(mode == -1){
		OCR2B = 255;
		OCR2A = 255;
		TCCR2A = 0b10100011;
	}
}

void setMotor2(int mode, int a){
	
	if(mode == 0) {
		OCR1B = a;
		OCR1A = 0;
		TCCR1A = 0b00100001;
		} else if(mode == 1){
		OCR1A = a;
		OCR1B = 0;
		TCCR1A = 0b10000001;
		}  else if(mode == -1){
		OCR1B = 255;
		OCR1A = 255;
		TCCR1A = 0b10100001;
	}
}

void setMotor3(int mode, int a){
	if(mode == 1) {
		OCR4B = a;
		OCR3B = a;
		OCR3A = 0;
		TCCR3A = 0b00100001;
		TCCR4A = 0b10100001;
		} else if(mode == 0){
		OCR3A = a;
		OCR4B = 0;
		OCR3B = 0;
		TCCR3A = 0b10000001;
		TCCR4A = 0b10000001;
		}  else if(mode == -1){
		OCR3B = 255;
		OCR4B = 255;
		OCR3A = 255;
		TCCR3A = 0b10100001;
		TCCR4A = 0b10100001;
	}
}

void setMotor4(int mode, int a){
	if(mode == 0){
		OCR0A = a;
		OCR0B = 0;
		TCCR0A = 0b10000011;
		} else if(mode == 1) {
		OCR0B = a;
		OCR0A = 0;
		TCCR0A = 0b00100011;
		} else if(mode == -1){
		OCR0B = 255;
		OCR0A = 255;
		TCCR0A = 0b10100011;
	}
}