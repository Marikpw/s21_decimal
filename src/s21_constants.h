#ifndef S21_CONSTANTS_H
#define S21_CONSTANTS_H

enum {
  S21_DECIMAL_BIT_SIZE = 32,
  S21_DECIMAL_SIGN_BIT_INDEX = 127,
  S21_SCALE_FACTOR_START_INDEX = 16,
  S21_MAX_BIT_INDEX = 96,
  S21_BIG_DECIMAL_SIGN_BIT_INDEX = 191,
  S21_BIG_DECIMAL_MAX_BIT_INDEX = 160,
  S21_ERROR_OK = 0,
  S21_ERROR_NUMBER_TOO_LARGE = 1,
  S21_ERROR_NUMBER_TOO_SMALL = 2,
  S21_ERROR_DIVISION_BY_ZERO = 3,
  S21_POSITIVE = 0,
  S21_NEGATIVE = 1,
};

#endif
