#include QMK_KEYBOARD_H
#include "version.h"
#include "print.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#    define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
    RGB_SLD = ZSA_SAFE_RANGE,
    ST_MACRO_0,
    ST_MACRO_1,
    ST_MACRO_2,
    ST_MACRO_3,
};

enum tap_dance_codes {
    DANCE_0,
    DANCE_1,
    DANCE_2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TRANSPARENT, KC_EQUAL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_TAB, KC_Q, KC_W, KC_D, KC_R, KC_T, KC_TRANSPARENT, KC_TRANSPARENT, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_ESCAPE, KC_A, KC_S, KC_E, KC_F, KC_G, TD(DANCE_0), TD(DANCE_1), KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOTE, KC_LEFT_SHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_TRANSPARENT, KC_LEFT_CTRL, KC_PAGE_UP, KC_PGDN, KC_TRANSPARENT, KC_LEFT_ALT, KC_LEFT_GUI, TD(DANCE_2), KC_LEFT, KC_UP, KC_DOWN, KC_RIGHT, KC_TRANSPARENT, KC_SPACE, KC_BSPC, KC_DELETE, OSL(2), KC_ENTER, KC_SPACE),
    [1] = LAYOUT_moonlander(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /*Left Row 0 (1-5)*/ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /*Right Row 0(6-0)*/ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /*Left Row 1(Q-T)*/ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /*Right Row 1(Y-P)*/ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /*Left Row 2(A-G)*/ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /*Right Row 2(H-L)*/ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, /*Left Row 3(Z-B)*/ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                            KC_TRANSPARENT, KC_TRANSPARENT, /*Right Row 3(N-?)*/ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, OSL(3), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [2] = LAYOUT_moonlander(KC_TRANSPARENT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRANSPARENT, KC_F12, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LABK, KC_RABK, KC_TRANSPARENT, QK_BOOT, KC_TRANSPARENT, KC_KP_MINUS, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_ASTERISK, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRC, KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR, KC_RBRC, KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_PLUS, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LABK, KC_RABK, KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_SLASH, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_COMMA, KC_KP_DOT, KC_KP_0, KC_KP_EQUAL, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0), KC_TRANSPARENT, KC_TRANSPARENT),
    [3] = LAYOUT_moonlander(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0, ST_MACRO_1, ST_MACRO_2, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_3, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
};

enum combo_events { CE_LPAREN, CE_RPAREN, CE_LCBR, CE_RCBR, CE_LBRC, CE_RBRC, CE_LABK, CE_RABK };

enum combo_layer {
    // CL_START = 0,
    CL_LAYER1 = 1,
    // CL_END,
};

const uint16_t PROGMEM combo0[] = {KC_E, KC_S, COMBO_END};
const uint16_t PROGMEM combo1[] = {KC_E, KC_F, COMBO_END};
const uint16_t PROGMEM combo2[] = {KC_K, KC_J, COMBO_END};
const uint16_t PROGMEM combo3[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo4[] = {KC_W, KC_D, COMBO_END};
const uint16_t PROGMEM combo5[] = {KC_D, KC_R, COMBO_END};
const uint16_t PROGMEM combo6[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM combo7[] = {KC_I, KC_O, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_LPRN), COMBO(combo1, KC_RPRN), COMBO(combo2, KC_LCBR), COMBO(combo3, KC_RCBR), COMBO(combo4, KC_LBRC), COMBO(combo5, KC_RBRC), COMBO(combo6, KC_LABK), COMBO(combo7, KC_RABK),
};


layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case CL_LAYER1:
            if (!is_combo_enabled()) {
                combo_enable();
            }
            break;
        default:
            if (is_combo_enabled()) {
                combo_disable();
            }
            break;
    }
    return state;
}

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
    RGB   rgb = hsv_to_rgb(hsv);
    float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
    return (RGB){f * rgb.r, f * rgb.g, f * rgb.b};
}

void keyboard_post_init_user(void) {
    // debug_enable = true;
    // debug_matrix = true;
    rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 245, 245}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [2] = {{74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206},
           {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}},

    [3] = {{152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}},

};

void set_layer_color(int layer) {
    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB rgb = hsv_to_rgb_with_value(hsv);
            rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        }
    }
}

bool rgb_matrix_indicators_user(void) {
    if (rawhid_state.rgb_control) {
        return false;
    }
    if (!keyboard_config.disable_layer_led) {
        switch (biton32(layer_state)) {
            case 0:
                set_layer_color(0);
                break;
            case 2:
                set_layer_color(2);
                break;
            case 3:
                set_layer_color(3);
                break;
            default:
                if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
                    rgb_matrix_set_color_all(0, 0, 0);
                }
        }
    } else {
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
            rgb_matrix_set_color_all(0, 0, 0);
        }
    }

    return true;
}

typedef struct {
    bool    is_press_action;
    uint8_t step;
} tap;

enum { SINGLE_TAP = 1, SINGLE_HOLD, DOUBLE_TAP, DOUBLE_HOLD, DOUBLE_SINGLE_TAP, MORE_TAPS };

static tap dance_state[3];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed)
            return SINGLE_TAP;
        else
            return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted)
            return DOUBLE_SINGLE_TAP;
        else if (state->pressed)
            return DOUBLE_HOLD;
        else
            return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
    }
    if (state->count > 3) {
        tap_code16(KC_HOME);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP:
            register_code16(KC_HOME);
            break;
        case DOUBLE_TAP:
            register_code16(KC_INSERT);
            break;
        case SINGLE_HOLD:
            register_code16(LCTL(KC_HOME));
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_HOME);
            register_code16(KC_HOME);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP:
            unregister_code16(KC_HOME);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_INSERT);
            break;
        case SINGLE_HOLD:
            unregister_code16(LCTL(KC_HOME));
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_HOME);
            break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_END);
        tap_code16(KC_END);
        tap_code16(KC_END);
    }
    if (state->count > 3) {
        tap_code16(KC_END);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP:
            register_code16(KC_END);
            break;
        case DOUBLE_TAP:
            register_code16(KC_END);
            break;
        case SINGLE_HOLD:
            register_code16(LCTL(KC_END));
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_END);
            register_code16(KC_END);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP:
            unregister_code16(KC_END);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_END);
            break;
        case SINGLE_HOLD:
            unregister_code16(LCTL(KC_END));
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_END);
            break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
    }
    if (state->count > 3) {
        tap_code16(KC_PSCR);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP:
            register_code16(KC_PSCR);
            break;
        case DOUBLE_TAP:
            register_code16(LCTL(LSFT(KC_N)));
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_PSCR);
            register_code16(KC_PSCR);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP:
            unregister_code16(KC_PSCR);
            break;
        case DOUBLE_TAP:
            unregister_code16(LCTL(LSFT(KC_N)));
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_PSCR);
            break;
    }
    dance_state[2].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
    [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
    [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
    [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ST_MACRO_0:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(10) SS_TAP(X_EQUAL));
            }
            break;
        case ST_MACRO_1:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(10) SS_TAP(X_EQUAL));
            }
            break;
        case ST_MACRO_2:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_KP_PLUS) SS_DELAY(10) SS_TAP(X_EQUAL));
            }
            break;
        case ST_MACRO_3:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));
            }
            break;

        case RGB_SLD:
            if (rawhid_state.rgb_control) {
                return false;
            }
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
    }
    return true;
}
