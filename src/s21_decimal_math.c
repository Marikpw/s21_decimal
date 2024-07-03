#include "s21_decimal.h"
#include "s21_decimal_auxiliary.h"

int s21_negate(s21_decimal value, s21_decimal *result) {
  if (!result) {
    return 1;
  }
  *result = value;
  s21_setSign(result, !s21_getSign(result));
  return 0;
}

int s21_floor(s21_decimal value, s21_decimal *result) {
  if (!result) {
    return 1;
  }

  int sign = s21_getSign(&value), scale = s21_getScaleFactor(&value);
  if (!scale) {
    *result = value;
  } else {
    s21_truncate(value, result);
    if (sign) {
      s21_decimal one = {{1, 0, 0, 0}};
      s21_sub(*result, one, result);
    }
  }

  return 0;
}

int s21_round(s21_decimal value, s21_decimal *result) {
  if (!result) {
    return 1;
  }

  int sign = s21_getSign(&value);
  s21_decimal remainder, valueWholePart, one = {{1, 0, 0, 0}},
                                         five = {{5, 0, 0, 0}};

  s21_clearBits(result);
  s21_setSign(&value, 0);
  s21_truncate(value, &valueWholePart);
  s21_sub(value, valueWholePart, &remainder);
  s21_setScaleFactor(&five, 1);

  *result = valueWholePart;
  if (s21_is_greater_or_equal(remainder, five)) s21_add(*result, one, result);
  s21_setSign(result, sign);
  return 0;
}

int s21_truncate(s21_decimal value, s21_decimal *result) {
  if (!result) {
    return 1;
  }

  s21_clearBits(result);
  s21_decimal rem = {0};
  int sign = s21_getSign(&value), scale = s21_getScaleFactor(&value);

  for (int i = scale; i > 0; --i) {
    s21_divideByNumber(value, &value, &rem, 10);
  }
  *result = value;
  s21_setScaleFactor(result, 0);
  if (sign) s21_setSign(result, sign);

  return 0;
}
