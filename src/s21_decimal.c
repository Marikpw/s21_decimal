#include "s21_decimal.h"

_Bool s21_is_zero(s21_decimal value) {
  _Bool is_zero = TRUE;
  for (int i = 0; i < 104; i++) {
    if (s21_get_bit(value, i)) {
      is_zero = FALSE;
      break;
    }
  }
  return is_zero;
}

int s21_is_overflow(s21_decimal value) { return value.bits[3] & 0xFF; }

_Bool s21_get_bit(s21_decimal value, unsigned index) {
  int byte = index / 32;
  index %= 32;
  return (value.bits[byte]) & (1 << index);
}

_Bool s21_set_bit(s21_decimal *value, unsigned index, int bit) {
  int byte = index / 32;
  index %= 32;
  if (bit == 0) {
    value->bits[byte] &= ~(1 << index);
  } else {
    value->bits[byte] |= (1 << index);
  }
  return 0;
}

_Bool s21_get_sign(s21_decimal value) { return s21_get_bit(value, 32 * 4 - 1); }

_Bool s21_set_sign(s21_decimal *value, int sign) {
  int tmp = 0xFF & value->bits[3];
  unsigned short scale = s21_get_scale(*value);
  value->bits[3] = (sign << 31) | (scale << 16);
  value->bits[3] |= tmp;
  return 0;
}

int s21_get_scale(s21_decimal value) { return ((value.bits[3] >> 16) & 0xFF); }

_Bool s21_set_scale(s21_decimal *value, int scale) {
  int tmp = 0xFF & value->bits[3];
  unsigned short sign = s21_get_sign(*value);
  value->bits[3] = (sign << 31) | (scale << 16);
  value->bits[3] |= tmp;
  return 0;
}

_Bool s21_shift_left(s21_decimal *value, int shift) {
  int error = SUCCESS;
  int sign = s21_get_sign(*value), scale = s21_get_scale(*value);
  for (int i = 0; i < shift; i++) {
    int memo = 0;
    for (int j = 0; j < 4; j++) {
      unsigned temp = value->bits[j];
      value->bits[j] <<= 1;
      value->bits[j] |= memo;
      memo = temp >> (32 - 1);
    }
  }
  if (value->bits[3] & 0xFF00) {
    error = (sign) ? TOO_SMALL_ERR : TOO_LARGE_ERR;
  }
  s21_set_sign(value, sign);
  s21_set_scale(value, scale);
  return error;
}

_Bool s21_shift_right(s21_decimal *value, int shift) {
  int memo = 0;
  int sign = s21_get_sign(*value), scale = s21_get_scale(*value);
  s21_set_sign(value, 0), s21_set_scale(value, 0);
  for (int i = 0; i < shift; i++) {
    for (int j = 4; j >= 0; j--) {
      unsigned temp = value->bits[j];
      value->bits[j] >>= 1;
      value->bits[j] |= memo;
      memo = temp << (32 - 1);
    }
  }
  s21_set_sign(value, sign), s21_set_scale(value, scale);
  return 0;
}