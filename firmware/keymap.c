// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_3x3(
        LCTL(KC_C),    LCTL(KC_V), LCTL(KC_X),
        LCTL(KC_T), LCTL(KC_W), LSG(KC_T),
        LCTL(KC_A),       KC_2,       KC_BSPC
    )
};
