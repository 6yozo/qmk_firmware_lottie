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

#define MHU_A       KC_A
#define MHU_B       KC_B
#define MHU_C       KC_C
#define MHU_D       KC_D
#define MHU_E       KC_E
#define MHU_F       KC_F
#define MHU_G       KC_G
#define MHU_H       KC_H
#define MHU_I       KC_I
#define MHU_J       KC_J
#define MHU_K       KC_K
#define MHU_L       KC_L
#define MHU_M       KC_M
#define MHU_N       KC_N
#define MHU_O       KC_O
#define MHU_P       KC_P
#define MHU_Q       KC_Q
#define MHU_R       KC_R
#define MHU_S       KC_S
#define MHU_T       KC_T
#define MHU_U       KC_U
#define MHU_V       KC_V
#define MHU_W       KC_W
#define MHU_X       KC_X
#define MHU_Y       KC_Z
#define MHU_Z       KC_Y

//  Numbers

#define MHU_N0      KC_0
#define MHU_N1      KC_1
#define MHU_N2      KC_2
#define MHU_N3      KC_3
#define MHU_N4      KC_4
#define MHU_N5      KC_5
#define MHU_N6      KC_6
#define MHU_N7      KC_7
#define MHU_N8      KC_8
#define MHU_N9      KC_9

// Function Keys

#define MHU_F1      KC_F1
#define MHU_F2      KC_F2
#define MHU_F3      KC_F3
#define MHU_F4      KC_F4
#define MHU_F5      KC_F5
#define MHU_F6      KC_F6
#define MHU_F7      KC_F7
#define MHU_F8      KC_F8
#define MHU_F9      KC_F9
#define MHU_F10     KC_F10
#define MHU_F11     KC_F11
#define MHU_F12     KC_F12

// Hungarian accents

#define MHU_U_ACUTE     KC_RBRC
#define MHU_I_ACUTE     KC_NUBS
#define MHU_O_DACUTE    KC_LBRC
#define MHU_O_DIARESIS  KC_GRV
#define MHU_U_DACUTE    KC_BSLS
#define MHU_O_ACUTE     KC_EQL
#define MHU_E_ACUTE     KC_SCLN
#define MHU_A_ACUTE     KC_QUOT
#define MHU_U_DIARESIS  KC_MINS

// Punctuations

#define MHU_ENT     KC_ENT
#define MHU_ESC     KC_ESC
#define MHU_BSPC    KC_BSPC
#define MHU_TAB     KC_TAB
#define MHU_SPACE   KC_SPC
#define MHU_MINUS   ALGR(KC_SLSH)
#define MHU_EQUAL   S(KC_7)
#define MHU_LBKT    ALGR(KC_8)
#define MHU_RBKT    ALGR(KC_9)
#define MHU_BSLH    ALGR(KC_MINUS)
#define MHU_SEMI    ALGR(KC_DOT)
#define MHU_SQT     S(KC_1)
#define MHU_GRAVE   ALGR(KC_BSLS)
#define MHU_COMMA   KC_COMM
#define MHU_DOT     KC_DOT
#define MHU_FSLH    S(KC_6)

// Symbols which are shifted on an english keyboard

#define MHU_TILDE   ALGR(KC_RBRC)
#define MHU_EXCL    S(KC_4)
#define MHU_AT      ALGR(KC_Q)
#define MHU_HASH    ALGR(S(KC_3))
#define MHU_DLLR    ALGR(KC_4)
#define MHU_PRCNT   S(KC_5)
#define MHU_CARET   ALGR(KC_QUOT)
#define MHU_AMPS    ALGR(KC_1)
#define MHU_STAR    ALGR(KC_SLSH)
#define MHU_LPAR    S(KC_8)
#define MHU_RPAR    S(KC_9)
#define MHU_UNDER   S(KC_SLSH)
#define MHU_PLUS    S(KC_3)
#define MHU_LBRC    ALGR(KC_7)
#define MHU_RBRC    ALGR(KC_0)
#define MHU_PIPE    ALGR(KC_NUBS)
#define MHU_COLON   S(KC_DOT)
#define MHU_DQT     S(KC_2)
#define MHU_LT      ALGR(KC_5)
#define MHU_GT      ALGR(KC_6)
#define MHU_QMARK   S(KC_COMMA)

// Lock keys

#define MHU_CAPS    KC_CAPS
#define MHU_SCRL    KC_SCRL
#define MHU_NUMLK   KC_NUM

// Modifiers

#define MHU_LGUI    KC_LGUI
#define MHU_LALT    KC_LALT
#define MHU_LCTL    KC_LCTL
#define MHU_LSFT    KC_LSFT

// Commands

#define MHU_PSCR    KC_PSCR
#define MHU_PAUS    KC_PAUS
#define MHU_INS     KC_INS
#define MHU_HOME    KC_HOME
#define MHU_PGUP    KC_PGUP
#define MHU_DEL     KC_DEL
#define MHU_END     KC_END
#define MHU_PGDN    KC_PGDN
#define MHU_RIGHT   KC_RIGHT
#define MHU_LEFT    KC_LEFT
#define MHU_DOWN    KC_DOWN
#define MHU_UP      KC_UP
#define MHU_APP     KC_APP

// Number Pad

#define MHU_P0   KC_P0
#define MHU_P1   KC_P1
#define MHU_P2   KC_P2
#define MHU_P3   KC_P3
#define MHU_P4   KC_P4
#define MHU_P5   KC_P5
#define MHU_P6   KC_P6
#define MHU_P7   KC_P7
#define MHU_P8   KC_P8
#define MHU_P9   KC_P9
#define MHU_PAST KC_PAST
#define MHU_PCMM KC_PCMM
#define MHU_PDOT KC_PDOT
#define MHU_PENT KC_PENT
#define MHU_PEQL KC_PEQL
#define MHU_PMNS KC_PMNS
#define MHU_PPLS KC_PPLS
#define MHU_PSLS KC_PSLS

// Conveniance keys

#define MHU_AGAIN   G(KC_Z)
#define MHU_PASTE   G(KC_V)
#define MHU_COPY    G(KC_C)
#define MHU_CUT     G(KC_X)
#define MHU_UNDO    G(KC_Y)
#define MHU_DELWORD G(KC_BSPC)
