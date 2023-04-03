/*
 * DIO_CFG.h
 *
* Created: 3/20/2023 8:18:5 PM
 *  Author: sabry
 */ 


#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#include "DIO.h"

typedef struct  
{
	DIO_DirTypes PinDir;
	STD_LevelTypes Level;
}DIO_PinCfg;

#define PINCOUNT 32

void DIO_Init(void);

#endif /* DIO_CFG_H_ */