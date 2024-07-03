#include <limits.h>
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

#include "s21_big_decimal.h"
#include "s21_constants.h"
#include "s21_decimal.h"
#include "s21_decimal_auxiliary.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  for (int i = 0; i < 4; i++) result->bits[i] = 0;
  s21_big_decimal tmp_res = {0};
  s21_big_decimal v1 = s21_decimal_to_big_decimal(value_1);
  s21_big_decimal v2 = s21_decimal_to_big_decimal(value_2);
  s21_normalization(&v1, &v2);
  bool sign_v1 = s21_get_sign_big(v1);
  bool sign_v2 = s21_get_sign_big(v2);
  bool sign_res = 0;
  int scale_res = 0;
  if (sign_v1 == sign_v2) {  // - -, + +
    scale_res = s21_get_scale_big(v1);
    if (sign_v1 == 1) sign_res = 1;
    s21_mantissa_add_big(v1, v2, &tmp_res);
  } else {  // - +, + -
    s21_big_decimal *max_mantissa =
        (s21_mantissa_comparison(v1, v2) <= 0) ? &v1 : &v2;
    s21_big_decimal *min_mantissa =
        (s21_mantissa_comparison(v1, v2) <= 0) ? &v2 : &v1;
    bool max_sign = s21_get_sign_big(*max_mantissa);
    scale_res = s21_get_scale_big(*max_mantissa);
    if (s21_mantissa_comparison(*max_mantissa, *min_mantissa) == 0) {
      sign_res = 0;
      scale_res = 0;
    } else if (max_sign == 0) {
      sign_res = (max_mantissa == &v1) ? 0 : 1;
    } else {
      sign_res = (max_mantissa == &v1) ? 1 : 0;
    }
    s21_mantissa_sub_big(*max_mantissa, *min_mantissa, &tmp_res);
  }
  s21_set_sign_big(&tmp_res, sign_res);
  s21_set_scale_big(&tmp_res, scale_res);
  s21_reduction_of_the_mantissa(&tmp_res);
  s21_delete_zero_big(&tmp_res);
  code_error res = s21_checking_res(tmp_res);
  if (res == OK) *result = s21_big_decimal_to_decimal(tmp_res);
  return res;
}

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  for (int i = 0; i < 4; i++) result->bits[i] = 0;
  s21_big_decimal tmp_res = {0};
  s21_big_decimal v1 = s21_decimal_to_big_decimal(value_1);
  s21_big_decimal v2 = s21_decimal_to_big_decimal(value_2);
  s21_normalization(&v1, &v2);
  bool sign_v1 = s21_get_sign_big(v1);
  bool sign_v2 = s21_get_sign_big(v2);
  bool sign_res = 0;
  int scale_res = 0;
  if (sign_v1 == sign_v2) {  // - -, + +
    s21_big_decimal *max_mantissa =
        (s21_mantissa_comparison(v1, v2) <= 0) ? &v1 : &v2;
    s21_big_decimal *min_mantissa =
        (s21_mantissa_comparison(v1, v2) <= 0) ? &v2 : &v1;
    bool max_sign = s21_get_sign_big(*max_mantissa);
    scale_res = s21_get_scale_big(*max_mantissa);
    if (s21_mantissa_comparison(*max_mantissa, *min_mantissa) == 0) {
      sign_res = 0;
      scale_res = 0;
    } else if (max_sign == 0) {
      sign_res = (max_mantissa == &v1) ? 0 : 1;
    } else {
      sign_res = (max_mantissa == &v1) ? 1 : 0;
    }
    s21_mantissa_sub_big(*max_mantissa, *min_mantissa, &tmp_res);
  } else {  // - +, + -
    scale_res = s21_get_scale_big(v1);
    if (sign_v1 == 1) sign_res = 1;
    s21_mantissa_add_big(v1, v2, &tmp_res);
  }
  s21_set_sign_big(&tmp_res, sign_res);
  s21_set_scale_big(&tmp_res, scale_res);
  s21_reduction_of_the_mantissa(&tmp_res);
  s21_delete_zero_big(&tmp_res);
  code_error res = s21_checking_res(tmp_res);
  if (res == OK) *result = s21_big_decimal_to_decimal(tmp_res);
  return res;
}

int s21_mul(s21_decimal firstValue, s21_decimal secondValue,
            s21_decimal *result) {
  int errorCode = S21_ERROR_OK;
  s21_clearBits(result);
  int resultSign = s21_getSign(&firstValue) ^ s21_getSign(&secondValue);
  int resultScale =
      s21_getScaleFactor(&firstValue) + s21_getScaleFactor(&secondValue);
  s21_bigDecimal firstValueBigDecimal = {0};
  s21_bigDecimal secondValueBigDecimal = {0};
  s21_bigDecimal resultBigDecimal = {0};
  s21_decimal roundedResult = {0};

  s21_convertToBigDecimal(&firstValue, &firstValueBigDecimal);
  s21_convertToBigDecimal(&secondValue, &secondValueBigDecimal);
  if (!s21_bigDecimalIsZero(&firstValueBigDecimal) &&
      !s21_bigDecimalIsZero(&secondValueBigDecimal)) {
    s21_bigDecimalMultiply(firstValueBigDecimal, secondValueBigDecimal,
                           &resultBigDecimal);

    errorCode = s21_roundResult(resultBigDecimal, &roundedResult, &resultScale);
    if (errorCode != S21_ERROR_OK) {
      errorCode =
          resultSign ? S21_ERROR_NUMBER_TOO_SMALL : S21_ERROR_NUMBER_TOO_LARGE;
    } else {
      s21_setSign(&roundedResult, resultSign);
      s21_setScaleFactor(&roundedResult, resultScale);
      *result = roundedResult;
    }
  }

  return errorCode;
}

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  code_error res = OK;
  for (int i = 0; i < 4; i++) result->bits[i] = 0;
  s21_big_decimal tmp_res = {0};
  s21_big_decimal v1 = s21_decimal_to_big_decimal(value_1);
  s21_big_decimal v2 = s21_decimal_to_big_decimal(value_2);
  if (s21_is_zero_big(v2)) {
    res = ZERO;
  } else {
    bool sign_1 = s21_get_sign_big(v1);
    bool sign_2 = s21_get_sign_big(v2);
    bool sign_res = (sign_1 ^ sign_2) ? 1 : 0;
    int scale_1 = s21_get_scale_big(v1);
    int scale_2 = s21_get_scale_big(v2);
    int scale_res = scale_1 - scale_2;
    v1 = s21_mantissa_div_big(v1, v2, &tmp_res);
    while (!s21_is_zero_big(v1) && !s21_over_mantissa(tmp_res) &&
           scale_res <= 28) {
      s21_mul_ten_big(&v1);
      s21_mul_ten_big(&tmp_res);
      s21_big_decimal tmp_div = {0};
      v1 = s21_mantissa_div_big(v1, v2, &tmp_div);
      s21_mantissa_add_big(tmp_res, tmp_div, &tmp_res);
      scale_res++;
    }
    while (scale_res < 0) {
      s21_mul_ten_big(&tmp_res);
      scale_res++;
    }
    s21_set_scale_big(&tmp_res, scale_res);
    s21_set_sign_big(&tmp_res, sign_res);
    s21_reduction_of_the_mantissa(&tmp_res);
    s21_delete_zero_big(&tmp_res);
    res = s21_checking_res(tmp_res);
    if (res == OK) *result = s21_big_decimal_to_decimal(tmp_res);
  }
  return res;
}
