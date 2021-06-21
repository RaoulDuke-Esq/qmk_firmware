
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
 *
 *     +---+---+---+---+
 *     |   |   |   |   |
 * +---+---------------+---+
 * |   |   |   |   |   |   |
 * +---+---------------+---+
 * |   |   |   |   |   |   |
 * +---+---------------+---+
 * |   |   |   |   |   |   |
 * +---+---------------+---+
 * |   |   |   |   |   |   |
 * +---+---------------+---+
 *     |   |   |   |   |
 *     +---+---+---+---+
 *
 */

  [0] = LAYOUT(
    TO(0), TO(1), TO(2), TO(3), \
    INFO, DLS, SCAP, SCRN, PTRS, ETRS, \
    QUE, COPY, PSTE, KC_F3, KC_F13, KC_F12, \
    WLFT, WRTE, SLFT, SRTE, SLFT, DRTE, \
    KC_VOLD, KC_MUTE, KC_VOLU, KC_MPRV, KC_MPLY, KC_MNXT, \
    DICT, SPK, LOCK, MMIC \
  ),
  [1] = LAYOUT(
    TO(0), TO(1), TO(2), TO(3), \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO \
  ),
  [2] = LAYOUT(
    TO(0), TO(1), TO(2), TO(3), \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO \
  ),  
  [3] = LAYOUT(
    TO(0), TO(1), TO(2), TO(3), \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, RESET \
  ),
} ;


#ifdef LED_MATRIX_ENABLE

#include "led_matrix.h"

// Light the last key hit (no fade possible with only on/off).
static uint8_t last_led_index = 0xFF;

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
        // No need for all of process_led_matrix, since just tracking this one.
    if (record->event.pressed) {
        uint8_t led[1];
        if (led_matrix_map_row_column_to_led(record->event.key.row, record->event.key.col, led) > 0) {
            last_led_index = led[0];
        }
    }

    return true;

}

void led_matrix_indicators_kb(void) {
    for (uint8_t i = 0; i < DRIVER_LED_TOTAL; i++) {
        led_matrix_set_value(i, i == last_led_index ? LED_MATRIX_MAXIMUM_BRIGHTNESS : 0);
    }
}

#endif
