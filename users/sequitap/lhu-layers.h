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

// The Hungarian BUNYA_DTM for Corne layout (HBDC) adapts BUNYA_DTM to
// allow typing both English and Hungarian text on a 3x6+3 keyboard.

#define LHU_HBDC_LOLT LHU_U_ACUTE
#define LHU_HBDC_LLT  LHU_Z
#define LHU_HBDC_LRT  LHU_L
#define LHU_HBDC_LMT  LHU_D
#define LHU_HBDC_LIT  LHU_P
#define LHU_HBDC_LIIT LHU_V
#define LHU_HBDC_RIIT LHU_J
#define LHU_HBDC_RIT  LHU_K
#define LHU_HBDC_RMT  LHU_O
#define LHU_HBDC_RRT  LHU_U
#define LHU_HBDC_RLT  LHU_DOT
#define LHU_HBDC_ROLT LHU_I_ACUTE
#define LHU_HBDC_LOLH TO(LHU_NUM)
#define LHU_HBDC_LLH  LHU_N
#define LHU_HBDC_LRH  LHU_R
#define LHU_HBDC_LMH  LHU_T
#define LHU_HBDC_LIH  LHU_C
#define LHU_HBDC_LIIH LHU_B
#define LHU_HBDC_RIIH LHU_Y
#define LHU_HBDC_RIH  LHU_H
#define LHU_HBDC_RMH  LHU_A
#define LHU_HBDC_RRH  LHU_E
#define LHU_HBDC_RLH  LHU_I
#define LHU_HBDC_ROLH TO(LHU_FUN)
#define LHU_HBDC_LOLB LHU_U_DACUTE
#define LHU_HBDC_LLB  LHU_X
#define LHU_HBDC_LRB  LHU_Q
#define LHU_HBDC_LMB  LHU_M
#define LHU_HBDC_LIB  LHU_G
#define LHU_HBDC_LIIB LHU_W
#define LHU_HBDC_RIIB LHU_O_ACUTE
#define LHU_HBDC_RIB  LHU_F
#define LHU_HBDC_RMB  LHU_E_ACUTE
#define LHU_HBDC_RRB  LHU_A_ACUTE
#define LHU_HBDC_RLB  LHU_COMMA
#define LHU_HBDC_ROLB LHU_U_DIARESIS
#define LHU_HBDC_LITH TO(LHU_LMOD)
#define LHU_HBDC_LTH  LHU_S
#define LHU_HBDC_LOTH TO(SYSTEM)
#define LHU_HBDC_ROTH LHU_BSPC
#define LHU_HBDC_RTH  LHU_SPACE
#define LHU_HBDC_RITH TO(LHU_RMOD)

#define LHU_RMOD_RIH OSM(MOD_LSFT)
#define LHU_RMOD_RMH OSM(MOD_LCTL)
#define LHU_RMOD_RRH OSM(MOD_LALT)
#define LHU_RMOD_RLH OSM(MOD_LGUI)

#define LHU_LMOD_LLH OSM(MOD_LGUI)
#define LHU_LMOD_LRH OSM(MOD_LALT)
#define LHU_LMOD_LMH OSM(MOD_LCTL)
#define LHU_LMOD_LIH OSM(MOD_LSFT)

#define LHU_NAV_LOLT LHU_ESC
#define LHU_NAV_LLT  QK_LOCK
#define LHU_NAV_LRT  LHU_INS
#define LHU_NAV_LMT  KC_NO
#define LHU_NAV_LIT  KC_NO
#define LHU_NAV_LIIT KC_NO
#define LHU_NAV_RIIT LHU_NUMLK
#define LHU_NAV_RIT  LHU_APP
#define LHU_NAV_RMT  KC_NO
#define LHU_NAV_RRT  KC_NO
#define LHU_NAV_RLT  KC_NO
#define LHU_NAV_ROLT LHU_TAB
#define LHU_NAV_LOLH TO(LHU_NUM)
#define LHU_NAV_LLH  LHU_LGUI
#define LHU_NAV_LRH  LHU_LALT
#define LHU_NAV_LMH  LHU_LCTL
#define LHU_NAV_LIH  LHU_LSFT
#define LHU_NAV_LIIH KC_NO
#define LHU_NAV_RIIH LHU_CAPS
#define LHU_NAV_RIH  LHU_LEFT
#define LHU_NAV_RMH  LHU_DOWN
#define LHU_NAV_RRH  LHU_UP
#define LHU_NAV_RLH  LHU_RIGHT
#define LHU_NAV_ROLH TO(LHU_FUN)
#define LHU_NAV_LOLB LHU_DEL
#define LHU_NAV_LLB  LHU_UNDO
#define LHU_NAV_LRB  LHU_CUT
#define LHU_NAV_LMB  LHU_COPY
#define LHU_NAV_LIB  LHU_PASTE
#define LHU_NAV_LIIB LHU_AGAIN
#define LHU_NAV_RIIB LHU_DELWORD
#define LHU_NAV_RIB  LHU_HOME
#define LHU_NAV_RMB  LHU_PGDN
#define LHU_NAV_RRB  LHU_PGUP
#define LHU_NAV_RLB  LHU_END
#define LHU_NAV_ROLB LHU_ENT
#define LHU_NAV_LITH TO(LHU_LMOD)
#define LHU_NAV_LTH  LHU_S
#define LHU_NAV_LOTH TO(SYSTEM)
#define LHU_NAV_ROTH LHU_BSPC
#define LHU_NAV_RTH  LHU_SPACE
#define LHU_NAV_RITH TO(LHU_RMOD)

#define LHU_NPAD_LOLT LHU_ESC
#define LHU_NPAD_LLT  LHU_AMPS
#define LHU_NPAD_LRT  LHU_LT
#define LHU_NPAD_LMT  LHU_LPAR
#define LHU_NPAD_LIT  LHU_EQUAL
#define LHU_NPAD_LIIT LHU_SEMI
#define LHU_NPAD_RIIT LHU_COLON
#define LHU_NPAD_RIT  LHU_DQT
#define LHU_NPAD_RMT  LHU_RPAR
#define LHU_NPAD_RRT  LHU_GT
#define LHU_NPAD_RLT  LHU_PDOT
#define LHU_NPAD_ROLT LHU_TAB
#define LHU_NPAD_LOLH TO(LHU_NUM)
#define LHU_NPAD_LLH  LHU_P6
#define LHU_NPAD_LRH  LHU_P0
#define LHU_NPAD_LMH  LHU_P2
#define LHU_NPAD_LIH  LHU_P4
#define LHU_NPAD_LIIH LHU_PAST
#define LHU_NPAD_RIIH LHU_PSLS
#define LHU_NPAD_RIH  LHU_P5
#define LHU_NPAD_RMH  LHU_P3
#define LHU_NPAD_RRH  LHU_P1
#define LHU_NPAD_RLH  LHU_P7
#define LHU_NPAD_ROLH TO(LHU_FUN)
#define LHU_NPAD_LOLB LHU_DEL
#define LHU_NPAD_LLB  LHU_PIPE
#define LHU_NPAD_LRB  LHU_LBKT
#define LHU_NPAD_LMB  LHU_RBKT
#define LHU_NPAD_LIB  LHU_P8
#define LHU_NPAD_LIIB LHU_PPLS
#define LHU_NPAD_RIIB LHU_PMNS
#define LHU_NPAD_RIB  LHU_P9
#define LHU_NPAD_RMB  LHU_LBRC
#define LHU_NPAD_RRB  LHU_RBRC
#define LHU_NPAD_RLB  LHU_COMMA
#define LHU_NPAD_ROLB LHU_PENT
#define LHU_NPAD_LITH TO(LHU_LMOD)
#define LHU_NPAD_LTH  LHU_HBDC_LTH
#define LHU_NPAD_LOTH TO(SYSTEM)
#define LHU_NPAD_ROTH LHU_BSPC
#define LHU_NPAD_RTH  LHU_SPACE
#define LHU_NPAD_RITH TO(LHU_RMOD)

enum lhu_keyboard_keycodes {
    LHU_LMOD_LOLT  = LHU_SAFE_RANGE,
    LHU_LMOD_LLT,
    LHU_LMOD_LRT,
    LHU_LMOD_LMT,
    LHU_LMOD_LIT,
    LHU_LMOD_LIIT,
    LHU_LMOD_RIIT,
    LHU_LMOD_RIT,
    LHU_LMOD_RMT,
    LHU_LMOD_RRT,
    LHU_LMOD_RLT,
    LHU_LMOD_ROLT,
    LHU_LMOD_LOLH,
    //Implemented in Layout: LHU_LMOD_LLH,
    //Implemented in Layout: LHU_LMOD_LRH,
    //Implemented in Layout: LHU_LMOD_LMH,
    //Implemented in Layout: LHU_LMOD_LIH,
    LHU_LMOD_LIIH,
    LHU_LMOD_RIIH,
    LHU_LMOD_RIH,
    LHU_LMOD_RMH,
    LHU_LMOD_RRH,
    LHU_LMOD_RLH,
    LHU_LMOD_ROLH,
    LHU_LMOD_LOLB,
    LHU_LMOD_LLB,
    LHU_LMOD_LRB,
    LHU_LMOD_LMB,
    LHU_LMOD_LIB,
    LHU_LMOD_LIIB,
    LHU_LMOD_RIIB,
    LHU_LMOD_RIB,
    LHU_LMOD_RMB,
    LHU_LMOD_RRB,
    LHU_LMOD_RLB,
    LHU_LMOD_ROLB,
    LHU_LMOD_LITH,
    LHU_LMOD_LTH,
    LHU_LMOD_LOTH,
    LHU_LMOD_ROTH,
    LHU_LMOD_RTH,
    LHU_LMOD_RITH,

    LHU_RMOD_LOLT,
    LHU_RMOD_LLT,
    LHU_RMOD_LRT,
    LHU_RMOD_LMT,
    LHU_RMOD_LIT,
    LHU_RMOD_LIIT,
    LHU_RMOD_RIIT,
    LHU_RMOD_RIT,
    LHU_RMOD_RMT,
    LHU_RMOD_RRT,
    LHU_RMOD_RLT,
    LHU_RMOD_ROLT,
    LHU_RMOD_LOLH,
    LHU_RMOD_LLH,
    LHU_RMOD_LRH,
    LHU_RMOD_LMH,
    LHU_RMOD_LIH,
    LHU_RMOD_LIIH,
    LHU_RMOD_RIIH,
    //Implemented in Layout: LHU_RMOD_RIH,
    //Implemented in Layout: LHU_RMOD_RMH,
    //Implemented in Layout: LHU_RMOD_RRH,
    //Implemented in Layout: LHU_RMOD_RLH,
    LHU_RMOD_ROLH,
    LHU_RMOD_LOLB,
    LHU_RMOD_LLB,
    LHU_RMOD_LRB,
    LHU_RMOD_LMB,
    LHU_RMOD_LIB,
    LHU_RMOD_LIIB,
    LHU_RMOD_RIIB,
    LHU_RMOD_RIB,
    LHU_RMOD_RMB,
    LHU_RMOD_RRB,
    LHU_RMOD_RLB,
    LHU_RMOD_ROLB,
    LHU_RMOD_LITH,
    LHU_RMOD_LTH,
    LHU_RMOD_LOTH,
    LHU_RMOD_ROTH,
    LHU_RMOD_RTH,
    LHU_RMOD_RITH,

    LHU_NUM_LOLT,
    LHU_NUM_LLT,
    LHU_NUM_LRT,
    LHU_NUM_LMT,
    LHU_NUM_LIT,
    LHU_NUM_LIIT,
    LHU_NUM_RIIT,
    LHU_NUM_RIT,
    LHU_NUM_RMT,
    LHU_NUM_RRT,
    LHU_NUM_RLT,
    LHU_NUM_ROLT,
    LHU_NUM_LOLH,
    LHU_NUM_LLH,
    LHU_NUM_LRH,
    LHU_NUM_LMH,
    LHU_NUM_LIH,
    LHU_NUM_LIIH,
    LHU_NUM_RIIH,
    LHU_NUM_RIH,
    LHU_NUM_RMH,
    LHU_NUM_RRH,
    LHU_NUM_RLH,
    LHU_NUM_ROLH,
    LHU_NUM_LOLB,
    LHU_NUM_LLB,
    LHU_NUM_LRB,
    LHU_NUM_LMB,
    LHU_NUM_LIB,
    LHU_NUM_LIIB,
    LHU_NUM_RIIB,
    LHU_NUM_RIB,
    LHU_NUM_RMB,
    LHU_NUM_RRB,
    LHU_NUM_RLB,
    LHU_NUM_ROLB,
    LHU_NUM_LITH,
    LHU_NUM_LTH,
    LHU_NUM_LOTH,
    LHU_NUM_ROTH,
    LHU_NUM_RTH,
    LHU_NUM_RITH,

    LHU_FUN_LOLT,
    LHU_FUN_LLT,
    LHU_FUN_LRT,
    LHU_FUN_LMT,
    LHU_FUN_LIT,
    LHU_FUN_LIIT,
    LHU_FUN_RIIT,
    LHU_FUN_RIT,
    LHU_FUN_RMT,
    LHU_FUN_RRT,
    LHU_FUN_RLT,
    LHU_FUN_ROLT,
    LHU_FUN_LOLH,
    LHU_FUN_LLH,
    LHU_FUN_LRH,
    LHU_FUN_LMH,
    LHU_FUN_LIH,
    LHU_FUN_LIIH,
    LHU_FUN_RIIH,
    LHU_FUN_RIH,
    LHU_FUN_RMH,
    LHU_FUN_RRH,
    LHU_FUN_RLH,
    LHU_FUN_ROLH,
    LHU_FUN_LOLB,
    LHU_FUN_LLB,
    LHU_FUN_LRB,
    LHU_FUN_LMB,
    LHU_FUN_LIB,
    LHU_FUN_LIIB,
    LHU_FUN_RIIB,
    LHU_FUN_RIB,
    LHU_FUN_RMB,
    LHU_FUN_RRB,
    LHU_FUN_RLB,
    LHU_FUN_ROLB,
    LHU_FUN_LITH,
    LHU_FUN_LTH,
    LHU_FUN_LOTH,
    LHU_FUN_ROTH,
    LHU_FUN_RTH,
    LHU_FUN_RITH,

};
