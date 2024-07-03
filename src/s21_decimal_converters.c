#include <limits.h>
#include <math.h>
#include <stdlib.h>

#include "s21_constants.h"
#include "s21_decimal.h"
#include "s21_decimal_auxiliary.h"

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  int flag = 0;
  if (!dst || abs(src) > INT_MAX) {
    flag = 1;
  } else {
    s21_clearBits(dst);
    if (src < 0) {
      src *= -1;
      dst->bits[3] = s21_setBit2(dst->bits[3], 31);
    }
    dst->bits[0] = src;
  }
  return flag;
}

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  if (!dst) return 1;

  s21_truncate(src, &src);
  if (src.bits[1] != 0 || src.bits[2] != 0) return 1;

  s21_truncate(src, &src);
  *dst = src.bits[0];
  if (s21_getSign(&src)) {
    *dst *= -1;
  }
  int scale = s21_getScaleFactor(&src);
  while (scale--) *dst /= 10;

  return 0;
}

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  if (!dst || src != src || (fabs(src) < powl(10.0, -28.0)) ||
      (fabs(src) >= powl(2.0, 96.0))) {
    return 1;
  }

  s21_clearBits(dst);
  int scale = 0;
  double value = fabs((double)src);
  while (value < 1.0 && scale < 28) {
    value *= 10;
    scale++;
  }
  while (value / pow(10.0, 7) < 1.0 && scale < 28) {
    value *= 10;
    scale++;
  }
  value = floor(value);
  if (fmod(value, 10.0) >= 5) {
    value += 10 - fmod(value, 10.0);
    value = round(value);
  }
  if (scale > 0) {
    value = value / 10;
    scale--;
  }
  while (scale > 0 && (fmod(value, 10.0) < pow(10.0, -8))) {
    value = value / 10;
    value = round(value);
    scale--;
  }
  for (int i = 0; i < S21_MAX_BIT_INDEX; ++i)
    s21_setBit(dst, i, s21_getBitToFloat(value, i));
  if (src < 0) s21_setSign(dst, 1);
  s21_setScaleFactor(dst, scale);
  return 0;
}

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  int flag = 0;
  if (!dst) {
    flag = 1;
  } else {
    double temp = 0.0;
    int currentScale = (-1) * s21_getScale(&src);

    int temp_i = 0;

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 32; j++) {
        temp += s21_getBit2(src.bits[i], j) * pow(2, j + temp_i);
      }
      temp_i += 32;
    }

    temp *= pow(10, currentScale);
    *dst = (float)temp;
    if (s21_getBit2(src.bits[3], 31) == 1) {
      *dst *= -1;
    }
  }
  return flag;
}
