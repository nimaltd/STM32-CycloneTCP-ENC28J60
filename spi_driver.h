/**
 * @file spi.h
 * @brief SPI driver
 *
 * @section License
 *
 * Copyright (C) 2010-2015 Oryx Embedded SARL. All rights reserved.
 *
 * This file is part of CycloneTCP Open.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * @author Oryx Embedded SARL (www.oryx-embedded.com)
 * @version 1.6.5
 **/

#ifndef _SPI_DRIVER_H
#define _SPI_DRIVER_H

//SPI driver
extern const SpiDriver spiDriver;

//SPI related functions
error_t spiInit(void);
error_t spiSetMode(uint_t mode);
error_t spiSetBitrate(uint_t bitrate);
void spiAssertCs(void);
void spiDeassertCs(void);
uint8_t spiTransfer(uint8_t data);

#endif
