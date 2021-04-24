// Below layout is based upon /u/That-Canadian's planck layout
#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define ITUNES 0


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-------------.
 * |   1  |  2   |
 * |------+------|
 * |   3  |  4   |
 * |------+------|
 * |      5      |
 * |------+------|
 * |  6   |  7   |
 * `-------------'
 */
[ITUNES] = LAYOUT( \
    KC_MEDIA_STOP,	      KC__MUTE, \
    KC_MEDIA_REWIND,	      KC_MEDIA_FAST_FORWARD, \
    KC_MEDIA_PLAY_PAUSE,      _______, \
    KC__VOLDOWN,	      KC__VOLUP  \
)

};

void matrix_init_user(void) {

}
