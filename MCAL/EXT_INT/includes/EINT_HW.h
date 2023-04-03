/*
 * EINT_HW.h
 *
* Created: 3/20/2023 8:17:45 PM
*  Author: sabry
 */ 


#ifndef EINT_HW_H_
#define EINT_HW_H_

#include "STD_Types.h"

#define GICR_Reg (*(volatile Uint8 *)0x5B)
#define GIFR_Reg (*(volatile Uint8 *)0x5A)
#define MCUCR_Reg (*(volatile Uint8 *)0x55)
#define MCUCSR_Reg (*(volatile Uint8 *)0x54)

#endif /* EINT_HW_H_ */