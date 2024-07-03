#include <stdlib.h>

#include "s21_constants.h"
#include "s21_decimal.h"
#include "s21_decimal_auxiliary.h"

int s21_is_less(s21_decimal num1, s21_decimal num2) {
  int sign_status = s21_sign_check(num1, num2);
  int flag = 1;
  int check_equal = s21_is_equal(num1, num2);
  if (check_equal == 1) {
    flag = 0;
  } else if (sign_status == 1) {
    flag = 0;
  } else if (sign_status == 2) {
    flag = 1;
  } else {
    flag = !s21_is_greater(num1, num2);
  }

  return flag;
}

int s21_is_less_or_equal(s21_decimal num1, s21_decimal num2) {
  int sign_status = s21_sign_check(num1, num2);
  int flag = 1;
  int check_equal = s21_is_equal(num1, num2);
  if (check_equal != 1) {
    flag = !s21_is_greater(num1, num2);
  } else if (sign_status == 1 && check_equal == 0) {
    flag = 0;
  } else if (sign_status == 2 && check_equal == 0) {
    flag = 1;
  }
  return flag;
}

int s21_is_greater(s21_decimal num1, s21_decimal num2) {
  int sign_status = s21_sign_check(num1, num2);
  int flag = 1;
  int check_equal = s21_is_equal(num1, num2);
  if (check_equal == 1) {
    flag = 0;
  } else if (check_equal == 2) {
    flag = 1;
  } else {
    int scale_num1 = s21_getScale(&num1);
    int scale_num2 = s21_getScale(&num2);

    if (scale_num1 == scale_num2) {
      int man_part = s21_check_decimal_part(num1, num2);
      if (man_part == 1 || man_part == 0) {
        flag = 0;
      }
    } else {
      int result_scale = abs(scale_num1 - scale_num2);
      int man_part;
      if (scale_num1 > scale_num2) {
        s21_try_to_normalize_this(&num2, result_scale);
        man_part = s21_check_decimal_part(num1, num2);
        if (man_part == 1 || man_part == 0) {
          flag = 0;
        }
      } else {
        s21_try_to_normalize_this(&num1, result_scale);
        man_part = s21_check_decimal_part(num1, num2);
        if (man_part == 1 || man_part == 0) {
          flag = 0;
        }
      }
    }
  }
  if (sign_status == 3) {
    flag = !flag;
  }
  return flag;
}

int s21_is_greater_or_equal(s21_decimal num1, s21_decimal num2) {
  int flag = 1;
  int check_equal = s21_is_equal(num1, num2);
  if (check_equal != 1) {
    flag = s21_is_greater(num1, num2);
  } else if (check_equal == 1 && check_equal == 0) {
    flag = 0;
  } else if (check_equal == 2 && check_equal == 0) {
    flag = 1;
  }
  return flag;
}

int s21_is_equal(s21_decimal num1, s21_decimal num2) {
  int sign_status = s21_sign_check(num1, num2);
  int flag = 1;
  if (sign_status != 0 && sign_status != 3) {
    flag = 0;
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 32; j++) {
      if (s21_getBit2(num1.bits[i], j) != s21_getBit2(num2.bits[i], j)) {
        flag = 0;
      }
    }
  }
  int scale_num1 = s21_getScale(&num1);
  int scale_num2 = s21_getScale(&num2);
  if (scale_num1 != scale_num2 && (sign_status == 0 || sign_status == 3)) {
    int result_scale = abs(scale_num1 - scale_num2);
    int normalization;
    int man_part;
    if (scale_num1 > scale_num2) {
      normalization = s21_try_to_normalize_this(&num2, result_scale);
      man_part = s21_check_decimal_part_eql(num1, num2);
      if (normalization == 0 && man_part == 1) {
        flag = 1;
      }
    } else {
      normalization = s21_try_to_normalize_this(&num1, result_scale);
      man_part = s21_check_decimal_part_eql(num1, num2);
      if (normalization == 0 && man_part == 1) {
        flag = 1;
      }
    }
  }
  return flag;
}

int s21_is_not_equal(s21_decimal num1, s21_decimal num2) {
  if (s21_is_equal(num1, num2) == 0) {
    return 1;
  } else {
    return 0;
  }
}
