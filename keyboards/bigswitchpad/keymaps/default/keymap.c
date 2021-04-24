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
*/

#include QMK_KEYBOARD_H

#define ______ KC_TRNS

enum {
  TD_RGB = 0
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
  [TD_RGB] = ACTION_TAP_DANCE_FN_ADVANCED (NULL, dance_rgb_finished, dance_rgb_reset)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	  LAYOUT(
		   TD(TD_RGB), KC_INSERT, KC_HOME, KC_PGUP, 
		    _______, KC_DELETE, KC_END, KC_PGDOWN, 
		    _______, KC_LSHIFT, KC_PSCREEN, KC_PAUSE, 
		    _______, KC_LCTRL, KC_LALT, MO(1)),

	  LAYOUT(
		    _______, RGB_SAI, RGB_VAI, RGB_HUI, 
		    _______, RGB_SAD, RGB_VAD, RGB_HUD, 
		    _______, RGB_TOG, _______, RGB_MODE_FORWARD, 
		    _______, _______, _______, _______),
};


