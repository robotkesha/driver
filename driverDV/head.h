/*
 * head.h
 *
 * Created: 03.02.2021 23:18:50
 *  Author: akatsnelson
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdbool.h>

#ifndef HEAD_H_
#define HEAD_H_

void initMotors(void);
void setMotor1(int mode, int a);
void setMotor2(int mode, int a);
void setMotor3(int mode, int a);
void setMotor4(int mode, int a);

void initTWI(void);

#endif /* HEAD_H_ */