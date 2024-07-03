#include "math_tests.h"

START_TEST(s21_floor_test_0) {
  s21_decimal value = {0};
  s21_decimal* result = NULL;

  int originalReturnValue = 1;
  int ourReturnValue = s21_floor(value, result);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_floor_test_1) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 1;
  int valueSign = 0;
  value.bits[0] = 0b00000000000000000000000000110010;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_floor(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000101;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_floor_test_2) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 1;
  int valueSign = 0;
  value.bits[0] = 0b00000000000000000000000000100010;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_floor(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000011;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_floor_test_3) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 0;
  int valueSign = 0;
  value.bits[0] = 0b00000000000000000000000000000000;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_floor(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000000;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_floor_test_4) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 7;
  int valueSign = 1;
  value.bits[0] = 0b00000001011100111100000111000111;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_floor(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalValue.bits[0] = 0b00000000000000000000000000000011;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_floor_test_5) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 15;
  int valueSign = 0;
  value.bits[0] = 0b01001110111001000011100101110110;
  value.bits[1] = 0b01001011001101011010000111011001;
  value.bits[2] = 0b00011001101110010111010010111111;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_floor(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b10100100000111100100000000101101;
  originalValue.bits[1] = 0b00000000000000000000011100111101;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_floor_test_6) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 2;
  int valueSign = 1;
  value.bits[0] = 0b00000000000000000000000000101101;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_floor(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalValue.bits[0] = 0b00000000000000000000000000000001;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_floor_test_7) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 5;
  int valueSign = 0;
  value.bits[0] = 0b00000011111000110110011011000111;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_floor(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000001010001100;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_floor_test_8) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 8;
  int valueSign = 0;
  value.bits[0] = 0b00011101101010010010000100011011;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_floor(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000100;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_floor_test_9) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 2;
  int valueSign = 0;
  value.bits[0] = 0b10000111010110110010011111110011;
  value.bits[1] = 0b00000000000000000000000000000001;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_floor(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000011111010011101111100011110;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_floor_test_10) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 3;
  int valueSign = 1;
  value.bits[0] = 0b00010101101111011001110101001110;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_floor(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalValue.bits[0] = 0b00000000000001011001000011001101;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_round_test_0) {
  s21_decimal value = {0};
  s21_decimal* result = NULL;

  int originalReturnValue = 1;
  int ourReturnValue = s21_round(value, result);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_round_test_1) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 1;
  int valueSign = 0;
  value.bits[0] = 0b00000000000000000000000000110010;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_round(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000101;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_round_test_2) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 1;
  int valueSign = 0;
  value.bits[0] = 0b00000000000000000000000000100010;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_round(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000011;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_round_test_3) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 1;
  int valueSign = 0;
  value.bits[0] = 0b00000000000000000000000000000000;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_round(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000000;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_round_test_4) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 7;
  int valueSign = 1;
  value.bits[0] = 0b00000001011100111100000111000111;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_round(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalValue.bits[0] = 0b00000000000000000000000000000010;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_round_test_5) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 5;
  int valueSign = 0;
  value.bits[0] = 0b00000011111000110110011011000111;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_round(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000001010001100;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_round_test_6) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 8;
  int valueSign = 0;
  value.bits[0] = 0b00011101101010010010000100011011;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_round(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000101;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_round_test_7) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 2;
  int valueSign = 0;
  value.bits[0] = 0b10000111010110110010011111110011;
  value.bits[1] = 0b00000000000000000000000000000001;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_round(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000011111010011101111100011111;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_round_test_8) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 3;
  int valueSign = 1;
  value.bits[0] = 0b00010101101111011001110101001110;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_round(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalValue.bits[0] = 0b00000000000001011001000011001100;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_round_test_9) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 13;
  int valueSign = 0;
  value.bits[0] = 0b01101000011010011010001100101111;
  value.bits[1] = 0b00000000000000000001001000010011;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_round(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000010;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_round_test_10) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 11;
  int valueSign = 1;
  value.bits[0] = 0b00010110010010101110101011000000;
  value.bits[1] = 0b00000000000000000000100011111100;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_round(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalValue.bits[0] = 0b00000000000000000000000001100011;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_round_test_11) {
  s21_decimal val = {{7, 7, 7, 0}};
  s21_decimal res;
  s21_round(val, &res);
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  float need = 129127208515966861312.0;
  ck_assert_float_eq(need, fres);
}
END_TEST

START_TEST(s21_round_test_12) {
  s21_decimal val = {{3, 3, 3, 0}};
  s21_decimal res = {{0}};
  s21_setScaleFactor(&val, 5);
  ck_assert_int_eq(0, s21_round(val, &res));
}
END_TEST

START_TEST(s21_truncate_test_0) {
  s21_decimal value = {0};
  s21_decimal* result = NULL;

  int originalReturnValue = 1;
  int ourReturnValue = s21_truncate(value, result);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_1) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 4;
  int valueSign = 0;
  value.bits[0] = 0b00000000000000000101001011110010;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000010;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_2) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 6;
  int valueSign = 0;
  value.bits[0] = 0b00011011001111010100010001000001;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000111001001;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_3) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 3;
  int valueSign = 0;
  value.bits[0] = 0b00000000000000000000011111010000;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000010;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_4) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 1;
  int valueSign = 0;
  value.bits[0] = 0b00000000000000000000000000000000;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000000;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_5) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 0;
  int valueSign = 1;
  value.bits[0] = 0b00000000000000000000000000000011;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalValue.bits[0] = 0b00000000000000000000000000000011;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_6) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 6;
  int valueSign = 0;
  value.bits[0] = 0b00000000001000011110100010000100;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000010;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_7) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 17;
  int valueSign = 0;
  value.bits[0] = 0b00000111100011111010001111101000;
  value.bits[1] = 0b00000011000101010111110100000001;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000010;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_8) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 9;
  int valueSign = 0;
  value.bits[0] = 0b11011111010000111010111001110101;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000011;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_9) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 0;
  int valueSign = 1;
  value.bits[0] = 0b00000000000001011001000011001100;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalValue.bits[0] = 0b00000000000001011001000011001100;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_10) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 1;
  int valueSign = 0;
  value.bits[0] = 0b00011001111101110000001100100100;
  value.bits[1] = 0b00000000000000000000100011111011;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b11101000111111110001100111101010;
  originalValue.bits[1] = 0b00000000000000000000000011100101;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_11) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 7;
  int valueSign = 1;
  value.bits[0] = 0b11001110100110111101100110011000;
  value.bits[1] = 0b00000001010111101111011100100110;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalValue.bits[0] = 0b01001100110100101000000111000101;
  originalValue.bits[1] = 0b00000000000000000000000000000010;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_12) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 0;
  int valueSign = 0;
  value.bits[0] = 0b11111111111111111111111111111111;
  value.bits[1] = 0b11111111111111111111111111111111;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b11111111111111111111111111111111;
  originalValue.bits[1] = 0b11111111111111111111111111111111;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_13) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 1;
  int valueSign = 0;
  value.bits[0] = 0b11111111111111111111111111110110;
  value.bits[1] = 0b11111111111111111111111111111111;
  value.bits[2] = 0b00000000000000000000000000001001;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b11111111111111111111111111111111;
  originalValue.bits[1] = 0b11111111111111111111111111111111;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_14) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 19;
  int valueSign = 1;
  value.bits[0] = 0b10111111111111101001001110110000;
  value.bits[1] = 0b11101010111111101111100111101000;
  value.bits[2] = 0b00011001101110100010000111100001;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalValue.bits[0] = 0b00101111011101010100010100010001;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_15) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 21;
  int valueSign = 0;
  value.bits[0] = 0b10010001000010101111010011001010;
  value.bits[1] = 0b11000000010001011101010111110010;
  value.bits[2] = 0b00100111111001000001101100000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000101111000110000101001101;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_16) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 7;
  int valueSign = 1;
  value.bits[0] = 0b00101001001100110110011100000111;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalValue.bits[0] = 0b00000000000000000000000001000101;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_17) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 12;
  int valueSign = 0;
  value.bits[0] = 0b00100110011110011110000000000000;
  value.bits[1] = 0b01100101111110011111000000101100;
  value.bits[2] = 0b00000000000000000000001011011000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00100000111000011110100000111110;
  originalValue.bits[1] = 0b00000000000000000000000000000011;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_18) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 0;
  int valueSign = 0;
  value.bits[0] = 0b11111111111111111111111111111111;
  value.bits[1] = 0b11111111111111111111111111111111;
  value.bits[2] = 0b11111111111111111111111111111111;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b11111111111111111111111111111111;
  originalValue.bits[1] = 0b11111111111111111111111111111111;
  originalValue.bits[2] = 0b11111111111111111111111111111111;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_truncate_test_19) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 16;
  int valueSign = 1;
  value.bits[0] = 0b10010011100100010011000000000000;
  value.bits[1] = 0b00100110110100100010010100001001;
  value.bits[2] = 0b00000000000100011101011101011110;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_truncate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalValue.bits[0] = 0b10000000100011110101101001110011;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_negate_test_0) {
  s21_decimal value = {0};
  s21_decimal* result = NULL;

  int originalReturnValue = 1;
  int ourReturnValue = s21_negate(value, result);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_negate_test_1) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 4;
  int valueSign = 0;
  value.bits[0] = 0b00000000000000000101001011110010;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_negate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = valuePowerOfTen;
  int originalValueSign = 1;
  originalValue.bits[0] = 0b00000000000000000101001011110010;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_negate_test_2) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 6;
  int valueSign = 0;
  value.bits[0] = 0b00011011001111010100010001000001;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_negate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = valuePowerOfTen;
  int originalValueSign = 1;
  originalValue.bits[0] = 0b00011011001111010100010001000001;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_negate_test_3) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 3;
  int valueSign = 0;
  value.bits[0] = 0b00000000000000000000011111010000;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_negate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = valuePowerOfTen;
  int originalValueSign = 1;
  originalValue.bits[0] = 0b00000000000000000000011111010000;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_negate_test_4) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 18;
  int valueSign = 1;
  value.bits[0] = 0b00000000000000000000000000000000;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_negate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = valuePowerOfTen;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000000;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_negate_test_5) {
  s21_decimal value = {0};
  s21_decimal originalValue = {0};
  s21_decimal result = {0};

  int valuePowerOfTen = 0;
  int valueSign = 1;
  value.bits[0] = 0b00000000000000000000000000000011;
  value.bits[1] = 0b00000000000000000000000000000000;
  value.bits[2] = 0b00000000000000000000000000000000;
  value.bits[3] |= (valuePowerOfTen << 16);
  value.bits[3] |= (valueSign << 31);

  int ourReturnValue = s21_negate(value, &result);
  int originalReturnValue = 0;

  int originalValuePowerOfTen = valuePowerOfTen;
  int originalValueSign = 0;
  originalValue.bits[0] = 0b00000000000000000000000000000011;
  originalValue.bits[1] = 0b00000000000000000000000000000000;
  originalValue.bits[2] = 0b00000000000000000000000000000000;
  originalValue.bits[3] |= (originalValuePowerOfTen << 16);
  originalValue.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalValue.bits[3], result.bits[3]);
  ck_assert_int_eq(originalValue.bits[2], result.bits[2]);
  ck_assert_int_eq(originalValue.bits[1], result.bits[1]);
  ck_assert_int_eq(originalValue.bits[0], result.bits[0]);
  ck_assert_int_eq(originalReturnValue, ourReturnValue);
}
END_TEST

void applyMathSuite(Suite* mainSuite, TCase* mainTestCaseCore) {
  tcase_add_test(mainTestCaseCore, s21_floor_test_0);
  tcase_add_test(mainTestCaseCore, s21_floor_test_1);
  tcase_add_test(mainTestCaseCore, s21_floor_test_2);
  tcase_add_test(mainTestCaseCore, s21_floor_test_3);
  tcase_add_test(mainTestCaseCore, s21_floor_test_4);
  tcase_add_test(mainTestCaseCore, s21_floor_test_5);
  tcase_add_test(mainTestCaseCore, s21_floor_test_6);
  tcase_add_test(mainTestCaseCore, s21_floor_test_7);
  tcase_add_test(mainTestCaseCore, s21_floor_test_8);
  tcase_add_test(mainTestCaseCore, s21_floor_test_9);
  tcase_add_test(mainTestCaseCore, s21_floor_test_10);

  tcase_add_test(mainTestCaseCore, s21_round_test_0);
  tcase_add_test(mainTestCaseCore, s21_round_test_1);
  tcase_add_test(mainTestCaseCore, s21_round_test_2);
  tcase_add_test(mainTestCaseCore, s21_round_test_3);
  tcase_add_test(mainTestCaseCore, s21_round_test_4);
  tcase_add_test(mainTestCaseCore, s21_round_test_5);
  tcase_add_test(mainTestCaseCore, s21_round_test_6);
  tcase_add_test(mainTestCaseCore, s21_round_test_7);
  tcase_add_test(mainTestCaseCore, s21_round_test_8);
  tcase_add_test(mainTestCaseCore, s21_round_test_9);
  tcase_add_test(mainTestCaseCore, s21_round_test_10);
  tcase_add_test(mainTestCaseCore, s21_round_test_11);
  tcase_add_test(mainTestCaseCore, s21_round_test_12);

  tcase_add_test(mainTestCaseCore, s21_truncate_test_0);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_1);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_2);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_3);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_4);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_5);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_6);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_7);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_8);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_9);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_10);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_11);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_12);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_13);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_14);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_15);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_16);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_17);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_18);
  tcase_add_test(mainTestCaseCore, s21_truncate_test_19);

  tcase_add_test(mainTestCaseCore, s21_negate_test_0);
  tcase_add_test(mainTestCaseCore, s21_negate_test_1);
  tcase_add_test(mainTestCaseCore, s21_negate_test_2);
  tcase_add_test(mainTestCaseCore, s21_negate_test_3);
  tcase_add_test(mainTestCaseCore, s21_negate_test_4);
  tcase_add_test(mainTestCaseCore, s21_negate_test_5);

  suite_add_tcase(mainSuite, mainTestCaseCore);
}
