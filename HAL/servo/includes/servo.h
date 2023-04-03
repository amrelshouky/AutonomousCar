/*
 * servo.h
 *
 * Created: 3/22/2023 9:17:49 AM
 *  Author: sabry
 */ 


#ifndef SERVO_H_
#define SERVO_H_
#include "DIO.h"
#include "TIMR1.h"

void servo_init(Uint16 prescaler);
void servo_angle(Uint16 angle , Uint8 prescaler , TIMR1_TYPES PWM_pin);

#endif /* SERVO_H_ */