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
// LIB = Left hand Index finger Bottom row
// ROTH = Right hand Outer Thumb

// The Hungarian BUNYA_DTM for Corne layout (HBDC) adapts BUNYA_DTM to
// allow typing both English and Hungarian text on a 3x6+3 keyboard.

#define MHU_HBDC_LOLT MHU_U_ACUTE
#define MHU_HBDC_LLT  MHU_Z
#define MHU_HBDC_LRT  MHU_L
#define MHU_HBDC_LMT  MHU_D
#define MHU_HBDC_LIT  MHU_P
#define MHU_HBDC_LIIT MHU_V
#define MHU_HBDC_RIIT MHU_J
#define MHU_HBDC_RIT  MHU_K
#define MHU_HBDC_RMT  MHU_O
#define MHU_HBDC_RRT  MHU_U
#define MHU_HBDC_RLT  QK_AREP
#define MHU_HBDC_ROLT MHU_I_ACUTE
#define MHU_HBDC_LOLH TO(MHU_NUM)
#define MHU_HBDC_LLH  MHU_N
#define MHU_HBDC_LRH  MHU_R
#define MHU_HBDC_LMH  MHU_T
#define MHU_HBDC_LIH  MHU_C
#define MHU_HBDC_LIIH MHU_B
#define MHU_HBDC_RIIH MHU_Y
#define MHU_HBDC_RIH  MHU_H
#define MHU_HBDC_RMH  MHU_A
#define MHU_HBDC_RRH  MHU_E
#define MHU_HBDC_RLH  MHU_I
#define MHU_HBDC_ROLH TO(MHU_NUM)
#define MHU_HBDC_LOLB TO(MHU_FUN)
#define MHU_HBDC_LLB  MHU_X
#define MHU_HBDC_LRB  MHU_Q
#define MHU_HBDC_LMB  MHU_M
#define MHU_HBDC_LIB  MHU_G
#define MHU_HBDC_LIIB MHU_W
#define MHU_HBDC_RIIB MHU_O_ACUTE
#define MHU_HBDC_RIB  MHU_F
#define MHU_HBDC_RMB  MHU_E_ACUTE
#define MHU_HBDC_RRB  MHU_A_ACUTE
#define MHU_HBDC_RLB  QK_REP
#define MHU_HBDC_ROLB TO(MHU_FUN)
#define MHU_HBDC_LITH TO(MHU_LMOD)
#define MHU_HBDC_LTH  MHU_S
#define MHU_HBDC_LOTH TO(SYSTEM)
#define MHU_HBDC_ROTH MHU_BSPC
#define MHU_HBDC_RTH  MHU_SPACE
#define MHU_HBDC_RITH TO(MHU_RMOD)

#define MHU_RMOD_RIH OSM(MOD_LSFT)
#define MHU_RMOD_RMH OSM(MOD_LCTL)
#define MHU_RMOD_RRH OSM(MOD_LALT)
#define MHU_RMOD_RLH OSM(MOD_LGUI)

#define MHU_LMOD_LLH OSM(MOD_LGUI)
#define MHU_LMOD_LRH OSM(MOD_LALT)
#define MHU_LMOD_LMH OSM(MOD_LCTL)
#define MHU_LMOD_LIH OSM(MOD_LSFT)

#define MHU_NAV_LOLT KC_NO
#define MHU_NAV_LLT  MHU_ESC
#define MHU_NAV_LRT  MHU_TAB
#define MHU_NAV_LMT  MHU_ENT
#define MHU_NAV_LIT  MHU_DEL
#define MHU_NAV_LIIT MHU_N0
#define MHU_NAV_RIIT MHU_INS
#define MHU_NAV_RIT  KC_NO
#define MHU_NAV_RMT  KC_NO
#define MHU_NAV_RRT  KC_NO
#define MHU_NAV_RLT  KC_NO
#define MHU_NAV_ROLT KC_NO
#define MHU_NAV_LOLH TO(MHU_NUM)
#define MHU_NAV_LLH  MHU_LEFT
#define MHU_NAV_LRH  MHU_UP
#define MHU_NAV_LMH  MHU_DOWN
#define MHU_NAV_LIH  MHU_RIGHT
#define MHU_NAV_LIIH MHU_CAPS
#define MHU_NAV_RIIH QK_LOCK
#define MHU_NAV_RIH  MHU_LSFT
#define MHU_NAV_RMH  MHU_LCTL
#define MHU_NAV_RRH  MHU_LALT
#define MHU_NAV_RLH  MHU_LGUI
#define MHU_NAV_ROLH TO(MHU_NUM)
#define MHU_NAV_LOLB TO(MHU_FUN)
#define MHU_NAV_LLB  MHU_HOME
#define MHU_NAV_LRB  MHU_PGUP
#define MHU_NAV_LMB  MHU_PGDN
#define MHU_NAV_LIB  MHU_END
#define MHU_NAV_LIIB KC_NO
#define MHU_NAV_RIIB MHU_DELWORD
#define MHU_NAV_RIB  KC_NO
#define MHU_NAV_RMB  KC_NO
#define MHU_NAV_RRB  KC_NO
#define MHU_NAV_RLB  KC_NO
#define MHU_NAV_ROLB TO(MHU_FUN)
#define MHU_NAV_LITH TO(MHU_LMOD)
#define MHU_NAV_LTH  MHU_S
#define MHU_NAV_LOTH TO(SYSTEM)
#define MHU_NAV_ROTH MHU_BSPC
#define MHU_NAV_RTH  MHU_SPACE
#define MHU_NAV_RITH TO(MHU_RMOD)

#define MHU_NPAD_LOLT KC_NO
#define MHU_NPAD_LLT  MHU_AMPS
#define MHU_NPAD_LRT  MHU_LT
#define MHU_NPAD_LMT  MHU_PENT
#define MHU_NPAD_LIT  MHU_EQUAL
#define MHU_NPAD_LIIT MHU_SEMI
#define MHU_NPAD_RIIT MHU_COLON
#define MHU_NPAD_RIT  MHU_DQT
#define MHU_NPAD_RMT  MHU_NUMLK
#define MHU_NPAD_RRT  MHU_GT
#define MHU_NPAD_RLT  MHU_DOT
#define MHU_NPAD_ROLT KC_NO
#define MHU_NPAD_LOLH TO(MHU_NUM)
#define MHU_NPAD_LLH  MHU_P6
#define MHU_NPAD_LRH  MHU_P0
#define MHU_NPAD_LMH  MHU_P2
#define MHU_NPAD_LIH  MHU_P4
#define MHU_NPAD_LIIH MHU_PAST
#define MHU_NPAD_RIIH MHU_PSLS
#define MHU_NPAD_RIH  MHU_P5
#define MHU_NPAD_RMH  MHU_P3
#define MHU_NPAD_RRH  MHU_P1
#define MHU_NPAD_RLH  MHU_P7
#define MHU_NPAD_ROLH TO(MHU_NUM)
#define MHU_NPAD_LOLB TO(MHU_FUN)
#define MHU_NPAD_LLB  MHU_PIPE
#define MHU_NPAD_LRB  MHU_LBKT
#define MHU_NPAD_LMB  MHU_RBKT
#define MHU_NPAD_LIB  MHU_P8
#define MHU_NPAD_LIIB MHU_PPLS
#define MHU_NPAD_RIIB MHU_PMNS
#define MHU_NPAD_RIB  MHU_P9
#define MHU_NPAD_RMB  LHU_LPAR
#define MHU_NPAD_RRB  LHU_RPAR
#define MHU_NPAD_RLB  MHU_PDOT
#define MHU_NPAD_ROLB TO(MHU_FUN)
#define MHU_NPAD_LITH TO(MHU_LMOD)
#define MHU_NPAD_LTH  MHU_HBDC_LTH
#define MHU_NPAD_LOTH TO(SYSTEM)
#define MHU_NPAD_ROTH MHU_BSPC
#define MHU_NPAD_RTH  MHU_SPACE
#define MHU_NPAD_RITH TO(MHU_RMOD)

#define MHU_MOUSE_LOLT KC_NO
#define MHU_MOUSE_LLT  KC_MS_WH_RIGHT
#define MHU_MOUSE_LRT  KC_MS_WH_UP
#define MHU_MOUSE_LMT  KC_MS_WH_DOWN
#define MHU_MOUSE_LIT  KC_MS_WH_LEFT
#define MHU_MOUSE_LIIT KC_NO
#define MHU_MOUSE_RIIT KC_NO
#define MHU_MOUSE_RIT  KC_NO
#define MHU_MOUSE_RMT  KC_NO
#define MHU_MOUSE_RRT  KC_NO
#define MHU_MOUSE_RLT  KC_NO
#define MHU_MOUSE_ROLT KC_NO
#define MHU_MOUSE_LOLH TO(MHU_NUM)
#define MHU_MOUSE_LLH  KC_MS_BTN4
#define MHU_MOUSE_LRH  KC_MS_BTN3
#define MHU_MOUSE_LMH  KC_MS_BTN2
#define MHU_MOUSE_LIH  KC_MS_BTN1
#define MHU_MOUSE_LIIH KC_NO
#define MHU_MOUSE_RIIH KC_NO
#define MHU_MOUSE_RIH  KC_MS_LEFT
#define MHU_MOUSE_RMH  KC_MS_DOWN
#define MHU_MOUSE_RRH  KC_MS_UP
#define MHU_MOUSE_RLH  KC_MS_RIGHT
#define MHU_MOUSE_ROLH TO(MHU_NUM)
#define MHU_MOUSE_LOLB TO(MHU_FUN)
#define MHU_MOUSE_LLB  KC_MS_BTN8
#define MHU_MOUSE_LRB  KC_MS_BTN7
#define MHU_MOUSE_LMB  KC_MS_BTN6
#define MHU_MOUSE_LIB  KC_MS_BTN5
#define MHU_MOUSE_LIIB KC_NO
#define MHU_MOUSE_RIIB KC_NO
#define MHU_MOUSE_RIB  KC_NO
#define MHU_MOUSE_RMB  KC_NO
#define MHU_MOUSE_RRB  KC_NO
#define MHU_MOUSE_RLB  KC_NO
#define MHU_MOUSE_ROLB TO(MHU_FUN)
#define MHU_MOUSE_LITH TO(MHU_LMOD)
#define MHU_MOUSE_LTH  MHU_HBDC_LTH
#define MHU_MOUSE_LOTH TO(SYSTEM)
#define MHU_MOUSE_ROTH MHU_BSPC
#define MHU_MOUSE_RTH  MHU_SPACE
#define MHU_MOUSE_RITH TO(MHU_RMOD)

enum mhu_keyboard_keycodes {
    MHU_LMOD_LOLT  = MHU_SAFE_RANGE,
    MHU_LMOD_LLT,
    MHU_LMOD_LRT,
    MHU_LMOD_LMT,
    MHU_LMOD_LIT,
    MHU_LMOD_LIIT,
    MHU_LMOD_RIIT,
    MHU_LMOD_RIT,
    MHU_LMOD_RMT,
    MHU_LMOD_RRT,
    MHU_LMOD_RLT,
    MHU_LMOD_ROLT,
    MHU_LMOD_LOLH,
    //Implemented in Layout: MHU_LMOD_LLH,
    //Implemented in Layout: MHU_LMOD_LRH,
    //Implemented in Layout: MHU_LMOD_LMH,
    //Implemented in Layout: MHU_LMOD_LIH,
    MHU_LMOD_LIIH,
    MHU_LMOD_RIIH,
    MHU_LMOD_RIH,
    MHU_LMOD_RMH,
    MHU_LMOD_RRH,
    MHU_LMOD_RLH,
    MHU_LMOD_ROLH,
    MHU_LMOD_LOLB,
    MHU_LMOD_LLB,
    MHU_LMOD_LRB,
    MHU_LMOD_LMB,
    MHU_LMOD_LIB,
    MHU_LMOD_LIIB,
    MHU_LMOD_RIIB,
    MHU_LMOD_RIB,
    MHU_LMOD_RMB,
    MHU_LMOD_RRB,
    MHU_LMOD_RLB,
    MHU_LMOD_ROLB,
    MHU_LMOD_LITH,
    MHU_LMOD_LTH,
    MHU_LMOD_LOTH,
    MHU_LMOD_ROTH,
    MHU_LMOD_RTH,
    MHU_LMOD_RITH,

    MHU_RMOD_LOLT,
    MHU_RMOD_LLT,
    MHU_RMOD_LRT,
    MHU_RMOD_LMT,
    MHU_RMOD_LIT,
    MHU_RMOD_LIIT,
    MHU_RMOD_RIIT,
    MHU_RMOD_RIT,
    MHU_RMOD_RMT,
    MHU_RMOD_RRT,
    MHU_RMOD_RLT,
    MHU_RMOD_ROLT,
    MHU_RMOD_LOLH,
    MHU_RMOD_LLH,
    MHU_RMOD_LRH,
    MHU_RMOD_LMH,
    MHU_RMOD_LIH,
    MHU_RMOD_LIIH,
    MHU_RMOD_RIIH,
    //Implemented in Layout: MHU_RMOD_RIH,
    //Implemented in Layout: MHU_RMOD_RMH,
    //Implemented in Layout: MHU_RMOD_RRH,
    //Implemented in Layout: MHU_RMOD_RLH,
    MHU_RMOD_ROLH,
    MHU_RMOD_LOLB,
    MHU_RMOD_LLB,
    MHU_RMOD_LRB,
    MHU_RMOD_LMB,
    MHU_RMOD_LIB,
    MHU_RMOD_LIIB,
    MHU_RMOD_RIIB,
    MHU_RMOD_RIB,
    MHU_RMOD_RMB,
    MHU_RMOD_RRB,
    MHU_RMOD_RLB,
    MHU_RMOD_ROLB,
    MHU_RMOD_LITH,
    MHU_RMOD_LTH,
    MHU_RMOD_LOTH,
    MHU_RMOD_ROTH,
    MHU_RMOD_RTH,
    MHU_RMOD_RITH,

    MHU_NUM_LOLT,
    MHU_NUM_LLT,
    MHU_NUM_LRT,
    MHU_NUM_LMT,
    MHU_NUM_LIT,
    MHU_NUM_LIIT,
    MHU_NUM_RIIT,
    MHU_NUM_RIT,
    MHU_NUM_RMT,
    MHU_NUM_RRT,
    MHU_NUM_RLT,
    MHU_NUM_ROLT,
    MHU_NUM_LOLH,
    MHU_NUM_LLH,
    MHU_NUM_LRH,
    MHU_NUM_LMH,
    MHU_NUM_LIH,
    MHU_NUM_LIIH,
    MHU_NUM_RIIH,
    MHU_NUM_RIH,
    MHU_NUM_RMH,
    MHU_NUM_RRH,
    MHU_NUM_RLH,
    MHU_NUM_ROLH,
    MHU_NUM_LOLB,
    MHU_NUM_LLB,
    MHU_NUM_LRB,
    MHU_NUM_LMB,
    MHU_NUM_LIB,
    MHU_NUM_LIIB,
    MHU_NUM_RIIB,
    MHU_NUM_RIB,
    MHU_NUM_RMB,
    MHU_NUM_RRB,
    MHU_NUM_RLB,
    MHU_NUM_ROLB,
    MHU_NUM_LITH,
    MHU_NUM_LTH,
    MHU_NUM_LOTH,
    MHU_NUM_ROTH,
    MHU_NUM_RTH,
    MHU_NUM_RITH,

    MHU_FUN_LOLT,
    MHU_FUN_LLT,
    MHU_FUN_LRT,
    MHU_FUN_LMT,
    MHU_FUN_LIT,
    MHU_FUN_LIIT,
    MHU_FUN_RIIT,
    MHU_FUN_RIT,
    MHU_FUN_RMT,
    MHU_FUN_RRT,
    MHU_FUN_RLT,
    MHU_FUN_ROLT,
    MHU_FUN_LOLH,
    MHU_FUN_LLH,
    MHU_FUN_LRH,
    MHU_FUN_LMH,
    MHU_FUN_LIH,
    MHU_FUN_LIIH,
    MHU_FUN_RIIH,
    MHU_FUN_RIH,
    MHU_FUN_RMH,
    MHU_FUN_RRH,
    MHU_FUN_RLH,
    MHU_FUN_ROLH,
    MHU_FUN_LOLB,
    MHU_FUN_LLB,
    MHU_FUN_LRB,
    MHU_FUN_LMB,
    MHU_FUN_LIB,
    MHU_FUN_LIIB,
    MHU_FUN_RIIB,
    MHU_FUN_RIB,
    MHU_FUN_RMB,
    MHU_FUN_RRB,
    MHU_FUN_RLB,
    MHU_FUN_ROLB,
    MHU_FUN_LITH,
    MHU_FUN_LTH,
    MHU_FUN_LOTH,
    MHU_FUN_ROTH,
    MHU_FUN_RTH,
    MHU_FUN_RITH,

};

#define MHU_PROCESS_RECORD_CASE_CARET(KEY, LAYER)   \
    PROCESS_RECORD_CASE(KEY, MHU_CARET, LAYER)
