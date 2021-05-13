/* Copyright 2020 Purdea Andrei
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#define LOCK LGUI(LCTL(KC_Q))
#define MMIC HYPR(KC_M)
#define DICT HYPR(KC_D)
#define PTRS LGUI(KC_BSPC)
#define ETRS LGUI(LALT(LSFT(KC_BSPC)))
#define INFO LGUI(LCTL(KC_I))
#define DLS LGUI(LALT(KC_L))
#define SCAP LGUI(LSFT(KC_4))
#define SCRN LGUI(LSFT(KC_5))
#define PSTE LGUI(LALT(LSFT(KC_V)))
#define WLFT LALT(KC_LEFT)
#define WRTE LALT(KC_RIGHT)
#define DLFT LALT(KC_BSPC)
#define DRTE LALT(KC_DEL)
#define QUE LGUI(LSFT(KC_B))
#define SLFT LCTL(KC_LEFT)
#define SRTE LCTL(KC_RIGHT)
#define SPK HYPR(KC_S)
#define COPY LGUI(KC_C)

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
    _FN2
};

// Defines the keycodes used by our macros in process_record_user


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT_ansi_hhkb_split_shift_split_backspace(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,    PSTE,     KC_HOME,  KC_PGUP,
        KC_TAB,    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,        KC_DEL,   KC_END,   KC_PGDN,
        KC_LGUI,      KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,            KC_MPRV,  KC_MPLY,  KC_MNXT,
        KC_LSFT,         KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, MO(_FN),   KC_VOLD,  KC_UP,    KC_VOLU,
        KC_LCTL, KC_LGUI, KC_LALT,                      KC_SPC,                            DICT, LOCK, MMIC,     KC_LEFT,  KC_DOWN,  KC_RIGHT
    ),
    [_FN] = LAYOUT_ansi_hhkb_split_shift_split_backspace(
        KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,   KC_F9, KC_F10,    KC_F11, KC_F12, KC_INS, KC_DEL,    PTRS,  INFO, SCAP,
        KC_NO,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP, KC_NO, KC_DEL,          ETRS,  DLS,  SCRN,
        _______,     KC_VOLD, KC_VOLU, KC_MUTE, KC_EJCT, KC_NO, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RIGHT, KC_NO,  DLFT,  QUE,  DRTE,
        _______,         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PPLS, KC_PMNS, KC_END, KC_PGDN, KC_DOWN, _______, _______,      WLFT,  KC_F3,   WRTE,
        _______, KC_NO, _______,                             MO(_FN2),                           _______, KC_NO, _______,      SLFT,  KC_F13,   SRTE
    ),
    [_FN2] = LAYOUT_ansi_hhkb_split_shift_split_backspace(
        RESET, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______,
        _______,     _______, _______, EEPROM_RESET, RESET, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______,
        _______,         _______, _______, DEBUG, _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______,
        _______,             _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______,                             _______,                                       _______, _______, _______,          _______, _______, _______
    )
};


/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
