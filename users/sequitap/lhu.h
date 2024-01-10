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

// Letters

#define LHU_A       KC_A
#define LHU_B       KC_B
#define LHU_C       KC_C
#define LHU_D       KC_D
#define LHU_E       KC_E
#define LHU_F       KC_F
#define LHU_G       KC_G
#define LHU_H       KC_H
#define LHU_I       KC_I
#define LHU_J       KC_J
#define LHU_K       KC_K
#define LHU_L       KC_L
#define LHU_M       KC_M
#define LHU_N       KC_N
#define LHU_O       KC_O
#define LHU_P       KC_P
#define LHU_Q       KC_Q
#define LHU_R       KC_R
#define LHU_S       KC_S
#define LHU_T       KC_T
#define LHU_U       KC_U
#define LHU_V       KC_V
#define LHU_W       KC_W
#define LHU_X       KC_X
#define LHU_Y       KC_Z
#define LHU_Z       KC_Y

//  Numbers

#define LHU_N0      KC_GRV
#define LHU_N1      KC_1
#define LHU_N2      KC_2
#define LHU_N3      KC_3
#define LHU_N4      KC_4
#define LHU_N5      KC_5
#define LHU_N6      KC_6
#define LHU_N7      KC_7
#define LHU_N8      KC_8
#define LHU_N9      KC_9

// Function Keys

#define LHU_F1      S(KC_F1)
#define LHU_F2      S(KC_F2)
#define LHU_F3      S(KC_F3)
#define LHU_F4      KC_F4
#define LHU_F5      KC_F5
#define LHU_F6      KC_F6
#define LHU_F7      KC_F7
#define LHU_F8      KC_F8
#define LHU_F9      KC_F9
#define LHU_F10     S(KC_F10)
#define LHU_F11     KC_F11
#define LHU_F12     KC_F12

// Hungarian accents

#define LHU_U_ACUTE     KC_RBRC
#define LHU_I_ACUTE     KC_NUBS
#define LHU_O_DACUTE    KC_LBRC
#define LHU_O_DIARESIS  KC_0
#define LHU_U_DACUTE    KC_BSLS
#define LHU_O_ACUTE     KC_EQL
#define LHU_E_ACUTE     KC_SCLN
#define LHU_A_ACUTE     KC_QUOT
#define LHU_U_DIARESIS  KC_MINS

// Punctuations

#define LHU_ENT     KC_ENT
#define LHU_ESC     KC_ESC
#define LHU_BSPC    KC_BSPC
#define LHU_TAB     KC_TAB
#define LHU_SPACE   KC_SPC
#define LHU_MINUS   KC_SLSH
#define LHU_EQUAL   S(KC_7)
#define LHU_LBKT    ALGR(KC_F)
#define LHU_RBKT    ALGR(KC_G)
#define LHU_BSLH    ALGR(KC_Q)
#define LHU_SEMI    ALGR(KC_COMMA)
#define LHU_SQT     S(KC_1)
#define LHU_GRAVE   ALGR(KC_7)
#define LHU_COMMA   KC_COMM
#define LHU_DOT     KC_DOT
#define LHU_FSLH    S(KC_6)

// Symbols which are shifted on an english keyboard

#define LHU_TILDE   ALGR(KC_1)
#define LHU_EXCL    S(KC_4)
#define LHU_AT      ALGR(KC_V)
#define LHU_HASH    ALGR(KC_X)
#define LHU_DLLR    ALGR(KC_SCLN)
#define LHU_PRCNT   S(KC_5)
#define LHU_CARET   ALGR(KC_3)
#define LHU_AMPS    ALGR(KC_C)
#define LHU_STAR    ALGR(KC_SLSH)
#define LHU_LPAR    S(KC_8)
#define LHU_RPAR    S(KC_9)
#define LHU_UNDER   S(KC_SLSH)
#define LHU_PLUS    S(KC_3)
#define LHU_LBRC    ALGR(KC_B)
#define LHU_RBRC    ALGR(KC_N)
#define LHU_PIPE    ALGR(KC_W)
#define LHU_COLON   S(KC_DOT)
#define LHU_DQT     S(KC_2)
#define LHU_LT      ALGR(KC_M)
#define LHU_GT      ALGR(KC_DOT)
#define LHU_QMARK   S(KC_COMMA)

// Lock keys

#define LHU_CAPS    KC_CAPS
#define LHU_SCRL    KC_SCRL
#define LHU_NUMLK   KC_NUM

// Modifiers

#define LHU_LGUI    KC_LGUI
#define LHU_LALT    KC_LALT
#define LHU_LCTL    KC_LCTL
#define LHU_LSFT    KC_LSFT

// Commands

#define LHU_PSCR KC_PSCR
#define LHU_PAUS    KC_PAUS
#define LHU_INS     KC_INS
#define LHU_HOME    KC_HOME
#define LHU_PGUP    KC_PGUP
#define LHU_DEL     KC_DEL
#define LHU_END     KC_END
#define LHU_PGDN    KC_PGDN
#define LHU_RIGHT   KC_RIGHT
#define LHU_LEFT    KC_LEFT
#define LHU_DOWN    KC_DOWN
#define LHU_UP      KC_UP
#define LHU_APP     KC_APP

// Number Pad

#define LHU_P0   KC_P0
#define LHU_P1   KC_P1
#define LHU_P2   KC_P2
#define LHU_P3   KC_P3
#define LHU_P4   KC_P4
#define LHU_P5   KC_P5
#define LHU_P6   KC_P6
#define LHU_P7   KC_P7
#define LHU_P8   KC_P8
#define LHU_P9   KC_P9
#define LHU_PAST KC_PAST
#define LHU_PCMM KC_PCMM
#define LHU_PDOT KC_PDOT
#define LHU_PENT KC_PENT
#define LHU_PEQL KC_PEQL
#define LHU_PMNS KC_PMNS
#define LHU_PPLS KC_PPLS
#define LHU_PSLS KC_PSLS

// Conveniance keys

#define LHU_AGAIN   C(KC_Z)
#define LHU_PASTE   C(KC_V)
#define LHU_COPY    C(KC_C)
#define LHU_CUT     C(KC_X)
#define LHU_UNDO    C(KC_Y)
#define LHU_DELWORD C(KC_BSPC)
