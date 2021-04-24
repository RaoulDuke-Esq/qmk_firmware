/* Copyright 2021 RaoulDuke-Esq
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

enum layer_names {
	_BASE,
	_ALT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
KC_ESC,        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, \

KC_A,    KC_B, KC_C,  KC_D,  KC_E,                              KC_F,  KC_G,                KC_H, KC_I, KC_J, KC_K, KC_L,            KC_M, KC_N, KC_O, \
         KC_P, KC_Q,  KC_R,  KC_S,                              KC_T,  KC_U,  KC_V,         KC_W, KC_X, KC_Y, KC_Z, KC_1, KC_2,      KC_3,       KC_4, \

KC_5,          KC_6,  KC_7,  KC_8,  KC_9,  KC_A,  KC_B,  KC_C,  KC_D,         KC_E,  KC_F,  KC_G,             KC_H, KC_I, KC_J,      KC_K, KC_L, KC_M, \
                                                                                                                                     KC_N, KC_O, KC_P, \
KC_Q,    KC_R, KC_S,  KC_T,  KC_U,  KC_V,  KC_W,          KC_X,  KC_Y,  KC_Z,  KC_1,  KC_2   KC_3, KC_4,      KC_5, KC_6, KC_7,      KC_8, KC_9, KC_A, \
KC_B,    KC_C, KC_D,  KC_E,  KC_F,  KC_G,  KC_H,          KC_I,  KC_J,  KC_K,  KC_L,  KC_M,  KC_N, KC_O,      KC_P, KC_Q, KC_R,      KC_S, KC_T, KC_U, \     
                                           KC_V,                                                              KC_W, KC_X, KC_Y,      KC_Z, KC_1
    	)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ALT] = LAYOUT(
KC_0,        KC_0, KC_0, KC_0, KC_0, KC_0, KC_0, KC_0, KC_0, KC_0, KC_0, \

KC_0,    KC_0, KC_0,  KC_0,  KC_0,                              KC_0,  KC_0,                KC_0, KC_0, KC_0, KC_0, KC_0,            KC_0, KC_0, KC_0, \
         KC_0, KC_0,  KC_0,  KC_0,                              KC_0,  KC_0,  KC_0,         KC_0, KC_0, KC_0, KC_0, KC_0, KC_0,      KC_0,       KC_0, \

KC_0,          KC_0,  KC_0,  KC_0,  KC_0,  KC_0,  KC_0,  KC_0,  KC_0,         KC_0,  KC_0,  KC_0,             KC_0, KC_0, KC_0,      KC_0, KC_0, KC_0, \
                                                                                                                                     KC_0, KC_0, KC_0, \
KC_0,    KC_0, KC_0,  KC_0,  KC_0,  KC_0,  KC_0,          KC_0,  KC_0,  KC_0,  KC_0,  KC_0   KC_0, KC_0,      KC_0, KC_0, KC_0,      KC_0, KC_0, KC_0, \
KC_0,    KC_0, KC_0,  KC_0,  KC_0,  KC_0,  KC_0,          KC_0,  KC_0,  KC_0,  KC_0,  KC_0,  KC_0, KC_0,      KC_0, KC_0, KC_0,      KC_0, KC_0, KC_0, \     
                                           KC_0,                                                              KC_0, KC_0, KC_0,      KC_0, KC_0
)

};