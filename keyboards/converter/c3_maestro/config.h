/*
Copyright 2021 RaoulDuke-Esq

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x4242
#define DEVICE_VER 0x0001
#define MANUFACTURER RaoulDuke-Esq
#define PRODUCT MACRO Macro Pad
#define DESCRIPTION USB converter to transform the C3 Maestro into the MACRO Macro Pad

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 16

#define SERIAL_UART_BAUD 9600
#define SERIAL_DRIVER SD1
#define SD1_RX_PIN B16
