#include QMK_KEYBOARD_H
#include "version.h"
/* #include "keymap_german.h" */
/* #include "keymap_nordic.h" */
/* #include "keymap_french.h" */
/* #include "keymap_spanish.h" */
/* #include "keymap_hungarian.h" */
/* #include "keymap_swedish.h" */
/* #include "keymap_br_abnt2.h" */
/* #include "keymap_canadian_multilingual.h" */
/* #include "keymap_german_ch.h" */
/* #include "keymap_jp.h" */
/* #include "keymap_bepo.h" */
/* #include "keymap_italian.h" */
/* #include "keymap_slovenian.h" */
/* #include "keymap_danish.h" */
/* #include "keymap_norwegian.h" */
/* #include "keymap_portuguese.h" */
/* #include "keymap_contributions.h" */

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)




enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  HSV_172_255_255,
  HSV_86_255_128,
  HSV_27_255_255,
  HSV_215_255_128,
  HSV_0_255_255,
  QUIT_VIM,
  WRITE_VIM,
  RIGHT_ARROW,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    LGUI(KC_F), WRITE_VIM, KC_LCBR,        KC_LPRN,        KC_LBRACKET,    QUIT_VIM, KC_TRANSPARENT,                                     KC_TRANSPARENT, KC_COLN,        KC_RBRACKET,    KC_RPRN,        KC_RCBR,        KC_SCOLON,      KC_DELETE,
    KC_TAB,         KC_Q,           KC_Y,           KC_O,           KC_U,           KC_Z,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_W,           KC_D,           KC_N,           KC_C,           KC_B,           LCTL(KC_F9),
    LSFT_T(KC_BSPACE),KC_H,         KC_I,           KC_E,           KC_A,           KC_UNDS,                                                                        KC_G,           KC_T,           KC_R,           KC_S,           KC_P,           LSFT_T(KC_EQUAL),
    KC_LCTRL,       LT(1,KC_QUOTE), LT(1,KC_COMMA), KC_J,           KC_K,           KC_X,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_V,           KC_M,           KC_L,           KC_F,           LT(6,KC_SLASH), RCTL_T(KC_SCOLON),
    KC_LGUI,        KC_LCTRL,       KC_LSHIFT,      KC_LALT,        LT(2,KC_ESCAPE),                                                                                                LT(6,KC_ENTER), KC_LEFT,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    TG(7),          TG(5),          KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,
                                                                                                                    TG(8),        KC_AUDIO_MUTE,
                                                                                    LT(3,KC_DOT),   KC_TRANSPARENT, KC_END,         KC_PGDOWN,      KC_TRANSPARENT, KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(KC_F1)),    LGUI(LSFT(KC_F2)),    LGUI(LSFT(KC_F3)),    LGUI(LSFT(KC_F4)), LGUI(LSFT(KC_F5)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_W),     LGUI(KC_D),     LGUI(KC_UP),    LGUI(KC_C),     LGUI(KC_J),     LGUI(LSFT(KC_F6)),
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_I),     LGUI(KC_E),     LGUI(KC_A),     KC_TRANSPARENT,                                                                 LGUI(KC_G),     LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_RIGHT), LGUI(KC_P),     LGUI(LSFT(KC_F7)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RCTL(KC_J),     RCTL(KC_K),     LGUI(KC_X),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_V),     LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     LGUI(KC_5),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 LGUI(KC_ENTER), LGUI(KC_F1),    LGUI(KC_F2),    LGUI(KC_F3),    KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_LSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_SPACE)
  ),
  [2] = LAYOUT_ergodox_pretty(
    LALT(LSFT(KC_TAB)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    LALT(KC_TAB),   QUIT_VIM,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PGUP,        KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, LCTL(KC_F10),
    LCTL(KC_BSPACE),LCTL(KC_W),     WRITE_VIM,     KC_TRANSPARENT, LCTL(KC_A),     KC_TRANSPARENT,                                                                 KC_PGDOWN,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    LCTL(LSFT(KC_Z)),KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_LEFT),  KC_CAPSLOCK,    LCTL(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TILD,        KC_AT,          KC_PERC,        KC_EXLM,        KC_GRAVE,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AMPR,        KC_7,           KC_8,           KC_9,           KC_BSLASH,      KC_PIPE,
    LT(4,KC_BSPACE),KC_PLUS,        KC_CIRC,        KC_COLN,        KC_DLR,         KC_HASH,                                                                        KC_ASTR,        KC_4,           KC_5,           KC_6,           KC_MINUS,       RIGHT_ARROW,
    KC_TRANSPARENT, KC_DQUO,        KC_COMMA,       KC_J,           KC_K,           KC_LABK,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_RABK,        KC_1,           KC_2,           KC_3,           KC_QUES,        KC_DOT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LSFT(KC_Q),     LSFT(KC_Y),     LSFT(KC_O),     LSFT(KC_U),     LSFT(KC_Z),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_W),     LSFT(KC_D),     LSFT(KC_N),     LSFT(KC_C),     LSFT(KC_B),     KC_TRANSPARENT,
    KC_TRANSPARENT, LSFT(KC_H),     LSFT(KC_I),     LSFT(KC_E),     LSFT(KC_A),     KC_TRANSPARENT,                                                                 LSFT(KC_G),     LSFT(KC_T),     LSFT(KC_R),     LSFT(KC_S),     LSFT(KC_P),     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_J),     LSFT(KC_K),     LSFT(KC_X),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_V),     LSFT(KC_M),     LSFT(KC_L),     LSFT(KC_F),     KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, RGB_SLD,        RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MOD,        WEBUSB_PAIR,
    KC_TRANSPARENT, HSV_172_255_255,HSV_86_255_128, HSV_27_255_255, HSV_215_255_128,HSV_0_255_255,                                                                  KC_TRANSPARENT, RGB_VAD,        RGB_HUD,        RGB_HUI,        RGB_VAI,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, LSFT(KC_F4),    LSFT(KC_F5),    LSFT(KC_F6),    LSFT(KC_F7),    LSFT(KC_F8),    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F12,         KC_F7,          KC_F8,          KC_F9,          LSFT(KC_F3),    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, LCTL(KC_F10),
    KC_TRANSPARENT, KC_F11,         KC_F4,          KC_F5,          KC_F6,          LSFT(KC_F2),                                                                    KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F10,         KC_F1,          KC_F2,          KC_F3,          LSFT(KC_F1),    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_LEFT),  KC_CAPSLOCK,    RCTL(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_QUOTE,       KC_COMMA,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE,                                                                                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_DELETE,
    KC_LSHIFT,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_TRANSPARENT,
    KC_LCTRL,       KC_GRAVE,       KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE,                                                                                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


bool suspended = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QUIT_VIM:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)  SS_LSFT(SS_TAP(X_SCOLON))  SS_TAP(X_Q)   SS_TAP(X_ENTER));

    }
    break;
    case WRITE_VIM:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)  SS_LSFT(SS_TAP(X_SCOLON))  SS_TAP(X_W)   SS_TAP(X_ENTER));

    }
    break;
    case RIGHT_ARROW:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS)  SS_LSFT(SS_TAP(X_DOT))  SS_TAP(X_SPACE));

    }
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }
    return state;

};

void keyboard_post_init_user(void) {
  layer_state_set_user(layer_state);
}
