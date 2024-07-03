#ifndef C5_S21_DECIMAL_1_S21_BIG_DECIMAL_H_
#define C5_S21_DECIMAL_1_S21_BIG_DECIMAL_H_

#include "s21_decimal.h"

#define DECIMAL_ZERO \
  (s21_decimal) {    \
    { 0, 0, 0, 0 }   \
  }
#define BIG_DEC_TEN             \
  (s21_big_decimal) {           \
    { 10, 0, 0, 0, 0, 0, 0, 0 } \
  }
#define BIG_DEC_FIVE           \
  (s21_big_decimal) {          \
    { 5, 0, 0, 0, 0, 0, 0, 0 } \
  }
#define BIG_DEC_TWO            \
  (s21_big_decimal) {          \
    { 2, 0, 0, 0, 0, 0, 0, 0 } \
  }
#define BIG_DEC_ONE            \
  (s21_big_decimal) {          \
    { 1, 0, 0, 0, 0, 0, 0, 0 } \
  }
#define MAX_FLOAT 79228162514264337593543950335.f
#define MIN_FLOAT 1.e-28

typedef enum { OK, PLUS_INF, NEG_INF, ZERO } code_error;

typedef struct {
  unsigned bits[8];
} s21_big_decimal;

s21_big_decimal s21_decimal_to_big_decimal(s21_decimal dec);
s21_decimal s21_big_decimal_to_decimal(s21_big_decimal dec);

bool s21_get_bit_big(s21_big_decimal decimal, unsigned index);
void s21_set_bit_big(s21_big_decimal *decimal, unsigned index, bool bit);
bool s21_get_sign_big(s21_big_decimal decimal);
void s21_set_sign_big(s21_big_decimal *decimal, bool sign);
int s21_get_scale_big(s21_big_decimal decimal);
void s21_set_scale_big(s21_big_decimal *decimal, unsigned scale);
void s21_shift_left_big(s21_big_decimal *decimal, unsigned shift);
void s21_shift_right_big(s21_big_decimal *decimal, unsigned shift);

int s21_mantissa_comparison(s21_big_decimal value_1, s21_big_decimal value_2);
void s21_normalization(s21_big_decimal *value_1, s21_big_decimal *value_2);
int s21_over_mantissa(s21_big_decimal value);
void s21_reduction_of_the_mantissa(s21_big_decimal *value);
int s21_is_zero_big(s21_big_decimal value);
void s21_delete_zero_big(s21_big_decimal *value);
code_error s21_checking_res(s21_big_decimal res);

// арифметика
void s21_mantissa_add_big(s21_big_decimal value_1, s21_big_decimal value_2,
                          s21_big_decimal *result);
void s21_mantissa_sub_big(s21_big_decimal value_1, s21_big_decimal value_2,
                          s21_big_decimal *result);
s21_big_decimal s21_mantissa_div_big(s21_big_decimal value_1,
                                     s21_big_decimal value_2,
                                     s21_big_decimal *result);
void s21_mul_ten_big(s21_big_decimal *value);

void s21_mantissa_mul_big(s21_big_decimal value_1, s21_big_decimal value_2,
                          s21_big_decimal *result);

#endif  // C5_S21_DECIMAL_1_S21_BIG_DECIMAL_H_
