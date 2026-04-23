// SPDX-License-Identifier: GPL-2.0-or-later
// Corne v4.1 keymap with RGB layer indicators.
// Layer colors update in real time; brightness follows your encoder setting.
// Vial loads your saved layout from EEPROM on boot, so this default keymap
// is only used if EEPROM has never been written (brand-new flash).

#include QMK_KEYBOARD_H

// ---------------------------------------------------------------------------
// Default layout (Vial overrides from EEPROM after first .vil load)
// LAYOUT_split_3x6_3_ex2: 7+7+6+3 keys per side = 46 total
// Argument order matches physical left-to-right position.
// Right half inner column (col 6) comes first, outer col (col 0) comes last.
// ---------------------------------------------------------------------------
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer 0 – QWERTY base
    [0] = LAYOUT_split_3x6_3_ex2(
        //  outer   main row                      enc-adj
        KC_ESC,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LALT,
        KC_TAB,  KC_A, KC_S, KC_D, KC_F, KC_G, TG(1),
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,
                       KC_LCTL, MO(1), KC_SPC,

        //  enc-adj  main row                      outer
        KC_RCTL, KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_BSPC,
        KC_RSFT, KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT,
                       KC_N,  KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_DEL,
        KC_ENT,  MO(2), KC_RGUI
    ),

    // Layer 1 – Navigation / Numbers
    [1] = LAYOUT_split_3x6_3_ex2(
        KC_TAB,  KC_NO,   KC_NO,   KC_UP,   KC_NO,    KC_CAPS, KC_LCTL,
        KC_LCTL, KC_NO,   KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO,   TO(0),
        KC_LSFT, KC_LPRN, KC_RPRN, KC_NO,   KC_NO,    KC_NO,
                          KC_LGUI, KC_TRNS, KC_SPC,

        KC_RCTL, KC_NO, KC_7, KC_8, KC_9, KC_NO,   KC_BSPC,
        KC_RALT, KC_NO, KC_4, KC_5, KC_6, KC_PMNS, KC_NO,
                        KC_1, KC_2, KC_3, KC_PMNS,  KC_TRNS, KC_NO,
        KC_ENT,  KC_0, KC_RGUI
    ),

    // Layer 2 – Symbols
    [2] = LAYOUT_split_3x6_3_ex2(
        KC_TAB,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_LCTL,
        KC_LCTL, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LALT,
        KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                          KC_LGUI, KC_TRNS, KC_SPC,

        KC_RCTL, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
        KC_RALT, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
                          KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
        KC_ENT,  KC_TRNS, KC_RGUI
    ),

    // Layer 3 – RGB / Config  (red warning color – QK_BOOT lives here)
    [3] = LAYOUT_split_3x6_3_ex2(
        QK_BOOT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO,   KC_NO, KC_NO,
        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_NO,   KC_NO,
                          KC_LGUI, KC_TRNS, KC_SPC,

        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_ENT, KC_TRNS, KC_RGUI
    ),

    // Layers 4-5 – spare / all transparent
    [4] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS,

        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [5] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS,

        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS
    ),
};

// ---------------------------------------------------------------------------
// Encoder map – Vial stores per-layer encoder bindings in EEPROM.
// These defaults will be overwritten by your .vil on first load.
// ---------------------------------------------------------------------------
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(RGB_MOD,  RGB_RMOD),
            ENCODER_CCW_CW(RGB_HUI,  RGB_HUD),
            ENCODER_CCW_CW(RGB_VAI,  RGB_VAD),
            ENCODER_CCW_CW(RGB_SAI,  RGB_SAD) },
    [1] = { ENCODER_CCW_CW(RGB_MOD,  RGB_RMOD),
            ENCODER_CCW_CW(RGB_HUI,  RGB_HUD),
            ENCODER_CCW_CW(RGB_VAI,  RGB_VAD),
            ENCODER_CCW_CW(RGB_SAI,  RGB_SAD) },
    [2] = { ENCODER_CCW_CW(RGB_MOD,  RGB_RMOD),
            ENCODER_CCW_CW(RGB_HUI,  RGB_HUD),
            ENCODER_CCW_CW(RGB_VAI,  RGB_VAD),
            ENCODER_CCW_CW(RGB_SAI,  RGB_SAD) },
    [3] = { ENCODER_CCW_CW(RGB_MOD,  RGB_RMOD),
            ENCODER_CCW_CW(RGB_HUI,  RGB_HUD),
            ENCODER_CCW_CW(RGB_VAI,  RGB_VAD),
            ENCODER_CCW_CW(RGB_SAI,  RGB_SAD) },
    [4] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [5] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};
#endif

// ---------------------------------------------------------------------------
// RGB layer indicator
//
// Layer 0 (QWERTY) : animation runs normally – no override
// Layer 1 (Nav)    : solid CYAN     (hue 128)
// Layer 2 (Symbols): solid PURPLE   (hue 191)
// Layer 3 (Config) : solid RED      (hue 0)   – caution, QK_BOOT is here!
//
// Brightness tracks whatever the user has set via the encoder (hsv.v),
// so the visual intensity stays consistent with their preference.
// ---------------------------------------------------------------------------
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    uint8_t layer = get_highest_layer(layer_state | default_layer_state);

    if (layer == 0) {
        return false; // let the selected animation run on the base layer
    }

    uint8_t hue;
    switch (layer) {
        case 1:  hue = 128; break; // cyan  – navigation
        case 2:  hue = 191; break; // purple – symbols
        case 3:  hue = 0;   break; // red   – config / boot danger zone
        default: return false;     // unknown layers fall through to animation
    }

    HSV hsv = {hue, 255, rgb_matrix_config.hsv.v};
    RGB rgb  = hsv_to_rgb(hsv);

    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_INDICATOR_SET_COLOR(i, rgb.r, rgb.g, rgb.b);
    }
    return false;
}
