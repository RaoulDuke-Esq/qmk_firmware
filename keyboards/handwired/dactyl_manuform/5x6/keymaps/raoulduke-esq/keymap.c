/* A standard layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum dactyl_layers {
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST
};


#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_5x6(
     KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLS,
     KC_LSFT, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_EQL,
                      KC_LEFT,KC_RGHT,                                                       KC_UP,  KC_DOWN,
                                      LOWER,   KC_LSFT,                       KC_SPC,  RAISE,
                                      KC_ENT,  KC_LGUI,                       KC_END,  KC_BSPC,
                                      KC_LALT, KC_LCTL,                       KC_HOME, KC_DEL
),

[_LOWER] = LAYOUT_5x6(

     KC_TILD   ,KC_GRV    ,_______   ,_______      ,_______   ,_______,                        _______     , KC_CLR, KC_PEQL, KC_PERC,KC_PSLS,KC_BSPC,
     _______   ,_______   ,_______   ,KC_LBRC      ,KC_RBRC   ,KC_PIPE,                        _______     , KC_P7 , KC_P8  , KC_P9  ,KC_PAST,_______,
     _______   ,_______   ,_______   ,S(KC_LBRC)   ,S(KC_RBRC),_______,                       LGUI(S(KC_4)), KC_P4 , KC_P5  , KC_P6  ,KC_PMNS,_______,
     LGUI(KC_X),LGUI(KC_C),LGUI(KC_V),KC_LPRN      ,KC_RPRN   ,_______,                        LGUI(KC_SPC), KC_P1 , KC_P2  , KC_P3  ,KC_PPLS,KC_ENT ,
                           LGUI(KC_Z),LGUI(S(KC_Z)),                                                                 KC_P0  , KC_PDOT,
                                             _______,_______,                                                _______,_______,
                                             _______,_______,                                                KC_PGUP,_______,
                                             _______,_______,                                                KC_PGDN,_______

),

  [_RAISE] = LAYOUT_5x6(
       KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
                       _______,_______,                                                        _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______
  ),

  [_ADJUST] = LAYOUT_5x6(
      RESET  ,_______,_______,_______,_______,_______,			       _______,_______,_______,_______,_______,_______,
      _______,_______,_______,_______,_______,_______,			       _______,_______,_______,_______,_______,_______,
      _______,_______,_______,_______,_______,_______,			       _______,_______,_______,_______,_______,_______,
      _______,_______,_______,_______,_______,_______,			       _______,_______,_______,_______,_______,_______,
		      _______,_______,	                                                       _______,_______,
					      _______,_______,	           _______,_______,
					      _______,_______,	           _______,_______,
					      _______,_______,	           _______,_______

  ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
