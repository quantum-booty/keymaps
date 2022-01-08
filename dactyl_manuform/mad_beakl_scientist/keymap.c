#include QMK_KEYBOARD_H

#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)

enum custom_keycodes {
    WRITE = SAFE_RANGE,
    QUIT,
    ASSIGN,
    HARPOON_FILE_1,
    HARPOON_FILE_2,
    HARPOON_FILE_3,
    HARPOON_FILE_4,
    HARPOON_FILE_5,
    HARPOON_ADD_FILE,
    HARPOON_QUICK_MENU,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case WRITE:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESC) ":w" SS_TAP(X_ENT));
        } else {
        }
        break;

    case QUIT:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ESC) ":q" SS_TAP(X_ENT));
        } else {
        }
        break;

    case ASSIGN:
        if (record->event.pressed) {
           SEND_STRING("->");
        }
        break;

    case HARPOON_FILE_1:
        if (record->event.pressed) {
           SEND_STRING(" H1");
        }
        break;

    case HARPOON_FILE_2:
        if (record->event.pressed) {
           SEND_STRING(" H2");
        }
        break;

    case HARPOON_FILE_3:
        if (record->event.pressed) {
           SEND_STRING(" H3");
        }
        break;

    case HARPOON_FILE_4:
        if (record->event.pressed) {
           SEND_STRING(" H4");
        }
        break;

    case HARPOON_FILE_5:
        if (record->event.pressed) {
           SEND_STRING(" H5");
        }
        break;

    case HARPOON_ADD_FILE:
        if (record->event.pressed) {
           SEND_STRING(" Ha");
        }
        break;

    case HARPOON_QUICK_MENU:
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
        LGUI(KC_F), KC_TRANSPARENT, KC_LCBR, KC_LPRN, KC_LBRACKET, KC_TRANSPARENT,                         KC_TRANSPARENT, KC_RBRACKET, KC_RPRN, KC_RCBR, KC_COLON, KC_DELETE,
        KC_TAB, KC_Q, KC_Y, KC_O, KC_U, KC_Z,                                                              KC_W, KC_D, KC_N, KC_C, KC_B, KC_F12,
        LSFT_T(KC_BSPC), KC_H, KC_I, KC_E, KC_A, KC_UNDS,                                                KC_G, KC_T, KC_R, KC_S, KC_P, LSFT_T(KC_EQUAL),
        KC_LCTRL, LT(1,KC_QUOTE), LT(1,KC_COMMA), KC_J, KC_K, KC_X,                                        KC_V, KC_M, KC_L, KC_F, LT(4,KC_SLASH), RCTL_T(KC_SCOLON),
                  KC_LGUI, KC_LALT,                                                                                    KC_LEFT, KC_RIGHT,
                                             LT(2,KC_ESCAPE), LT(3,KC_DOT),                        KC_SPACE, LT(4,KC_ENTER),
                                                     KC_LALT, KC_HOME,                                    KC_END,  KC_DEL,
                                                     KC_LGUI, KC_GRV,                                   KC_LGUI, KC_LALT
    ),

    [TILING_WM] = LAYOUT_5x6(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(LSFT(KC_F1)), LGUI(LSFT(KC_F2)), LGUI(LSFT(KC_F3)), LGUI(LSFT(KC_F4)), LGUI(LSFT(KC_F5)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LGUI(KC_W), LGUI(KC_D), LGUI(KC_UP), LGUI(KC_C), LGUI(KC_J), LGUI(LSFT(KC_F6)),
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_I),     LGUI(KC_E),     LGUI(KC_A),     KC_TRANSPARENT,                                 LGUI(KC_G), LGUI(KC_LEFT), LGUI(KC_DOWN),  LGUI(KC_RIGHT), LGUI(KC_P),     LGUI(LSFT(KC_F7)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RCTL(KC_J),     RCTL(KC_K),     LGUI(KC_X),                                     LGUI(KC_V),     LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     LGUI(KC_5),
                    KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 LGUI(KC_F1),    LGUI(KC_F2),
                                                                 KC_TRANSPARENT, KC_LSHIFT,                                                          LGUI(KC_SPACE), LGUI(KC_ENTER),
                                                                     KC_TRANSPARENT,KC_TRANSPARENT,                                    KC_TRANSPARENT,  KC_TRANSPARENT,
                                                                     KC_TRANSPARENT, KC_TRANSPARENT,                                   KC_TRANSPARENT, KC_TRANSPARENT
    ),

    [SHORTCUTS] = LAYOUT_5x6(
      LALT(LSFT(KC_TAB)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
      LALT(KC_TAB),   QUIT,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                  KC_TRANSPARENT, LALT(KC_D), LALT(KC_N), LALT(KC_C), KC_TRANSPARENT, KC_TRANSPARENT,
      LCTL(KC_BSPACE),LCTL(KC_W),     WRITE,     KC_TRANSPARENT, LCTL(KC_A),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LALT(KC_T), LALT(KC_R), LALT(KC_S), KC_TRANSPARENT, KC_TRANSPARENT,
      LCTL(LSFT(KC_Z)),KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_TRANSPARENT,                                                           KC_TRANSPARENT, LALT(KC_M), LALT(KC_L), LALT(KC_F), KC_TRANSPARENT, KC_TRANSPARENT,
                                   KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT,
                                                                         KC_TRANSPARENT, KC_TRANSPARENT,                                                          KC_TRANSPARENT, LALT(KC_ENTER),
                                                                             KC_TRANSPARENT,KC_TRANSPARENT,                                    KC_TRANSPARENT,  KC_TRANSPARENT,
                                                                             KC_TRANSPARENT, KC_TRANSPARENT,                                   KC_TRANSPARENT, KC_TRANSPARENT
            ),

    [SYMBOLS] = LAYOUT_5x6(
      RESET, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
      KC_TRANSPARENT, KC_TILD,        KC_AT,          KC_PERC,        KC_EXLM,        KC_GRAVE,                                KC_AMPR,        KC_7,           KC_8,           KC_9,           KC_BSLASH,      KC_PIPE,
      KC_TRANSPARENT,KC_PLUS,        KC_CIRC,        KC_COLN,        KC_DLR,         KC_HASH,                                  KC_ASTR,        KC_4,           KC_5,           KC_6,           KC_MINUS,       ASSIGN,
      KC_TRANSPARENT, KC_DQUO,        KC_COMMA,       KC_J,           KC_K,           KC_LABK,                                 KC_RABK,        KC_1,           KC_2,           KC_3,           KC_QUES,        KC_DOT,
                                      KC_TRANSPARENT, KC_TRANSPARENT,                                                                                          KC_TRANSPARENT, KC_TRANSPARENT,
                                                                       KC_TRANSPARENT, KC_TRANSPARENT,                                                    KC_TRANSPARENT, KC_0,
                                                                             KC_TRANSPARENT,KC_TRANSPARENT,                                    KC_TRANSPARENT,  KC_TRANSPARENT,
                                                                             KC_TRANSPARENT, KC_TRANSPARENT,                                   KC_TRANSPARENT, KC_TRANSPARENT
    ),

    [FUNCTIONS] = LAYOUT_5x6(
      KC_TRANSPARENT, LSFT(KC_F4),    LSFT(KC_F5),    LSFT(KC_F6),    LSFT(KC_F7),    LSFT(KC_F8),                                               KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
      KC_TRANSPARENT, KC_F12,         KC_F7,          KC_F8,          KC_F9,          LSFT(KC_F3),                                            KC_TRANSPARENT, KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, LCTL(KC_F10),
      KC_TRANSPARENT, KC_F11,         KC_F4,          KC_F5,          KC_F6,          LSFT(KC_F2),                                                                    KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
      KC_TRANSPARENT, KC_F10,         KC_F1,          KC_F2,          KC_F3,          LSFT(KC_F1),                                                KC_TRANSPARENT, LCTL(KC_LEFT),  KC_CAPSLOCK,    RCTL(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,
                                      KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT,                                                
                                                                     KC_TRANSPARENT, KC_TRANSPARENT,                                                          KC_TRANSPARENT, KC_TRANSPARENT,
                                                                             KC_TRANSPARENT,KC_TRANSPARENT,                                    KC_TRANSPARENT,  KC_TRANSPARENT,
                                                                             KC_TRANSPARENT, KC_TRANSPARENT,                                   KC_TRANSPARENT, KC_TRANSPARENT
    ),
}  ;

