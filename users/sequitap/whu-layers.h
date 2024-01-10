// Copyright 2023-24 Gyozo Gaspar
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

// LOLT = Left hand Outer column Little finger Top row
// RIIH = Right hand Inner column Index finger Home row
// LRB = Left hand Index finger Bottom row
// ROTH = Right hand Outer Thumb

// The Hungarian BUNYA_DTM for Corne layout (HBDC) adapts BUNYA_DTM to
// allow typing both English and Hungarian text on a 3x6+3 keyboard.

#define WHU_HBDC_LOLT WHU_U_ACUTE
#define WHU_HBDC_LLT  WHU_Z
#define WHU_HBDC_LRT  WHU_L
#define WHU_HBDC_LMT  WHU_D
#define WHU_HBDC_LIT  WHU_P
#define WHU_HBDC_LIIT WHU_V
#define WHU_HBDC_RIIT WHU_J
#define WHU_HBDC_RIT  WHU_K
#define WHU_HBDC_RMT  WHU_O
#define WHU_HBDC_RRT  WHU_U
#define WHU_HBDC_RLT  WHU_DOT
#define WHU_HBDC_ROLT WHU_I_ACUTE
#define WHU_HBDC_LOLH TO(WHU_NUM)
#define WHU_HBDC_LLH  WHU_N
#define WHU_HBDC_LRH  WHU_R
#define WHU_HBDC_LMH  WHU_T
#define WHU_HBDC_LIH  WHU_C
#define WHU_HBDC_LIIH WHU_B
#define WHU_HBDC_RIIH WHU_Y
#define WHU_HBDC_RIH  WHU_H
#define WHU_HBDC_RMH  WHU_A
#define WHU_HBDC_RRH  WHU_E
#define WHU_HBDC_RLH  WHU_I
#define WHU_HBDC_ROLH TO(WHU_FUN)
#define WHU_HBDC_LOLB WHU_U_DACUTE
#define WHU_HBDC_LLB  WHU_X
#define WHU_HBDC_LRB  WHU_Q
#define WHU_HBDC_LMB  WHU_M
#define WHU_HBDC_LIB  WHU_G
#define WHU_HBDC_LIIB WHU_W
#define WHU_HBDC_RIIB WHU_O_ACUTE
#define WHU_HBDC_RIB  WHU_F
#define WHU_HBDC_RMB  WHU_E_ACUTE
#define WHU_HBDC_RRB  WHU_A_ACUTE
#define WHU_HBDC_RLB  WHU_COMMA
#define WHU_HBDC_ROLB WHU_U_DIARESIS
#define WHU_HBDC_LITH TO(WHU_LMOD)
#define WHU_HBDC_LTH  WHU_S
#define WHU_HBDC_LOTH TO(SYSTEM)
#define WHU_HBDC_ROTH WHU_BSPC
#define WHU_HBDC_RTH  WHU_SPACE
#define WHU_HBDC_RITH TO(WHU_RMOD)

#define WHU_RMOD_RIH OSM(MOD_LSFT)
#define WHU_RMOD_RMH OSM(MOD_LCTL)
#define WHU_RMOD_RRH OSM(MOD_LALT)
#define WHU_RMOD_RLH OSM(MOD_LGUI)

#define WHU_LMOD_LLH OSM(MOD_LGUI)
#define WHU_LMOD_LRH OSM(MOD_LALT)
#define WHU_LMOD_LMH OSM(MOD_LCTL)
#define WHU_LMOD_LIH OSM(MOD_LSFT)

#define WHU_NAV_LOLT WHU_ESC
#define WHU_NAV_LLT  QK_LOCK
#define WHU_NAV_LRT  WHU_INS
#define WHU_NAV_LMT  KC_NO
#define WHU_NAV_LIT  KC_NO
#define WHU_NAV_LIIT KC_NO
#define WHU_NAV_RIIT WHU_NUMLK
#define WHU_NAV_RIT  WHU_APP
#define WHU_NAV_RMT  KC_NO
#define WHU_NAV_RRT  KC_NO
#define WHU_NAV_RLT  KC_NO
#define WHU_NAV_ROLT WHU_TAB
#define WHU_NAV_LOLH TO(WHU_NUM)
#define WHU_NAV_LLH  WHU_LGUI
#define WHU_NAV_LRH  WHU_LALT
#define WHU_NAV_LMH  WHU_LCTL
#define WHU_NAV_LIH  WHU_LSFT
#define WHU_NAV_LIIH KC_NO
#define WHU_NAV_RIIH WHU_CAPS
#define WHU_NAV_RIH  WHU_LEFT
#define WHU_NAV_RMH  WHU_DOWN
#define WHU_NAV_RRH  WHU_UP
#define WHU_NAV_RLH  WHU_RIGHT
#define WHU_NAV_ROLH TO(WHU_FUN)
#define WHU_NAV_LOLB WHU_DEL
#define WHU_NAV_LLB  WHU_UNDO
#define WHU_NAV_LRB  WHU_CUT
#define WHU_NAV_LMB  WHU_COPY
#define WHU_NAV_LIB  WHU_PASTE
#define WHU_NAV_LIIB WHU_AGAIN
#define WHU_NAV_RIIB WHU_DELWORD
#define WHU_NAV_RIB  WHU_HOME
#define WHU_NAV_RMB  WHU_PGDN
#define WHU_NAV_RRB  WHU_PGUP
#define WHU_NAV_RLB  WHU_END
#define WHU_NAV_ROLB WHU_ENT
#define WHU_NAV_LITH TO(WHU_LMOD)
#define WHU_NAV_LTH  WHU_S
#define WHU_NAV_LOTH TO(SYSTEM)
#define WHU_NAV_ROTH WHU_BSPC
#define WHU_NAV_RTH  WHU_SPACE
#define WHU_NAV_RITH TO(WHU_RMOD)

#define WHU_NPAD_LOLT WHU_ESC
#define WHU_NPAD_LLT  WHU_AMPS
#define WHU_NPAD_LRT  WHU_LT
#define WHU_NPAD_LMT  WHU_LPAR
#define WHU_NPAD_LIT  WHU_EQUAL
#define WHU_NPAD_LIIT WHU_SEMI
#define WHU_NPAD_RIIT WHU_COLON
#define WHU_NPAD_RIT  WHU_DQT
#define WHU_NPAD_RMT  WHU_RPAR
#define WHU_NPAD_RRT  WHU_GT
#define WHU_NPAD_RLT  WHU_PDOT
#define WHU_NPAD_ROLT WHU_TAB
#define WHU_NPAD_LOLH TO(WHU_NUM)
#define WHU_NPAD_LLH  WHU_P6
#define WHU_NPAD_LRH  WHU_P0
#define WHU_NPAD_LMH  WHU_P2
#define WHU_NPAD_LIH  WHU_P4
#define WHU_NPAD_LIIH WHU_PAST
#define WHU_NPAD_RIIH WHU_PSLS
#define WHU_NPAD_RIH  WHU_P5
#define WHU_NPAD_RMH  WHU_P3
#define WHU_NPAD_RRH  WHU_P1
#define WHU_NPAD_RLH  WHU_P7
#define WHU_NPAD_ROLH TO(WHU_FUN)
#define WHU_NPAD_LOLB WHU_DEL
#define WHU_NPAD_LLB  WHU_PIPE
#define WHU_NPAD_LRB  WHU_LBKT
#define WHU_NPAD_LMB  WHU_RBKT
#define WHU_NPAD_LIB  WHU_P8
#define WHU_NPAD_LIIB WHU_PPLS
#define WHU_NPAD_RIIB WHU_PMNS
#define WHU_NPAD_RIB  WHU_P9
#define WHU_NPAD_RMB  WHU_LBRC
#define WHU_NPAD_RRB  WHU_RBRC
#define WHU_NPAD_RLB  WHU_COMMA
#define WHU_NPAD_ROLB WHU_PENT
#define WHU_NPAD_LITH TO(WHU_LMOD)
#define WHU_NPAD_LTH  WHU_HBDC_LTH
#define WHU_NPAD_LOTH TO(SYSTEM)
#define WHU_NPAD_ROTH WHU_BSPC
#define WHU_NPAD_RTH  WHU_SPACE
#define WHU_NPAD_RITH TO(WHU_RMOD)

enum whu_keyboard_keycodes {
    WHU_LMOD_LOLT  = WHU_SAFE_RANGE,
    WHU_LMOD_LLT,
    WHU_LMOD_LRT,
    WHU_LMOD_LMT,
    WHU_LMOD_LIT,
    WHU_LMOD_LIIT,
    WHU_LMOD_RIIT,
    WHU_LMOD_RIT,
    WHU_LMOD_RMT,
    WHU_LMOD_RRT,
    WHU_LMOD_RLT,
    WHU_LMOD_ROLT,
    WHU_LMOD_LOLH,
    //Implemented in Layout: WHU_LMOD_LLH,
    //Implemented in Layout: WHU_LMOD_LRH,
    //Implemented in Layout: WHU_LMOD_LMH,
    //Implemented in Layout: WHU_LMOD_LIH,
    WHU_LMOD_LIIH,
    WHU_LMOD_RIIH,
    WHU_LMOD_RIH,
    WHU_LMOD_RMH,
    WHU_LMOD_RRH,
    WHU_LMOD_RLH,
    WHU_LMOD_ROLH,
    WHU_LMOD_LOLB,
    WHU_LMOD_LLB,
    WHU_LMOD_LRB,
    WHU_LMOD_LMB,
    WHU_LMOD_LIB,
    WHU_LMOD_LIIB,
    WHU_LMOD_RIIB,
    WHU_LMOD_RIB,
    WHU_LMOD_RMB,
    WHU_LMOD_RRB,
    WHU_LMOD_RLB,
    WHU_LMOD_ROLB,
    WHU_LMOD_LITH,
    WHU_LMOD_LTH,
    WHU_LMOD_LOTH,
    WHU_LMOD_ROTH,
    WHU_LMOD_RTH,
    WHU_LMOD_RITH,

    WHU_RMOD_LOLT,
    WHU_RMOD_LLT,
    WHU_RMOD_LRT,
    WHU_RMOD_LMT,
    WHU_RMOD_LIT,
    WHU_RMOD_LIIT,
    WHU_RMOD_RIIT,
    WHU_RMOD_RIT,
    WHU_RMOD_RMT,
    WHU_RMOD_RRT,
    WHU_RMOD_RLT,
    WHU_RMOD_ROLT,
    WHU_RMOD_LOLH,
    WHU_RMOD_LLH,
    WHU_RMOD_LRH,
    WHU_RMOD_LMH,
    WHU_RMOD_LIH,
    WHU_RMOD_LIIH,
    WHU_RMOD_RIIH,
    //Implemented in Layout: WHU_RMOD_RIH,
    //Implemented in Layout: WHU_RMOD_RMH,
    //Implemented in Layout: WHU_RMOD_RRH,
    //Implemented in Layout: WHU_RMOD_RLH,
    WHU_RMOD_ROLH,
    WHU_RMOD_LOLB,
    WHU_RMOD_LLB,
    WHU_RMOD_LRB,
    WHU_RMOD_LMB,
    WHU_RMOD_LIB,
    WHU_RMOD_LIIB,
    WHU_RMOD_RIIB,
    WHU_RMOD_RIB,
    WHU_RMOD_RMB,
    WHU_RMOD_RRB,
    WHU_RMOD_RLB,
    WHU_RMOD_ROLB,
    WHU_RMOD_LITH,
    WHU_RMOD_LTH,
    WHU_RMOD_LOTH,
    WHU_RMOD_ROTH,
    WHU_RMOD_RTH,
    WHU_RMOD_RITH,

    WHU_NUM_LOLT,
    WHU_NUM_LLT,
    WHU_NUM_LRT,
    WHU_NUM_LMT,
    WHU_NUM_LIT,
    WHU_NUM_LIIT,
    WHU_NUM_RIIT,
    WHU_NUM_RIT,
    WHU_NUM_RMT,
    WHU_NUM_RRT,
    WHU_NUM_RLT,
    WHU_NUM_ROLT,
    WHU_NUM_LOLH,
    WHU_NUM_LLH,
    WHU_NUM_LRH,
    WHU_NUM_LMH,
    WHU_NUM_LIH,
    WHU_NUM_LIIH,
    WHU_NUM_RIIH,
    WHU_NUM_RIH,
    WHU_NUM_RMH,
    WHU_NUM_RRH,
    WHU_NUM_RLH,
    WHU_NUM_ROLH,
    WHU_NUM_LOLB,
    WHU_NUM_LLB,
    WHU_NUM_LRB,
    WHU_NUM_LMB,
    WHU_NUM_LIB,
    WHU_NUM_LIIB,
    WHU_NUM_RIIB,
    WHU_NUM_RIB,
    WHU_NUM_RMB,
    WHU_NUM_RRB,
    WHU_NUM_RLB,
    WHU_NUM_ROLB,
    WHU_NUM_LITH,
    WHU_NUM_LTH,
    WHU_NUM_LOTH,
    WHU_NUM_ROTH,
    WHU_NUM_RTH,
    WHU_NUM_RITH,

    WHU_FUN_LOLT,
    WHU_FUN_LLT,
    WHU_FUN_LRT,
    WHU_FUN_LMT,
    WHU_FUN_LIT,
    WHU_FUN_LIIT,
    WHU_FUN_RIIT,
    WHU_FUN_RIT,
    WHU_FUN_RMT,
    WHU_FUN_RRT,
    WHU_FUN_RLT,
    WHU_FUN_ROLT,
    WHU_FUN_LOLH,
    WHU_FUN_LLH,
    WHU_FUN_LRH,
    WHU_FUN_LMH,
    WHU_FUN_LIH,
    WHU_FUN_LIIH,
    WHU_FUN_RIIH,
    WHU_FUN_RIH,
    WHU_FUN_RMH,
    WHU_FUN_RRH,
    WHU_FUN_RLH,
    WHU_FUN_ROLH,
    WHU_FUN_LOLB,
    WHU_FUN_LLB,
    WHU_FUN_LRB,
    WHU_FUN_LMB,
    WHU_FUN_LIB,
    WHU_FUN_LIIB,
    WHU_FUN_RIIB,
    WHU_FUN_RIB,
    WHU_FUN_RMB,
    WHU_FUN_RRB,
    WHU_FUN_RLB,
    WHU_FUN_ROLB,
    WHU_FUN_LITH,
    WHU_FUN_LTH,
    WHU_FUN_LOTH,
    WHU_FUN_ROTH,
    WHU_FUN_RTH,
    WHU_FUN_RITH,

};

#define WHU_PROCESS_RECORD_CASE_CARET(KEY, LAYER)               \
    PROCESS_RECORD_CASE2(KEY, SS_RALT("3"), WHU_SPACE, LAYER)
