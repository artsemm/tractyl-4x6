/*
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
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

/* Key matrix configuration. */
#define MATRIX_ROW_PINS \
    { GP5, GP6, GP7, GP8, GP9 }
#define MATRIX_COL_PINS \
    { GP10, GP11, GP12, GP13, GP14, GP15 }

/* Handedness. */
#define MASTER_RIGHT
// Pointing device is on the right split.
#define POINTING_DEVICE_RIGHT

// To use the handedness pin, resistors need to be installed on the adapter PCB.
// If so, uncomment the following code, and undefine MASTER_RIGHT above.
// #define SPLIT_HAND_PIN GP15
// #define SPLIT_HAND_PIN_LOW_IS_LEFT  // High -> right, Low -> left.

/* RGB settings. */
// #define RGB_DI_PIN GP1
// #define RGB_MATRIX_LED_COUNT 62
// #define RGB_MATRIX_SPLIT { 32, 30 }

/* SPI & PMW3360 settings. */
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP18
#define SPI_MISO_PIN GP16
#define SPI_MOSI_PIN GP19
#define POINTING_DEVICE_CS_PIN GP17
#define PMW33XX_LIFTOFF_DISTANCE 0x03
#define POINTING_DEVICE_INVERT_Y
// #define PMW3360_CPI 100 // maybe in other locations

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_TASK_THROTTLE_MS 1

#define SPLIT_TRANSACTION_IDS_KB RPC_ID_KB_CONFIG_SYNC

#define ONESHOT_TIMEOUT 5000

// #define COMBO_COUNT 1

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
