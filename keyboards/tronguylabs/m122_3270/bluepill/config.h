/* Copyright 2021 James R. Maynard III <jaymaynard@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// place overrides below

// Blackpill pin assignments: reversed the rows from the Teensy version for easier PCB layout
// DO NOT USE the following pins: A9 (has pulldown on it), A11/A12 (USB lines), B2 (external pulldown)
// C13 has an LED, and C13/C14/C15 are best used as inputs (with DIODE_DIRECTION set to ROW2COL, the
// rows are inputs). Note that every usable I/O pin is used.
#define MATRIX_COL_PINS { B1, B10, B11, B12, B13, B14, B15, A8, B0, A10, A7, A6, A15, B3, B4, B5, B6, B7, B8, B9 }
#define MATRIX_ROW_PINS { C13, C14, C15, A1, A2, A3, A4, A5 }

// The BluePill version is version 3
#define DEVICE_VER      0x0003
