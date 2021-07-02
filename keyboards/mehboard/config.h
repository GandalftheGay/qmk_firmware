#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x594d // "YM"
#define PRODUCT_ID      0x4D96 // "M" + 96
#define DEVICE_VER      0x0001
#define MANUFACTURER    GtG
#define PRODUCT         Mehboard

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 23

/* key matrix pins */
#define MATRIX_ROW_PINS { 10, 14, 15, 16, 17, 18,}
#define MATRIX_COL_PINS { 61, 60, 59, 58, 57, 56, 55, 54, 51, 50, 49, 48, 47, 46, 45, 44, 42, 41, 40, 39, 38, 37, 32, }
//#define MATRIX_COL_PINS { PF0, PF1, PF2, PF3, PF4, PF5, PF6, PF7, PA0, PA1, PA2, PA3, PA4, PA5, PA6, PA7, PC7, PC6, PC5, PC4, PC3, PC2, PD7, }
//#define UNUSED_PINS

//COL2ROW or ROW2COL
#define DIODE_DIRECTION COL2ROW

//#define LED_NUM_LOCK_PIN E1
//#define LED_CAPS_LOCK_PIN C0
/*#define LED_SCROLL_LOCK_PIN B5*/
//#define LED_PIN_ON_STATE 0

/* number of backlight levels 
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_PIN B6
#define BACKLIGHT_LEVELS 5
#endif*/

/* Set location for BootMagic key
#define BOOTMAGIC_LITE_ROW 5
#define BOOTMAGIC_LITE_COLUMN 0*/

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/*
#ifdef RGB_DI_PIN
#define RGB_DI_PIN E2
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 18
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif
//Encoder Settings 
#define ENCODERS_PAD_A { B4 }
#define ENCODERS_PAD_B { B5 }
//Each PAD_A/B variable defines an array so multiple encoders can be defined, e.g.:
#define ENCODERS_PAD_A { encoder1a, encoder2a }
#define ENCODERS_PAD_B { encoder1b, encoder2b }
#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 4
//delay zwischen inputscans - für sauberen input
#define TAP_CODE_DELAY 10
Resolution can also be defined per-encoder, by instead defining:
#define ENCODER_RESOLUTIONS { 4, 2 }*/
#endif