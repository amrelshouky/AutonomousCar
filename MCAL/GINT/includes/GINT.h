/*
 * GINT.h
 *
 * Created: 3/20/2023 8:30:35 PM
 *  Author: sabry
 */ 


#ifndef GINT_H_
#define GINT_H_

#include "BitMath.h"
#include "GINT_HW.h"

#define GINT_I_Bit 7

void Enable_GINT_AllInterrupts(void);
void Disable_GINT_AllInterrupts(void);

#endif /* GINT_H_ */