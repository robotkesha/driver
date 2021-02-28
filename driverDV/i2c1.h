/*
 * i2c1.h
 *
 * Created: 22.02.2021 21:23:49
 *  Author: akatsnelson
 */ 


#ifndef I2C1_H_
#define I2C1_H_

#include <avr/interrupt.h>
#include <stdint.h>

void I2C_init(uint8_t address);
void I2C_stop(void);
void I2C_setCallbacks(void (*recv)(uint8_t), void (*req)());

inline void __attribute__((always_inline)) I2C_transmitByte(uint8_t data)
{
	TWDR = data;
}

ISR(TWI_vect);



#endif /* I2C1_H_ */