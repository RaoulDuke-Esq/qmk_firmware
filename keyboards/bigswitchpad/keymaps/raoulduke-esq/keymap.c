/*
Copyright 2018 QMK Contributors

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

#define SHOFF LALT(S(KC_S))
#define SHOON LALT(KC_S)
#define REPOF LALT(S(KC_R))
#define REPON LALT(KC_R)


*/

#include QMK_KEYBOARD_H
#define MAINW LGUI(KC_0)
#define _______ KC_TRNS
#define ITUNES 0
/*
#define NUMPAD 1
#define RGB 2
*/
enum custom_keycodes {

	PANIC = SAFE_RANGE
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case PANIC:
			if (record->event.pressed) {
				SEND_STRING(SS_DOWN(X_LGUI)SS_LALT("hm")SS_UP(X_LGUI)SS_TAP(X__MUTE));
			} else {
			}
			break;
	}
	return true;

};

/*
enum {
  TD_RGB = 0,
  TD_ENTR = 1
};

void dance_rgb_finished (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
  	case 1:
  		register_code (KC_MEDIA_PLAY_PAUSE);
  		break;
  	case 2:
  		register_code (KC_MEDIA_NEXT_TRACK);
  		break;
  	 case 3:
  		//rgblight_step();
  		break;
  	 case 4:
  		//rgblight_toggle();
  		break;

  }
};


void dance_rgb_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
  	case 1:
  		unregister_code (KC_MEDIA_PLAY_PAUSE);
  		break;
  	case 2:
  		unregister_code (KC_MEDIA_NEXT_TRACK);
  		break;


  }
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_RGB] = ACTION_TAP_DANCE_FN_ADVANCED (NULL, dance_rgb_finished, dance_rgb_reset),
  [TD_ENTR] = ACTION_TAP_DANCE_DOUBLE (KC_ENT, KC_CLR)
};

*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[ITUNES] = LAYOUT(
		    KC_MPLY, RGB_TOG,  RESET,       HYPR(KC_Q),
		    _______, MAINW,    PANIC,       HYPR(KC_S),
		    _______, KC__MUTE, KC__VOLUP,   HYPR(KC_M),
		    _______, KC_MPRV,  KC__VOLDOWN, KC_MNXT),

/*
	[ITUNES] = LAYOUT(
		    KC_MPLY, KC_MPRV, MAINW, KC_MNXT,
		    _______, SHOFF, KC__MUTE, SHOON,
		    _______, REPOF, KC__VOLUP, REPON,
		    _______, PANIC, KC__VOLDOWN, TO(1)),

  [NUMPAD] = LAYOUT(
        TD(TD_ENTR), KC_7, KC_8, KC_9,
        _______,    KC_4, KC_5, KC_6,
        _______,    KC_1, KC_2, KC_3,
        _______,    KC_0, KC_DOT, TO(2)),

	[RGB] = LAYOUT(
		    RESET,   RGB_HUD, RGB_M_P, RGB_HUI,
		    _______, RGB_M_R, RGB_M_G, RGB_M_K,
		    _______, RGB_VAI, RGB_M_B, RGB_M_SW,
		    _______, RGB_VAD, RGB_TOG, TO(0)),
*/
};
