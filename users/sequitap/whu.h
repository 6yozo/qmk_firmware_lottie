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

#define WHU_A       KC_A
#define WHU_B       KC_B
#define WHU_C       KC_C
#define WHU_D       KC_D
#define WHU_E       KC_E
#define WHU_F       KC_F
#define WHU_G       KC_G
#define WHU_H       KC_H
#define WHU_I       KC_I
#define WHU_J       KC_J
#define WHU_K       KC_K
#define WHU_L       KC_L
#define WHU_M       KC_M
#define WHU_N       KC_N
#define WHU_O       KC_O
#define WHU_P       KC_P
#define WHU_Q       KC_Q
#define WHU_R       KC_R
#define WHU_S       KC_S
#define WHU_T       KC_T
#define WHU_U       KC_U
#define WHU_V       KC_V
#define WHU_W       KC_W
#define WHU_X       KC_X
#define WHU_Y       KC_Z
#define WHU_Z       KC_Y

//  Numbers

#define WHU_N0      KC_GRV
#define WHU_N1      KC_1
#define WHU_N2      KC_2
#define WHU_N3      KC_3
#define WHU_N4      KC_4
#define WHU_N5      KC_5
#define WHU_N6      KC_6
#define WHU_N7      KC_7
#define WHU_N8      KC_8
#define WHU_N9      KC_9

// Function Keys

#define WHU_F1      S(KC_F1)
#define WHU_F2      S(KC_F2)
#define WHU_F3      S(KC_F3)
#define WHU_F4      KC_F4
#define WHU_F5      KC_F5
#define WHU_F6      KC_F6
#define WHU_F7      KC_F7
#define WHU_F8      KC_F8
#define WHU_F9      KC_F9
#define WHU_F10     S(KC_F10)
#define WHU_F11     KC_F11
#define WHU_F12     KC_F12

// Hungarian accents

#define WHU_U_ACUTE     KC_RBRC
#define WHU_I_ACUTE     KC_NUBS
#define WHU_O_DACUTE    KC_LBRC
#define WHU_O_DIARESIS  KC_0
#define WHU_U_DACUTE    KC_BSLS
#define WHU_O_ACUTE     KC_EQL
#define WHU_E_ACUTE     KC_SCLN
#define WHU_A_ACUTE     KC_QUOT
#define WHU_U_DIARESIS  KC_MINS

// Punctuations

#define WHU_ENT     KC_ENT
#define WHU_ESC     KC_ESC
#define WHU_BSPC    KC_BSPC
#define WHU_TAB     KC_TAB
#define WHU_SPACE   KC_SPC
#define WHU_MINUS   KC_SLSH
#define WHU_EQUAL   S(KC_7)
#define WHU_LBKT    ALGR(KC_F)
#define WHU_RBKT    ALGR(KC_G)
#define WHU_BSLH    ALGR(KC_Q)
#define WHU_SEMI    ALGR(KC_COMMA)
#define WHU_SQT     S(KC_1)
#define WHU_GRAVE   ALGR(KC_7)
#define WHU_COMMA   KC_COMM
#define WHU_DOT     KC_DOT
#define WHU_FSLH    S(KC_6)

// Symbols which are shifted on an english keyboard

#define WHU_TILDE   ALGR(KC_1)
#define WHU_EXCL    S(KC_4)
#define WHU_AT      ALGR(KC_V)
#define WHU_HASH    ALGR(KC_X)
#define WHU_DLLR    ALGR(KC_SCLN)
#define WHU_PRCNT   S(KC_5)
#define WHU_CARET   S(KC_GRV)
#define WHU_AMPS    ALGR(KC_C)
#define WHU_STAR    ALGR(KC_SLSH)
#define WHU_LPAR    S(KC_8)
#define WHU_RPAR    S(KC_9)
#define WHU_UNDER   S(KC_SLSH)
#define WHU_PLUS    S(KC_3)
#define WHU_LBRC    ALGR(KC_B)
#define WHU_RBRC    ALGR(KC_N)
#define WHU_PIPE    ALGR(KC_W)
#define WHU_COLON   S(KC_DOT)
#define WHU_DQT     S(KC_2)
#define WHU_LT      ALGR(KC_M)
#define WHU_GT      ALGR(KC_DOT)
#define WHU_QMARK   S(KC_COMMA)

// Lock keys

#define WHU_CAPS    KC_CAPS
#define WHU_SCRL    KC_SCRL
#define WHU_NUMLK   KC_NUM

// Modifiers

#define WHU_LGUI    KC_LGUI
#define WHU_LALT    KC_LALT
#define WHU_LCTL    KC_LCTL
#define WHU_LSFT    KC_LSFT

// Commands

#define WHU_PSCR KC_PSCR
#define WHU_PAUS    KC_PAUS
#define WHU_INS     KC_INS
#define WHU_HOME    KC_HOME
#define WHU_PGUP    KC_PGUP
#define WHU_DEL     KC_DEL
#define WHU_END     KC_END
#define WHU_PGDN    KC_PGDN
#define WHU_RIGHT   KC_RIGHT
#define WHU_LEFT    KC_LEFT
#define WHU_DOWN    KC_DOWN
#define WHU_UP      KC_UP
#define WHU_APP     KC_APP

// Number Pad

#define WHU_P0   KC_P0
#define WHU_P1   KC_P1
#define WHU_P2   KC_P2
#define WHU_P3   KC_P3
#define WHU_P4   KC_P4
#define WHU_P5   KC_P5
#define WHU_P6   KC_P6
#define WHU_P7   KC_P7
#define WHU_P8   KC_P8
#define WHU_P9   KC_P9
#define WHU_PAST KC_PAST
#define WHU_PCMM KC_PCMM
#define WHU_PDOT KC_PDOT
#define WHU_PENT KC_PENT
#define WHU_PEQL KC_PEQL
#define WHU_PMNS KC_PMNS
#define WHU_PPLS KC_PPLS
#define WHU_PSLS KC_PSLS

// Conveniance keys

#define WHU_AGAIN   C(KC_Z)
#define WHU_PASTE   C(KC_V)
#define WHU_COPY    C(KC_C)
#define WHU_CUT     C(KC_X)
#define WHU_UNDO    C(KC_Y)
#define WHU_DELWORD C(KC_BSPC)
