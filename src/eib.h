/*
 *  eib.h - Include the EIB / BCU related header files.
 *
 *  Copyright (c) 2014 Stefan Taferner <stefan.taferner@gmx.at>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 3 as
 *  published by the Free Software Foundation.
 */
#ifndef sblib_eib_h
#define sblib_eib_h

#define APP_TO_BOOTLOADER_FLAG_ADDR (SRAM_BASE+SRAM_SIZE_MAX-4)

#include "eib/bcu.h"
#include "eib/bus.h"

#endif /*sblib_eib_h*/
