// Copyright 2023 Gyozo Gaspar
//
// This file is part of Lottie layout. The Lottie layout is free
// software: you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation, either version 3 of the License, or (at your option)
// any later version.  The Lottie layout is distributed in the hope
// that it will be useful, but WITHOUT ANY WARRANTY; without even the
// implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
// PURPOSE. See the GNU General Public License for more details.  You
// should have received a copy of the GNU General Public License along
// with Lottie layout. If not, see <https://www.gnu.org/licenses/>.

#pragma once

// Already defined:
//   #define NO_DEBUG          // disable debugging
//   #define NO_PRINT          // disable printing/debugging using hid_listen
// Do not want to disable:
//   #define NO_ACTION_LAYER   // disable layers
//   #define NO_ACTION_ONESHOT // disable one-shot modifiers
//   #define NO_ACTION_TAPPING // disable tap dance and other tapping features, ex: cannot change layers

// The default Tap-Or-Hold Decision Mode(Ignore Interrupt) selects the
// hold action only if the dual-role key is held down longer than the
// tapping term. When typing fast the modifiers do not activate
// because of it, the typing speed must be lowered.
//
// The HOLD_ON_OTHER_KEY_PRESS mode activates modifiers when another
// key is pressed. When typing fast and rolling occurs between letters
// this unintentionally activates the modifiers.
//
// The PERMISSIVE_HOLD_PER_KEY mode is fast typing friendly. It does
// not activate modifiers when rolling, but still activates them when
// another key is pressed and released even within the tapping term.
// TEST #define PERMISSIVE_HOLD_PER_KEY
//
// Tapping term effects Oone Shot Mods also. OSM does not work with
// TAPPING_TERM=1
#define TAPPING_TERM 1000

// Holding and releasing a dual-function key without pressing another
// key will result in nothing happening. With retro tapping enabled,
// releasing the key without pressing another will send the original
// keycode even if it is outside the tapping term.
//
// Retro tapping types the key when you change your mind about
// which modifier to press. It happens more often than you would think.
//
// #define RETRO_TAPPING

// status indicators to show which keyboard layer is currently active
#define RGBLIGHT_LAYERS

// Based on qmk_firmware\keyboards\crkbd\keymaps\default

#define MASTER_LEFT

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #undef RGBLIGHT_EFFECT_RAINBOW_MOOD
    #undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #undef RGBLIGHT_EFFECT_SNAKE
    #undef RGBLIGHT_EFFECT_KNIGHT
    #undef RGBLIGHT_EFFECT_CHRISTMAS
    #undef RGBLIGHT_EFFECT_STATIC_GRADIENT
    #undef RGBLIGHT_EFFECT_RGB_TEST
    #undef RGBLIGHT_EFFECT_ALTERNATING
    #undef RGBLIGHT_EFFECT_TWINKLE
//    #define RGBLIGHT_LIMIT_VAL 120
//    #define RGBLIGHT_HUE_STEP 10
//    #define RGBLIGHT_SAT_STEP 17
//    #define RGBLIGHT_VAL_STEP 17
#endif
