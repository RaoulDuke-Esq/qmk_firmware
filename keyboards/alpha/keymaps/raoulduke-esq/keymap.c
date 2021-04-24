#include QMK_KEYBOARD_H

#define MARCO 0
#define HOME 1
#define MODS 2
#define MODS2 3
#define OTHER 4


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

enum {
	TD_TRACKS = 0,
	TD_BRIGHT = 1,
	TD_LAYER = 2,
	TD_TRASH = 3

};

qk_tap_dance_action_t tap_dance_actions[] = {
	[TD_TRACKS] = ACTION_TAP_DANCE_DOUBLE(KC_MEDIA_FAST_FORWARD, KC_MEDIA_REWIND),
	[TD_BRIGHT] = ACTION_TAP_DANCE_DOUBLE(KC_PAUSE, KC_SCROLLLOCK),
	[TD_LAYER] = ACTION_TAP_DANCE_DOUBLE(TO(2), TO(0)),
	[TD_TRASH] = ACTION_TAP_DANCE_DOUBLE(HYPR(KC_L), LGUI(LALT(LSFT(KC_BSPC))))
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[MARCO] = LAYOUT(
		PANIC, HYPR(KC_A), HYPR(KC_B), HYPR(KC_C), HYPR(KC_D), HYPR(KC_E), HYPR(KC_F), HYPR(KC_G), HYPR(KC_H), TT(1),
		RESET, HYPR(KC_I), HYPR(KC_J), HYPR(KC_K), TD(TD_TRASH), KC_SYSTEM_SLEEP, HYPR(KC_M), TD(TD_BRIGHT), KC_F9, TD(TD_TRACKS),
		LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), KC_MEDIA_PLAY_PAUSE, KC__VOLDOWN, KC__MUTE, KC__VOLUP),

        [HOME] = LAYOUT(
                KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
                KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, TD(TD_LAYER),
                KC_Z, KC_X, KC_C, KC_V, MT(MOD_LSFT, KC_SPC), KC_B, KC_N, KC_M),

	[MODS] = LAYOUT(
		KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
		KC_BSPC, KC_ESC, KC_TAB, KC_SCLN, KC_QUOT, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, TO(3),
		KC_LCTL, KC_LGUI, KC_LALT, TO(1), MT(MOD_LSFT, KC_ENT), KC_COMM, KC_DOT, KC_SLSH),

	[MODS2] = LAYOUT(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
		KC_LSFT, KC_F11, KC_F12, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV, TO(4),
		RGB_VAI, RGB_VAD, RGB_HUI, TO(1), RGB_MOD, KC_MPLY, KC_VOLD, KC_VOLU),

	[OTHER] = LAYOUT(
		RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, TO(1), TO(0), KC_NO, KC_NO, KC_NO),
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}
