#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        UG_TOGG,              UG_NEXT,              KC_MEDIA_PREV_TRACK,
        KC_MEDIA_NEXT_TRACK,  LCTL(KC_C),           LCTL(KC_V),
        LCTL(KC_Z),           LCTL(KC_Y),            KC_MEDIA_PLAY_PAUSE
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_AUDIO_VOL_UP);
    } else {
        tap_code(KC_AUDIO_VOL_DOWN);
    }

    return false;
}

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_clear();

    oled_write_ln_P(PSTR("DRAGON"), false);
    oled_write_ln_P(PSTR("--------"), false);

    oled_write_P(PSTR("RGB: "), false);
    oled_write_ln_P(
        rgblight_is_enabled() ? PSTR("ON") : PSTR("OFF"),
        false
    );

    char mode[10];
    snprintf(mode, sizeof(mode), "MODE: %d", rgblight_get_mode());
    oled_write_ln(mode, false);

    return false;
}
#endif