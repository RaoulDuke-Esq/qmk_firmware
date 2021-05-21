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
    [0] = LAYOUT_m0116_ansi(
                                                      MMIC,
    KC_ESC,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC,       KC_NLCK, KC_EQL, KC_PSLS, KC_PAST,
    KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC,                KC_P7,   KC_P8,  KC_P9,   KC_PPLS,
    KC_LGUI, KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT,          KC_ENT,        KC_P4,   KC_P5,  KC_P6,   KC_PMNS,
    KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT, LT(1,KC_SLSH),             KC_LSFT,       KC_P1,   KC_P2,  KC_P3,
    MO(1),   KC_LALT, KC_LCTL,KC_GRV,         KC_SPC,                 KC_BSLS, KC_LEFT, KC_RIGHT, KC_DOWN, KC_UP,                KC_P0,           KC_PDOT, KC_PENT
    ),

    [1] = LAYOUT_m0116_ansi(
                                                      RESET,  
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,    LOCK, INFO,    DLS,     SPK,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, WLFT,    WRTE,               PSTE, KC_HOME, KC_PGUP, SCAP,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   DLFT,  DRTE,             KC_ENT,    COPY, KC_END,  KC_PGDN, SCRN,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,   SLFT, KC_F3,   SRTE,
    _______, _______, _______,DICT,           KC_SPC,                 KC_MPLY, KC_MPRV, KC_MNXT, KC_VOLD, KC_VOLU,                  PTRS,          QUE,     ETRS
    ),

};