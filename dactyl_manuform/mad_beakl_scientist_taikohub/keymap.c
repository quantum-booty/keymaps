#include QMK_KEYBOARD_H

#define UNDO LCTL(KC_Z)
#define CUT LCTL(KC_X)
#define COPY LCTL(KC_C)
#define PASTE LCTL(KC_V)

enum custom_keycodes {
    WRITE_VIM = SAFE_RANGE,
    QUIT_VIM,
    RIGHT_ARROW,
    HARPOON_1,
    HARPOON_2,
    HARPOON_3,
    HARPOON_4,
    HARPOON_5,
    HARPOON_ADD,
    HARPOON_MENU,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case WRITE_VIM:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESC) ":w" SS_TAP(X_ENT));
        } else {
        }
        break;

    case QUIT_VIM:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESC) ":q" SS_TAP(X_ENT));
        } else {
        }
        break;

    case RIGHT_ARROW:
        if (record->event.pressed) {
           SEND_STRING("->");
        }
        break;

    case HARPOON_1:
        if (record->event.pressed) {
           SEND_STRING(" H1");
        }
        break;

    case HARPOON_2:
        if (record->event.pressed) {
           SEND_STRING(" H2");
        }
        break;

    case HARPOON_3:
        if (record->event.pressed) {
           SEND_STRING(" H3");
        }
        break;

    case HARPOON_4:
        if (record->event.pressed) {
           SEND_STRING(" H4");
        }
        break;

    case HARPOON_5:
        if (record->event.pressed) {
           SEND_STRING(" H5");
        }
        break;

    case HARPOON_ADD:
        if (record->event.pressed) {
           SEND_STRING(" Ha");
        }
        break;

    case HARPOON_MENU:
        if (record->event.pressed) {
           SEND_STRING(" Hm");
        }
        break;

    }
    return true;
};


enum layers {
  BASE,
  TILING_WM,
  SHORTCUTS,
  SYMBOLS,
  FUNCTIONS,
};


# define BASE 0
# define TILING_WM 1
# define SHORTCUTS 2
# define SYMBOLS 3
# define FUNCTIONS 4


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_5x6(
        LGUI(KC_F), WRITE_VIM, KC_LCBR, KC_LPRN, KC_LBRC, KC_PERC,               _______, KC_RBRC, KC_RPRN, KC_RCBR, QUIT_VIM, KC_DELETE,
        KC_TAB, KC_Q, KC_Y, KC_O, KC_U, KC_Z,                                          KC_W, KC_D, KC_N, KC_C, KC_B, KC_COLON,
        LSFT_T(KC_BSPC), KC_H, KC_I, KC_E, KC_A, KC_UNDS,                              KC_G, KC_T, KC_R, KC_S, KC_P, LSFT_T(KC_EQUAL),
        KC_LCTL, LT(2,KC_QUOTE), LT(2,KC_COMMA), KC_J, KC_K, KC_X,                    KC_V, KC_M, KC_L, KC_F, LT(4,KC_SLASH), RCTL_T(KC_SEMICOLON),
                  KC_VOLD, KC_VOLU,                                                                           KC_LEFT, KC_RIGHT,
                                             LT(1,KC_ESCAPE), LT(3,KC_DOT),               KC_SPACE, LT(4,KC_ENTER),
                                                     KC_LGUI, KC_LALT,                           KC_LGUI,  _______,
                                                     _______, _______,                          _______,_______
    ),

    [TILING_WM] = LAYOUT_5x6(
    LALT(LSFT(KC_TAB)), _______, _______, _______, _______, _______,                    _______, LGUI(LSFT(KC_F1)), LGUI(LSFT(KC_F2)), LGUI(LSFT(KC_F3)), LGUI(LSFT(KC_F4)), LGUI(LSFT(KC_F5)),
    LALT(KC_TAB), _______, _______, _______, _______, _______,                         LGUI(KC_W), LGUI(KC_D), LGUI(KC_UP), LGUI(KC_C), LGUI(KC_J), LGUI(LSFT(KC_F6)),
    LCTL(KC_BSPC), LCTL(KC_W), _______, KC_LSFT, LCTL(KC_A), _______,             LGUI(KC_G), LGUI(KC_LEFT), LGUI(KC_DOWN), LGUI(KC_RIGHT), LGUI(KC_P), LGUI(LSFT(KC_F7)),
    LCTL(LSFT(KC_Z)), UNDO, CUT, COPY, PASTE, LGUI(KC_X),                               LGUI(KC_V), LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5),
                    _______, _______,                                                                                         LGUI(KC_F1), LGUI(KC_F1),
                                                 _______, _______,                              LGUI(KC_SPACE), LGUI(KC_ENTER),
                                                     _______,_______,                      _______,  _______,
                                                     _______, _______,                     _______, _______
    ),

    [SHORTCUTS] = LAYOUT_5x6(
      _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
      _______, _______,     _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
      _______, _______,  _______, _______, _______, _______,                           _______, HARPOON_1, HARPOON_2, HARPOON_3, HARPOON_4, HARPOON_5,
      _______, _______, _______, RCTL(KC_J), RCTL(KC_K), _______,                      _______, HARPOON_ADD, HARPOON_MENU, _______, _______, _______,
                                   _______, _______,                                                    _______, _______,
                                                 _______, _______,                            _______, _______,
                                                     _______,_______,                      _______,  _______,
                                                     _______, _______,                     _______, _______
    ),

    [SYMBOLS] = LAYOUT_5x6(
      QK_BOOTLOADER, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
      _______, KC_TILD, KC_AT, KC_PERC, KC_EXLM, KC_GRAVE,                             KC_AMPR, KC_7, KC_8, KC_9, KC_BSLS, KC_PIPE,
      _______, KC_PLUS, KC_CIRC, KC_COLN, KC_DLR, KC_HASH,                              KC_ASTR, KC_4, KC_5, KC_6, KC_MINUS, RIGHT_ARROW,
      _______, KC_DQUO, KC_COMMA, KC_J, KC_K, KC_LABK,                                 KC_RABK, KC_1, KC_2, KC_3, KC_QUES,  KC_DOT,
                                      _______, _______,                                                  _______, _______,
                                               _______, _______,                            _______, KC_0,
                                                     _______,_______,                  _______,  _______,
                                                     _______, _______,                 _______, _______
    ),
    [FUNCTIONS] = LAYOUT_5x6(
      _______, _______, _______, _______, _______, _______,                          _______, _______, _______, _______, _______, _______,
      _______, KC_F12, KC_F7, KC_F8, KC_F9, _______,                                 _______, KC_HOME, KC_UP, KC_END, _______, _______,
      _______, KC_F11, KC_F4, KC_F5, KC_F6, _______,                                 _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______,
      _______, KC_F10, KC_F1, KC_F2, KC_F3, _______,                                 _______, LCTL(KC_LEFT), KC_CAPS_LOCK, RCTL(KC_RIGHT), _______, _______,
                                      _______, _______,                                                _______, _______,
                                                 _______, _______,                       _______, _______,
                                                     _______,_______,                _______,  _______,
                                                     _______, _______,               _______, _______
    ),
}  ;

