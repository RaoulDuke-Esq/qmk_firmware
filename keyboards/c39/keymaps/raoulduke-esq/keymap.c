#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define MARCO 0
#define FORCE LGUI(LALT(KC_ESC))

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
	TD_TRASH = 0
};

qk_tap_dance_action_t tap_dance_actions[] = {
	[TD_TRASH] = ACTION_TAP_DANCE_DOUBLE(HYPR(KC_L), LGUI(LALT(LSFT(KC_BSPC))))
};






const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Macro
 * ,--------------  ---------------------------------------------------------------.  ,-------------.
 * |  Esc | Quit |  |Safari|Pages |Numbrs| FCPX |Panic |X-Code| Mail |Termnl| Calc |  | Dim  |Bright|
 * |------+------|  +------+------+------+------+------+------+------+------+------+  |------+------|
 * |Sleep | Save |  |L Spc |R Spc |App W |Cls W | Enter|Tranny| Home |Prefs |Force |  | Play | Stop |
 * |------+------|  +------+------+------+------+------+------+------+------+------+  |------+------|
 * |Trash |      |  |  4K  |  LG  |    L Space  | MicM |  R Space    |VOLdn |VOLUp |  |Prev  | Next |
 * `-------------'  '--------------------------------------------------------------'  `-------------'
 */
[MARCO] = LAYOUT(
    KC_ESC,     LGUI(KC_Q),    HYPR(KC_A),    HYPR(KC_B),    HYPR(KC_C),    HYPR(KC_D), PANIC,      HYPR(KC_E), HYPR(KC_F), HYPR(KC_G),    HYPR(KC_H),            KC_BRMD,   KC_BRMU,
    LGUI(KC_Z), LGUI(KC_S),    LCTL(KC_LEFT), LCTL(KC_RGHT), LCTL(KC_DOWN), LGUI(KC_W), KC_ENT,     HYPR(KC_O), HYPR(KC_P), HYPR(KC_R),    FORCE,                 KC_SLEP, HYPR(KC_I),
    LGUI(KC_Z), HYPR(KC_S),    HYPR(KC_T),    HYPR(KC_U),    KC_F9,         KC_F9,      HYPR(KC_K), KC_F11,     KC_F11,     KC_F5,         HYPR(KC_N),            HYPR(KC_M),      TD(TD_TRASH)
),

};
