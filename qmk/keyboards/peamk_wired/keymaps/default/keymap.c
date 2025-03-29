#include QMK_KEYBOARD_H

void keyboard_post_init_user(void) {
  debug_enable=true;
  debug_matrix=true;
}

enum custom_keycodes {
  R0C0 = SAFE_RANGE, R0C1, R0C2, R0C3, R0C4, R0C5, R0C6,
  R1C0, R1C1, R1C2, R1C3, R1C4, R1C5, R1C6,
  R2C0, R2C1, R2C2, R2C3, R2C4, R2C5, R2C6,
  R3C0, R3C1, R3C2, R3C3, R3C4, R3C5, R3C6,
  R4C0, R4C1, R4C2, R4C3, R4C4, R4C5, R4C6,
  R5C0, R5C1, R5C2, R5C3, R5C4, R5C5, R5C6,
  R6C0, R6C1, R6C2, R6C3, R6C4, R6C5, R6C6,
  R7C0, R7C1, R7C2, R7C3, R7C4, R7C5, R7C6,
  R8C0, R8C1, R8C2, R8C3, R8C4, R8C5, R8C6,
  R9C0, R9C1, R9C2, R9C3, R9C4, R9C5, R9C6,
  R10C0, R10C1, R10C2, R10C3, R10C4, R10C5, R10C6,
  R11C0, R11C1, R11C2, R11C3, R11C4, R11C5, R11C6,
  R12C0, R12C1, R12C2, R12C3, R12C4, R12C5, R12C6,
  R13C0, R13C1, R13C2, R13C3, R13C4, R13C5, R13C6
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
                 R0C0, R0C1, R0C2, R0C3, R0C4, R0C5, R0C6, R7C0, R7C1, R7C2, R7C3, R7C4, R7C5, R7C6,
                 R1C0, R1C1, R1C2, R1C3, R1C4, R1C5, R1C6, R8C0, R8C1, R8C2, R8C3, R8C4, R8C5, R8C6,
                 R2C0, R2C1, R2C2, R2C3, R2C4, R2C5, R2C6, R9C0, R9C1, R9C2, R9C3, R9C4, R9C5, R9C6,
                 R3C0, R3C1, R3C2, R3C3, R3C4, R3C5, R3C6, R10C0, R10C1, R10C2, R10C3, R10C4, R10C5, R10C6,
                 R4C0, R4C1, R4C2, R4C3, R4C4, R4C5, R4C6, R11C0, R11C1, R11C2, R11C3, R11C4, R11C5, R11C6,
                 R5C0, R5C1, R5C2, R5C3, R5C4, R5C5, R5C6, R12C0, R12C1, R12C2, R12C3, R12C4, R12C5, R12C6,
                 R6C0, R6C1, R6C2, R6C3, R6C4, R6C5, R6C6, R13C0, R13C1, R13C2, R13C3, R13C4, R13C5, R13C6
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed && keycode >= R0C0 && keycode <= R13C6) {
      // Write out the key's matrix position
      int row = (keycode - R0C0) / 7;
      int column = (keycode - R0C0) % 7;
      char string[7];
      sprintf(string, "!%d,%d ", row, column);
      SEND_STRING(string);
    }
    return true;
}
