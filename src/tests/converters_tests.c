#include "converters_tests.h"

START_TEST(int_to_decimal_test_0) {
  int value = 0;
  s21_decimal* result = NULL;
  int originalReturnValue = 1;
  int ourReturnValue = s21_from_int_to_decimal(value, result);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(int_to_decimal_test_1) {
  s21_decimal result = {0};
  s21_decimal originalValue = {0};
  int value = 1;
  originalValue.bits[0] = 0b00000000000000000000000000000001;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] = 0b00000000000000000000000000000000;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_int_to_decimal(value, &result);
  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(int_to_decimal_test_2) {
  s21_decimal result = {0};
  s21_decimal originalValue = {0};
  int value = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000000;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] = 0b00000000000000000000000000000000;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_int_to_decimal(value, &result);
  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(int_to_decimal_test_3) {
  s21_decimal result = {0};
  s21_decimal originalValue = {0};
  int value = -1;
  originalValue.bits[0] = 0b00000000000000000000000000000001;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] = 0b10000000000000000000000000000000;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_int_to_decimal(value, &result);
  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(int_to_decimal_test_4) {
  s21_decimal result = {0};
  s21_decimal originalValue = {0};
  int value = 2147483647;
  originalValue.bits[0] = 0b01111111111111111111111111111111;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] = 0b00000000000000000000000000000000;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_int_to_decimal(value, &result);
  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(int_to_decimal_test_5) {
  s21_decimal result = {0};
  s21_decimal originalValue = {0};
  int value = -2147483647;
  originalValue.bits[0] = 0b01111111111111111111111111111111;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] = 0b10000000000000000000000000000000;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_int_to_decimal(value, &result);
  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(int_to_decimal_test_6) {
  s21_decimal result = {0};
  s21_decimal originalValue = {0};
  int value = -12345;
  originalValue.bits[0] = 0b00000000000000000011000000111001;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] = 0b10000000000000000000000000000000;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_int_to_decimal(value, &result);
  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(int_to_decimal_test_7) {
  s21_decimal result = {0};
  s21_decimal originalValue = {0};
  int value = -12345;
  originalValue.bits[0] = 0b00000000000000000011000000111001;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] = 0b10000000000000000000000000000000;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_int_to_decimal(value, &result);
  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(int_to_decimal_test_8) {
  s21_decimal result = {0};
  s21_decimal originalValue = {0};
  int value = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000000;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] = 0b00000000000000000000000000000000;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_int_to_decimal(value, &result);
  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(int_to_decimal_test_9) {
  s21_decimal result = {0};
  s21_decimal originalValue = {0};
  int value = 45678;
  originalValue.bits[0] = 0b00000000000000001011001001101110;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] = 0b00000000000000000000000000000000;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_int_to_decimal(value, &result);
  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(int_to_decimal_test_10) {
  s21_decimal result = {0};
  s21_decimal originalValue = {0};
  int value = -45678;
  originalValue.bits[0] = 0b00000000000000001011001001101110;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] = 0b10000000000000000000000000000000;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_int_to_decimal(value, &result);
  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_int_test_0) {
  s21_decimal value = {0};
  value.bits[0] = 0b00000000000000000000000000110010;
  value.bits[1] = 0b00000000001000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b00000000000000010000000000000000;
  int result = 0;
  int originalReturnValue = 1;
  int ourReturnValue = s21_from_decimal_to_int(value, &result);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);

  int* nullResult = NULL;
  int originalReturnValue1 = 1;
  int ourReturnValue1 = s21_from_decimal_to_int(value, nullResult);
  ck_assert_int_eq(originalReturnValue1, ourReturnValue1);
}
END_TEST

START_TEST(decimal_to_int_test_1) {
  s21_decimal value = {0};
  value.bits[0] = 0b00000000000000000000000000110010;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b00000000000000010000000000000000;
  int result = 0;
  int originalValue = 5;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_int(value, &result);
  ck_assert_int_eq(originalValue, result);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_int_test_2) {
  s21_decimal value = {0};
  value.bits[0] = 0b00000000000000000000000000100010;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b00000000000000010000000000000000;
  int result = 0;
  int originalValue = 3;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_int(value, &result);
  ck_assert_int_eq(originalValue, result);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_int_test_3) {
  s21_decimal value = {0};
  value.bits[0] = 0b00000000000000000000000000000000;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b00000000000000010000000000000000;
  int result = 0;
  int originalValue = 0;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_int(value, &result);
  ck_assert_int_eq(originalValue, result);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_int_test_4) {
  s21_decimal value = {0};
  value.bits[0] = 0b00000001011100111100000111000111;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b10000000000001110000000000000000;
  int result = 0;
  int originalValue = -2;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_int(value, &result);
  ck_assert_int_eq(originalValue, result);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_int_test_5) {
  s21_decimal value = {0};
  value.bits[0] = 0b00000000000000000000000000000000;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b10000000000000010000000000000000;
  int result = 0;
  int originalValue = 0;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_int(value, &result);
  ck_assert_int_eq(originalValue, result);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_int_test_6) {
  s21_decimal value = {0};
  value.bits[0] = 0b00111011100110101100100111111001;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b10000000000000010000000000000000;
  int result = 0;
  int originalValue = -99999999;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_int(value, &result);
  ck_assert_int_eq(originalValue, result);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_int_test_7) {
  s21_decimal value = {0};
  value.bits[0] = 0b00000011111000110110011011000111;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b00000000000001010000000000000000;
  int result = 0;
  int originalValue = 652;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_int(value, &result);
  ck_assert_int_eq(originalValue, result);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_int_test_8) {
  s21_decimal value = {0};
  value.bits[0] = 0b00011101101010010010000100011011;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b00000000000010000000000000000000;
  int result = 0;
  int originalValue = 4;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_int(value, &result);
  ck_assert_int_eq(originalValue, result);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_int_test_9) {
  s21_decimal value = {0};
  value.bits[0] = 0b10000111010110110010011111110011;
  value.bits[1] = 0b00000000000000000000000000000001;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b00000000000000100000000000000000;
  int result = 0;
  int originalValue = 65658654;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_int(value, &result);
  ck_assert_int_eq(originalValue, result);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_int_test_10) {
  s21_decimal value = {0};
  value.bits[0] = 0b00010101101111011001110101001110;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b10000000000000110000000000000000;
  int result = 0;
  int originalValue = -364748;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_int(value, &result);
  ck_assert_int_eq(originalValue, result);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_0) {
  float* nullResult = NULL;
  s21_decimal value = {0};
  int originalReturnValue = 1;
  int ourReturnValue = s21_from_decimal_to_float(value, nullResult);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_1) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b00000000000000000000000000010100;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b00000000000000010000000000000000;
  float originalFloatValue = 2.0;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_2) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b00000000000000000000000000001000;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b10000000000000010000000000000000;
  float originalFloatValue = -0.8;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_3) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b00000000000000000000000000000000;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b00000000000000000000000000000000;
  float originalFloatValue = 0.0;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_4) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b00000000000000000000000000000001;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b00000000000000000000000000000000;
  float originalFloatValue = 1;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_5) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b00000000000000000000000000000000;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b10000000000000010000000000000000;
  float originalFloatValue = 0;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_6) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b00000000000000000000000010101111;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b10000000000000100000000000000000;
  float originalFloatValue = -1.75;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_7) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b00000000000000000001100101111001;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b00000000000000000000000000000000;
  float originalFloatValue = 6521;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_8) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b00000000000000000000000000000100;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b00000000000000000000000000000000;
  float originalFloatValue = 4;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_9) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b00000000000001011001000011001100;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b10000000000000000000000000000000;
  float originalFloatValue = -364748;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_10) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b00000000000000000000000000000011;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b00000000000000110000000000000000;
  float originalFloatValue = 0.003;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_11) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b01001100110100101000000111000101;
  value.bits[1] = 0b00000000000000000000000000000010;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b10000000000000000000000000000000;
  float originalFloatValue = -9.878798e+9;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_12) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b11001010111000111111111111111111;
  value.bits[1] = 0b10001010001110010000011100111010;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b00000000000000000000000000000000;
  float originalFloatValue = 9.96e+18;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_13) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b01101110100110100110010101111110;
  value.bits[1] = 0b11100010111000110111110100101010;
  value.bits[2] = 0b10110000010011101101001100001111;
  value.bits[3] = 0b00000000000111000000000000000000;
  float originalFloatValue = 5.456465;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_14) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b10001000100000001001111110011000;
  value.bits[1] = 0b10000010011101100000001010011001;
  value.bits[2] = 0b00010001100111111110010011110010;
  value.bits[3] = 0b10000000000000000000000000000000;
  float originalFloatValue = -5.454546e+27;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_15) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b00000000000000000000000000000000;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] = 0b10000000000111000000000000000000;
  float originalFloatValue = 0;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_16) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b11111111111111111111111111111111;
  value.bits[1] = 0b11111111111111111111111111111111;
  value.bits[2] = 0b11111111111111111111111111111111;
  value.bits[3] = 0b10000000000110100000000000000000;
  float originalFloatValue = -792.2816;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(decimal_to_float_test_17) {
  s21_decimal value = {0};
  float ourFloatNumber = 0.0;
  value.bits[0] = 0b11111110100100001101100101011111;
  value.bits[1] = 0b10000100011001000010000111101000;
  value.bits[2] = 0b00000000000000000000000000000001;
  value.bits[3] = 0b00000000000100110000000000000000;
  float originalFloatValue = 2.798653;
  int originalReturnValue = 0;
  int ourReturnValue = s21_from_decimal_to_float(value, &ourFloatNumber);
  ck_assert_float_eq_tol(originalFloatValue, ourFloatNumber, 1e-6);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(float_to_decimal_test_0) {
  float value = 1e-30;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 1);
}
END_TEST

START_TEST(float_to_decimal_test_1) {
  float value = 829834.3;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 8298343);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], 65536);
}
END_TEST

START_TEST(float_to_decimal_test_2) {
  float value = 8934.278;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 8934278);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], 196608);
}
END_TEST

START_TEST(float_to_decimal_test_3) {
  float value = -23423.82;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 2342382);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], -2147352576);
}
END_TEST

START_TEST(float_to_decimal_test_4) {
  float value = -27348.28;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 2734828);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], -2147352576);
}
END_TEST

START_TEST(float_to_decimal_test_5) {
  float value = 823923;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 823923);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], 0);
}
END_TEST

START_TEST(float_to_decimal_test_6) {
  float value = -129312304;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 129312304);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], -2147483648);
}
END_TEST

START_TEST(float_to_decimal_test_7) {
  float value = 23744.78;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 2374478);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], 131072);
}
END_TEST

START_TEST(float_to_decimal_test_8) {
  float value = -2393.823;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 2393823);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], -2147287040);
}
END_TEST

START_TEST(float_to_decimal_test_9) {
  float value = 912479.2;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 9124792);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], 65536);
}
END_TEST

START_TEST(float_to_decimal_test_10) {
  float value = -123234.7;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 1232347);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], -2147418112);
}
END_TEST

START_TEST(float_to_decimal_test_11) {
  float value = 10121.7;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 101217);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], 65536);
}
END_TEST

START_TEST(float_to_decimal_test_12) {
  float value = -23748280;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 23748280);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], -2147483648);
}
END_TEST

START_TEST(float_to_decimal_test_13) {
  float value = 802000;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 802000);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], 0);
}
END_TEST

START_TEST(float_to_decimal_test_14) {
  float value = 1.3331;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 13331);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], 262144);
}
END_TEST

START_TEST(float_to_decimal_test_15) {
  float value = -1.667283;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 1667283);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], -2147090432);
}
END_TEST

START_TEST(float_to_decimal_test_16) {
  float value = 0.5632482;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 5632482);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], 458752);
}
END_TEST

START_TEST(float_to_decimal_test_17) {
  float value = -0.6527385;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 6527385);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], -2147024896);
}
END_TEST

START_TEST(float_to_decimal_test_18) {
  float value = -4.294967E+09;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], -256);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], -2147483648);
}
END_TEST

START_TEST(float_to_decimal_test_19) {
  float value = 4.294967E+09;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], -256);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], 0);
}
END_TEST

START_TEST(float_to_decimal_test_20) {
  float value = -8932.617;
  s21_decimal result = {0};

  int res = s21_from_float_to_decimal(value, &result);

  ck_assert_int_eq((int)res, 0);
  ck_assert_int_eq((int)result.bits[0], 8932617);
  ck_assert_int_eq((int)result.bits[1], 0);
  ck_assert_int_eq((int)result.bits[2], 0);
  ck_assert_int_eq((int)result.bits[3], -2147287040);
}
END_TEST

void applyConvertersSuite(Suite* mainSuite, TCase* mainTestCaseCore) {
  tcase_add_test(mainTestCaseCore, int_to_decimal_test_0);
  tcase_add_test(mainTestCaseCore, int_to_decimal_test_1);
  tcase_add_test(mainTestCaseCore, int_to_decimal_test_2);
  tcase_add_test(mainTestCaseCore, int_to_decimal_test_3);
  tcase_add_test(mainTestCaseCore, int_to_decimal_test_4);
  tcase_add_test(mainTestCaseCore, int_to_decimal_test_5);
  tcase_add_test(mainTestCaseCore, int_to_decimal_test_6);
  tcase_add_test(mainTestCaseCore, int_to_decimal_test_7);
  tcase_add_test(mainTestCaseCore, int_to_decimal_test_8);
  tcase_add_test(mainTestCaseCore, int_to_decimal_test_9);
  tcase_add_test(mainTestCaseCore, int_to_decimal_test_10);

  tcase_add_test(mainTestCaseCore, decimal_to_int_test_0);
  tcase_add_test(mainTestCaseCore, decimal_to_int_test_1);
  tcase_add_test(mainTestCaseCore, decimal_to_int_test_2);
  tcase_add_test(mainTestCaseCore, decimal_to_int_test_3);
  tcase_add_test(mainTestCaseCore, decimal_to_int_test_4);
  tcase_add_test(mainTestCaseCore, decimal_to_int_test_5);
  tcase_add_test(mainTestCaseCore, decimal_to_int_test_6);
  tcase_add_test(mainTestCaseCore, decimal_to_int_test_7);
  tcase_add_test(mainTestCaseCore, decimal_to_int_test_8);
  tcase_add_test(mainTestCaseCore, decimal_to_int_test_9);
  tcase_add_test(mainTestCaseCore, decimal_to_int_test_10);

  tcase_add_test(mainTestCaseCore, decimal_to_float_test_0);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_1);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_2);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_3);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_4);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_5);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_6);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_7);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_8);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_9);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_10);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_11);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_12);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_13);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_14);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_15);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_16);
  tcase_add_test(mainTestCaseCore, decimal_to_float_test_17);

  tcase_add_test(mainTestCaseCore, float_to_decimal_test_0);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_1);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_2);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_3);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_4);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_5);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_6);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_7);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_8);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_9);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_10);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_11);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_12);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_13);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_14);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_15);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_16);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_17);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_18);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_19);
  tcase_add_test(mainTestCaseCore, float_to_decimal_test_20);

  suite_add_tcase(mainSuite, mainTestCaseCore);
}
