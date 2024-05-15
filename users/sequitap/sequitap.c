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

#include QMK_KEYBOARD_H
#include <stdio.h>
#include "layers.h"
#include "sequitap.h"
#include "whu.h"
#include "whu-layers.h"
#include "lhu.h"
#include "lhu-layers.h"
#include "mhu.h"
#include "mhu-layers.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [SYSTEM] = MAKE_LAYER(ALL, SYS),
    [WHU_BASE] = MAKE_LAYER(WHU, HBDC),
    [WHU_LMOD] = MAKE_LAYER(WHU, LMOD),
    [WHU_RMOD] = MAKE_LAYER(WHU, RMOD),
    [WHU_NAV] = MAKE_LAYER(WHU, NAV),
    [WHU_NUM] = MAKE_LAYER(WHU, NUM),
    [WHU_FUN] = MAKE_LAYER(WHU, FUN),
    [WHU_NPAD] = MAKE_LAYER(WHU, NPAD),
    [WHU_MOUSE] = MAKE_LAYER(WHU, MOUSE),

    [LHU_BASE] = MAKE_LAYER(LHU, HBDC),
    [LHU_LMOD] = MAKE_LAYER(LHU, LMOD),
    [LHU_RMOD] = MAKE_LAYER(LHU, RMOD),
    [LHU_NAV] = MAKE_LAYER(LHU, NAV),
    [LHU_NUM] = MAKE_LAYER(LHU, NUM),
    [LHU_FUN] = MAKE_LAYER(LHU, FUN),
    [LHU_NPAD] = MAKE_LAYER(LHU, NPAD),
    [LHU_MOUSE] = MAKE_LAYER(LHU, MOUSE),

    [MHU_BASE] = MAKE_LAYER(MHU, HBDC),
    [MHU_LMOD] = MAKE_LAYER(MHU, LMOD),
    [MHU_RMOD] = MAKE_LAYER(MHU, RMOD),
    [MHU_NAV] = MAKE_LAYER(MHU, NAV),
    [MHU_NUM] = MAKE_LAYER(MHU, NUM),
    [MHU_FUN] = MAKE_LAYER(MHU, FUN),
    [MHU_NPAD] = MAKE_LAYER(MHU, NPAD),
    [MHU_MOUSE] = MAKE_LAYER(MHU, MOUSE),
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf (keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
            record->event.key.row, record->event.key.col,
            keycode, name);
}


// Based on qmk_firmware\keyboards\crkbd\keymaps\default

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

void oled_render_layer_state(void) {
    if (IS_LAYER_ON_STATE(layer_state, SYSTEM))
        oled_write_ln_P(PSTR("SYSTEM"), false);
    else if (IS_LAYER_ON_STATE(layer_state, WHU_BASE))
        oled_write_ln_P(PSTR("Win HU BASE"), false);
    else if (IS_LAYER_ON_STATE(layer_state, WHU_LMOD))
        oled_write_ln_P(PSTR("Win HU LMOD"), false);
    else if (IS_LAYER_ON_STATE(layer_state, WHU_RMOD))
        oled_write_ln_P(PSTR("Win HU RMOD"), false);
    else if (IS_LAYER_ON_STATE(layer_state, WHU_NAV))
        oled_write_ln_P(PSTR("Win HU NAV"), false);
    else if (IS_LAYER_ON_STATE(layer_state, WHU_NUM))
        oled_write_ln_P(PSTR("Win HU NUM"), false);
    else if (IS_LAYER_ON_STATE(layer_state, WHU_FUN))
        oled_write_ln_P(PSTR("Win HU FUN"), false);
    else if (IS_LAYER_ON_STATE(layer_state, WHU_NPAD))
        oled_write_ln_P(PSTR("Win HU NPAD"), false);
    else if (IS_LAYER_ON_STATE(layer_state, WHU_MOUSE))
        oled_write_ln_P(PSTR("Win HU MOUSE"), false);
    else if (IS_LAYER_ON_STATE(layer_state, LHU_BASE))
        oled_write_ln_P(PSTR("Lin HU BASE"), false);
    else if (IS_LAYER_ON_STATE(layer_state, LHU_LMOD))
        oled_write_ln_P(PSTR("Lin HU LMOD"), false);
    else if (IS_LAYER_ON_STATE(layer_state, LHU_RMOD))
        oled_write_ln_P(PSTR("Lin HU RMOD"), false);
    else if (IS_LAYER_ON_STATE(layer_state, LHU_NAV))
        oled_write_ln_P(PSTR("Lin HU NAV"), false);
    else if (IS_LAYER_ON_STATE(layer_state, LHU_NUM))
        oled_write_ln_P(PSTR("Lin HU NUM"), false);
    else if (IS_LAYER_ON_STATE(layer_state, LHU_FUN))
        oled_write_ln_P(PSTR("Lin HU FUN"), false);
    else if (IS_LAYER_ON_STATE(layer_state, LHU_NPAD))
        oled_write_ln_P(PSTR("Lin HU NPAD"), false);
    else if (IS_LAYER_ON_STATE(layer_state, LHU_MOUSE))
        oled_write_ln_P(PSTR("Lin HU MOUSE"), false);   
    else if (IS_LAYER_ON_STATE(layer_state, MHU_BASE))
        oled_write_ln_P(PSTR("Mac HU BASE"), false);
    else if (IS_LAYER_ON_STATE(layer_state, MHU_LMOD))
        oled_write_ln_P(PSTR("Mac HU LMOD"), false);
    else if (IS_LAYER_ON_STATE(layer_state, MHU_RMOD))
        oled_write_ln_P(PSTR("Mac HU RMOD"), false);
    else if (IS_LAYER_ON_STATE(layer_state, MHU_NAV))
        oled_write_ln_P(PSTR("Mac HU NAV"), false);
    else if (IS_LAYER_ON_STATE(layer_state, MHU_NUM))
        oled_write_ln_P(PSTR("Mac HU NUM"), false);
    else if (IS_LAYER_ON_STATE(layer_state, MHU_FUN))
        oled_write_ln_P(PSTR("Mac HU FUN"), false);
    else if (IS_LAYER_ON_STATE(layer_state, MHU_NPAD))
        oled_write_ln_P(PSTR("Mac HU NPAD"), false);
    else if (IS_LAYER_ON_STATE(layer_state, MHU_MOUSE))
        oled_write_ln_P(PSTR("Mac HU MOUSE"), false);
    else
        oled_write_ln_P(PSTR("Unknown layer"), false);

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_ln_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM sequitap_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(sequitap_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}

#endif // OLED_ENABLE

layer_state_t one_shot_layers[] = {ONE_SHOT_LAYERS};
layer_state_t last_permanent_layer = 0;

layer_state_t layer_state_set_user(layer_state_t state) {
    layer_state_t layer = get_highest_layer(state);
    layer_state_t is_one_shot = false;
    size_t size = sizeof(one_shot_layers) / sizeof(*one_shot_layers);
    for (size_t i = 0; i < size; i++) {
        if (layer == one_shot_layers[i]) {
            is_one_shot = true;
            break;
        }
    }
    if (!is_one_shot)
        last_permanent_layer = layer;
    switch (layer) {
    case SYSTEM:
        rgblight_setrgb (0xFF,  0x00, 0x00);
        break;
    case LHU_BASE:
    case WHU_BASE:
    case MHU_BASE:
        rgblight_setrgb (0x00,  0x00, 0xFF);
        break;
    case LHU_NPAD:
    case WHU_NPAD:
    case MHU_NPAD:
        rgblight_setrgb (0x00,  0xFF, 0x00);
        break;
    case LHU_NAV:
    case WHU_NAV:
    case MHU_NAV:
        rgblight_setrgb (0x7A,  0x00, 0xFF);
        break;
    case LHU_MOUSE:
    case WHU_MOUSE:
    case MHU_MOUSE:
        rgblight_setrgb (0x00,  0xFF, 0xFF);
        break;        
    default:
        rgblight_setrgb (0x00,  0xFF, 0xFF);
        break;
    }
    return state;
}

uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
    case KC_R: return KC_L;
    }

    return KC_NO;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }

  switch(keycode) {
    RECORD_CASES(WHU)
    RECORD_CASES(LHU)
    RECORD_CASES(MHU)
  default:
      return true;
  }
}
