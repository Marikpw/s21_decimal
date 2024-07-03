#include "arithmetic_tests.h"

START_TEST(s21_add_test_1) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstValueSign = 0;
  firstValue.bits[0] = 0b00000000000000000000000000000010;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstValueSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000011;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_add(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00000000000000000000000000000101;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_add_test_2) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstValueSign = 0;
  firstValue.bits[0] = 0b00000000000000000000000000000000;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstValueSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000011;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_add(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00000000000000000000000000000011;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_add_test_3) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstValueSign = 1;
  firstValue.bits[0] = 0b01001100110100101000000111000101;
  firstValue.bits[1] = 0b00000000000000000000000000000010;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstValueSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 1;
  secondValue.bits[0] = 0b00000000000000000000000000000011;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_add(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalResult.bits[0] = 0b01001100110100101000000111001000;
  originalResult.bits[1] = 0b00000000000000000000000000000010;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_add_test_4) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstValueSign = 0;
  firstValue.bits[0] = 0b00000000000000000001100101111001;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstValueSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000010010000110001001;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_add(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00000000000000010011101100000010;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_add_test_5) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstValueSign = 1;
  firstValue.bits[0] = 0b00000000000001011001000011001100;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstValueSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000001;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_add(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalResult.bits[0] = 0b00000000000001011001000011001011;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_add_test_6) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstValueSign = 0;
  firstValue.bits[0] = 0b00000000000000000000000000000001;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstValueSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b11111101101100110001110000110001;
  secondValue.bits[1] = 0b00000000000000000000000000010110;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_add(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b11111101101100110001110000110010;
  originalResult.bits[1] = 0b00000000000000000000000000010110;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_add_test_7) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstValueSign = 1;
  firstValue.bits[0] = 0b01001100110100101000000111000101;
  firstValue.bits[1] = 0b00000000000000000000000000000010;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstValueSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 1;
  secondValue.bits[0] = 0b00000000000000000000000000000011;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_add(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalResult.bits[0] = 0b01001100110100101000000111001000;
  originalResult.bits[1] = 0b00000000000000000000000000000010;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_add_test_8) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstValueSign = 0;
  firstValue.bits[0] = 0b10001001111001111111111111111111;
  firstValue.bits[1] = 0b10001010110001110010001100000100;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstValueSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000001;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_add(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b10001001111010000000000000000000;
  originalResult.bits[1] = 0b10001010110001110010001100000100;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_add_test_9) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstValueSign = 0;
  firstValue.bits[0] = 0b11111111111111111111111111111111;
  firstValue.bits[1] = 0b11111111111111111111111111111111;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstValueSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000001;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_add(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00000000000000000000000000000000;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000001;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_add_test_11) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 15;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b01001110111001000011100101110110;
  firstValue.bits[1] = 0b01001011001101011010000111011001;
  firstValue.bits[2] = 0b00011001101110010111010010111111;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000000;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_add(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 15;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b01001110111001000011100101110110;
  originalResult.bits[1] = 0b01001011001101011010000111011001;
  originalResult.bits[2] = 0b00011001101110010111010010111111;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_add_test_12) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00100111101010100010111011100001;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00010000010100101110011001011001;
  secondValue.bits[1] = 0b00000000000111110100000111110010;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_add(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00110111111111010001010100111010;
  originalResult.bits[1] = 0b00000000000111110100000111110010;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_add_test_13) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 19;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b11111110100100001101100101011111;
  firstValue.bits[1] = 0b10000100011001000010000111101000;
  firstValue.bits[2] = 0b00000000000000000000000000000001;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 24;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b11010100101011100011110110001010;
  secondValue.bits[1] = 0b01110100000101000010011110100011;
  secondValue.bits[2] = 0b00000000000010000100000101000100;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_add(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 24;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b10011010010111001101001011101010;
  originalResult.bits[1] = 0b10111110010100100100110100010011;
  originalResult.bits[2] = 0b00000000000010101001000111100111;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_add_test_14) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 12;
  int firstNumberSign = 1;
  firstValue.bits[0] = 0b01010100010000000011110110001100;
  firstValue.bits[1] = 0b10001011010100100000010101011001;
  firstValue.bits[2] = 0b00011111101010011000000110101101;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 6;
  int secondValueSign = 1;
  secondValue.bits[0] = 0b01100101111100100100110110101100;
  secondValue.bits[1] = 0b00000000000001111010100110101011;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_add(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 12;
  int originalValueSign = 1;
  originalResult.bits[0] = 0b11010101111011100000000010001100;
  originalResult.bits[1] = 0b01111000000001011001100110101101;
  originalResult.bits[2] = 0b00011111101010011000001000100010;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_add_test_15) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 1;
  firstValue.bits[0] = 0b11111111111111111111111111111111;
  firstValue.bits[1] = 0b11111111111111111111111111111111;
  firstValue.bits[2] = 0b11111111111111111111111111111111;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b11111111111111111111111111111111;
  secondValue.bits[1] = 0b11111111111111111111111111111111;
  secondValue.bits[2] = 0b11111111111111111111111111111111;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_add(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00000000000000000000000000000000;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_add_test_16) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00000000000000000000000000000000;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 10;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b11011101111000010000101100001110;
  secondValue.bits[1] = 0b00000101010000010110101000000010;
  secondValue.bits[2] = 0b00000000010010100100000010010011;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_add(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 10;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b11011101111000010000101100001110;
  originalResult.bits[1] = 0b00000101010000010110101000000010;
  originalResult.bits[2] = 0b00000000010010100100000010010011;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_add_test_18) {
  s21_decimal first = {{4294967294, 4294967295, 4294967295, 0}};
  s21_decimal second = {{15, 0, 0, 65536}};

  s21_decimal result = {{0}};
  int ourReturnValue = s21_add(first, second, &result);

  // number too large
  s21_decimal desiredResult = {{0, 0, 0, 0}};
  ck_assert_int_eq(ourReturnValue, 1);
  ck_assert_int_eq(result.bits[0], desiredResult.bits[0]);
  ck_assert_int_eq(result.bits[1], desiredResult.bits[1]);
  ck_assert_int_eq(result.bits[2], desiredResult.bits[2]);
  ck_assert_int_eq(result.bits[3], desiredResult.bits[3]);

  s21_decimal first1 = {{4294967295, 4294967295, 4294967295, 2147483648}};
  s21_decimal second1 = {{1, 0, 0, 2147483648}};

  // number too small
  int ourReturnValue1 = s21_add(first1, second1, &result);
  ck_assert_int_eq(ourReturnValue1, 2);
  ck_assert_int_eq(result.bits[0], desiredResult.bits[0]);
  ck_assert_int_eq(result.bits[1], desiredResult.bits[1]);
  ck_assert_int_eq(result.bits[2], desiredResult.bits[2]);
  ck_assert_int_eq(result.bits[3], desiredResult.bits[3]);
}
END_TEST

START_TEST(s21_sub_test_1) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00000000000000000000000000000101;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000011;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00000000000000000000000000000010;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_2) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 1;
  firstValue.bits[0] = 0b00000000000000000000000000000011;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 1;
  secondValue.bits[0] = 0b00000000000000000000000000000110;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00000000000000000000000000000011;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_3) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00000000000000000000000000000000;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000001000;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalResult.bits[0] = 0b00000000000000000000000000001000;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_4) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00000000000000000000000000000111;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000000;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00000000000000000000000000000111;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_5) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00000000000011000000010110110011;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000111010001110000111;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00000000000010000110001000101100;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_6) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00000000000000000000000000001001;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000001000110110101111110001001;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalResult.bits[0] = 0b00000001000110110101111110000000;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_7) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 1;
  firstValue.bits[0] = 0b00000000001100001010010010100110;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000001;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalResult.bits[0] = 0b00000000001100001010010010100111;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_9) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 15;
  int firstNumberSign = 1;
  firstValue.bits[0] = 0b01110001100100011000110101000111;
  firstValue.bits[1] = 0b00001111010011100000001101011111;
  firstValue.bits[2] = 0b10110001011000010111001000100100;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000101001111011001;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 15;
  int originalValueSign = 1;
  originalResult.bits[0] = 0b01111001010101000000110101000111;
  originalResult.bits[1] = 0b00111001001100010000001100100101;
  originalResult.bits[2] = 0b10110001011000010111001000100101;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_10) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 15;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b01001110111001000011100101110110;
  firstValue.bits[1] = 0b01001011001101011010000111011001;
  firstValue.bits[2] = 0b00011001101110010111010010111111;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000000;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 15;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b01001110111001000011100101110110;
  originalResult.bits[1] = 0b01001011001101011010000111011001;
  originalResult.bits[2] = 0b00011001101110010111010010111111;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_11) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 19;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b11111110100100001101100101011111;
  firstValue.bits[1] = 0b10000100011001000010000111101000;
  firstValue.bits[2] = 0b00000000000000000000000000000001;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 24;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b11010100101011100011110110001010;
  secondValue.bits[1] = 0b01110100000101000010011110100011;
  secondValue.bits[2] = 0b00000000000010000100000101000100;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 24;
  int originalValueSign = 1;
  originalResult.bits[0] = 0b00001110111111111010100000101010;
  originalResult.bits[1] = 0b00101001110101100000001000110100;
  originalResult.bits[2] = 0b00000000000001011111000010100001;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_12) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 28;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00001011000011110111000010001101;
  firstValue.bits[1] = 0b10010110101100000101100101010001;
  firstValue.bits[2] = 0b00010001101000010111101110000001;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 17;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00010111001001010100110000000010;
  secondValue.bits[1] = 0b00000000111101010001010110011011;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 28;
  int originalValueSign = 1;
  originalResult.bits[0] = 0b01011010101111100101111101110011;
  originalResult.bits[1] = 0b00101101001111010011000001101000;
  originalResult.bits[2] = 0b00000100101010001101010101010111;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_13) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00000000000000000000000000000000;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 12;
  int secondValueSign = 1;
  secondValue.bits[0] = 0b01001111101101000110000001100101;
  secondValue.bits[1] = 0b01000010001101101011011001100001;
  secondValue.bits[2] = 0b01111010101111011000110010011010;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 12;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b01001111101101000110000001100101;
  originalResult.bits[1] = 0b01000010001101101011011001100001;
  originalResult.bits[2] = 0b01111010101111011000110010011010;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_14) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b10110110000111000111000110110100;
  firstValue.bits[1] = 0b11110011010101100100111101101000;
  firstValue.bits[2] = 0b11111111111111111111111111111111;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 1;
  secondValue.bits[0] = 0b01001001111000111000111001001011;
  secondValue.bits[1] = 0b00001100101010011011000010010111;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b11111111111111111111111111111111;
  originalResult.bits[1] = 0b11111111111111111111111111111111;
  originalResult.bits[2] = 0b11111111111111111111111111111111;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_15) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b11111111111111111111111111111111;
  firstValue.bits[1] = 0b11111111111111111111111111111111;
  firstValue.bits[2] = 0b11111111111111111111111111111111;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b11111111111111111111111111111111;
  secondValue.bits[1] = 0b11111111111111111111111111111111;
  secondValue.bits[2] = 0b11111111111111111111111111111111;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00000000000000000000000000000000;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_16) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b11111111111111111111111111111111;
  firstValue.bits[1] = 0b11111111111111111111111111111111;
  firstValue.bits[2] = 0b11111111111111111111111111111111;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 1;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000010101;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b11111111111111111111111111111101;
  originalResult.bits[1] = 0b11111111111111111111111111111111;
  originalResult.bits[2] = 0b11111111111111111111111111111111;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_17) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b11111111111111111111111111111110;
  firstValue.bits[1] = 0b11111111111111111111111111111111;
  firstValue.bits[2] = 0b11111111111111111111111111111111;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 2;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000100011;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b11111111111111111111111111111110;
  originalResult.bits[1] = 0b11111111111111111111111111111111;
  originalResult.bits[2] = 0b11111111111111111111111111111111;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_18) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 3;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00000000000000000111000111111101;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b11111111111111111111111111111111;
  secondValue.bits[1] = 0b11111111111111111111111111111111;
  secondValue.bits[2] = 0b11111111111111111111111111111111;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_sub(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalResult.bits[0] = 0b11111111111111111111111111100010;
  originalResult.bits[1] = 0b11111111111111111111111111111111;
  originalResult.bits[2] = 0b11111111111111111111111111111111;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_sub_test_19) {
  s21_decimal first = {{4294967294, 4294967295, 4294967295, 0}};
  s21_decimal second = {{15, 0, 0, 2147516416}};

  s21_decimal result = {{0}};
  int ourReturnValue = s21_sub(first, second, &result);

  s21_decimal desiredResult = {{0, 0, 0, 0}};
  ck_assert_int_eq(ourReturnValue, 1);
  ck_assert_int_eq(result.bits[0], desiredResult.bits[0]);
  ck_assert_int_eq(result.bits[1], desiredResult.bits[1]);
  ck_assert_int_eq(result.bits[2], desiredResult.bits[2]);
  ck_assert_int_eq(result.bits[3], desiredResult.bits[3]);

  s21_decimal first1 = {{4294967295, 4294967295, 4294967295, 2147483648}};
  s21_decimal second1 = {{1, 0, 0, 0}};

  int ourReturnValue1 = s21_sub(first1, second1, &result);
  ck_assert_int_eq(ourReturnValue1, 2);
  ck_assert_int_eq(result.bits[0], desiredResult.bits[0]);
  ck_assert_int_eq(result.bits[1], desiredResult.bits[1]);
  ck_assert_int_eq(result.bits[2], desiredResult.bits[2]);
  ck_assert_int_eq(result.bits[3], desiredResult.bits[3]);
}
END_TEST

START_TEST(s21_sub_test_20) {
  s21_decimal dec1 = {{0}};
  s21_decimal dec2 = {{0}};
  int tmp1 = 100;
  int tmp2 = 99999;
  int res_s21 = 0;
  int res = -99899;
  s21_decimal res1 = {{0}};
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(s21_mul_1) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00000000000000000000000000000010;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000011;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_mul(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00000000000000000000000000000110;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_mul_2) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00000000000000000000000000000000;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000011;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_mul(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00000000000000000000000000000000;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_mul_3) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00000000000000000000000000000010;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000000;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_mul(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00000000000000000000000000000000;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_mul_4) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00000000000000000001100101111001;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000010010000110001001;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_mul(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00011100110011110011101011000001;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_mul_5) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00000000000000000000000000000100;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000101110100011001110100011011;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_mul(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00010111010001100111010001101100;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_mul_6) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00000011111010011101111100011110;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000101;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_mul(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00010011100100010101101110010110;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_mul_7) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 1;
  firstValue.bits[0] = 0b00000000000001011001000011001100;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000001;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_mul(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalResult.bits[0] = 0b00000000000001011001000011001100;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_mul_8) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 1;
  firstValue.bits[0] = 0b01001100110100101000000111000101;
  firstValue.bits[1] = 0b00000000000000000000000000000010;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 1;
  secondValue.bits[0] = 0b00000000000000000000000000000011;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_mul(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b11100110011101111000010101001111;
  originalResult.bits[1] = 0b00000000000000000000000000000110;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_mul_9) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b11111111111111111111111111111111;
  firstValue.bits[1] = 0b11111111111111111111111111111111;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000001;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_mul(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b11111111111111111111111111111111;
  originalResult.bits[1] = 0b11111111111111111111111111111111;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_mul_10) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00000000000000000000000000000000;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000000;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_mul(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00000000000000000000000000000000;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_mul_11) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b11111111111111111111111111111111;
  firstValue.bits[1] = 0b11111111111111111111111111111111;
  firstValue.bits[2] = 0b11111111111111111111111111111111;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 1;
  secondValue.bits[0] = 0b00000000000000000000000000000001;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_mul(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 1;
  originalResult.bits[0] = 0b11111111111111111111111111111111;
  originalResult.bits[1] = 0b11111111111111111111111111111111;
  originalResult.bits[2] = 0b11111111111111111111111111111111;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_mul_12) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b01011111000010000000010001011011;
  firstValue.bits[1] = 0b01101101111100110111111101100111;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000011111010011010110001001110;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_mul(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b01011111001100010111011110111010;
  originalResult.bits[1] = 0b01000100111111001101101110110001;
  originalResult.bits[2] = 0b00000001101011100011011100011110;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_mul_13) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 0;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b00100111101010100010111011100001;
  firstValue.bits[1] = 0b00000000000000000000000000000000;
  firstValue.bits[2] = 0b00000000000000000000000000000000;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00010000010100101110011001011001;
  secondValue.bits[1] = 0b00000000000111110100000111110010;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_mul(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b11000100010110100111001000111001;
  originalResult.bits[1] = 0b01100100100011011110110011010011;
  originalResult.bits[2] = 0b00000000000001001101011111010011;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_mul_14) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 1;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b11111111111111111111111111111111;
  firstValue.bits[1] = 0b11111111111111111111111111111111;
  firstValue.bits[2] = 0b11111111111111111111111111111111;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 0;
  secondValue.bits[0] = 0b00000000000000000000000000000010;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_mul(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00000000000000000000000000000000;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(s21_mul_15) {
  s21_decimal firstValue = {0};
  s21_decimal secondValue = {0};
  s21_decimal ourResult = {0};
  s21_decimal originalResult = {0};
  int originalResultReturnValue = 2;

  int firstValuePowerOfTen = 0;
  int firstNumberSign = 0;
  firstValue.bits[0] = 0b11111111111111111111111111111111;
  firstValue.bits[1] = 0b11111111111111111111111111111111;
  firstValue.bits[2] = 0b11111111111111111111111111111111;
  firstValue.bits[3] |= (firstValuePowerOfTen << 16);
  firstValue.bits[3] |= (firstNumberSign << 31);

  int secondValuePowerOfTen = 0;
  int secondValueSign = 1;
  secondValue.bits[0] = 0b00000000000000000000000000000010;
  secondValue.bits[1] = 0b00000000000000000000000000000000;
  secondValue.bits[2] = 0b00000000000000000000000000000000;
  secondValue.bits[3] |= (secondValuePowerOfTen << 16);
  secondValue.bits[3] |= (secondValueSign << 31);

  int ourReturnValue = s21_mul(firstValue, secondValue, &ourResult);

  int originalValuePowerOfTen = 0;
  int originalValueSign = 0;
  originalResult.bits[0] = 0b00000000000000000000000000000000;
  originalResult.bits[1] = 0b00000000000000000000000000000000;
  originalResult.bits[2] = 0b00000000000000000000000000000000;
  originalResult.bits[3] |= (originalValuePowerOfTen << 16);
  originalResult.bits[3] |= (originalValueSign << 31);

  ck_assert_int_eq(originalResult.bits[3], ourResult.bits[3]);
  ck_assert_int_eq(originalResult.bits[2], ourResult.bits[2]);
  ck_assert_int_eq(originalResult.bits[1], ourResult.bits[1]);
  ck_assert_int_eq(originalResult.bits[0], ourResult.bits[0]);
  ck_assert_int_eq(originalResultReturnValue, ourReturnValue);
}
END_TEST

START_TEST(div_0) {
  s21_decimal val1 = {{0xffffffff, 0xffffffff, 0xffffffff, 0}};
  s21_decimal val2 = {{0xffffffff, 0xffffffff, 0xffffffff, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_div(val1, val2, &res));
  ck_assert_int_eq(1, res.bits[0]);
  ck_assert_int_eq(0, res.bits[1]);
  ck_assert_int_eq(0, res.bits[2]);
  ck_assert_int_eq(0, res.bits[3]);
}
END_TEST

START_TEST(div_1) {
  s21_decimal val1 = {{1, 0, 0, 0}};
  s21_decimal val2 = {{0, 0, 0, 0}};
  s21_decimal res = {{0}};
  // 1 / 0
  ck_assert_int_eq(3, s21_div(val1, val2, &res));
}
END_TEST

START_TEST(div_2) {
  s21_decimal val1 = {{15000, 0, 0, (3 << 16)}};
  s21_decimal val2 = {{8, 0, 0, 0}};
  s21_decimal res = {{0}};
  // 15 / 8 = 1.875
  ck_assert_int_eq(0, s21_div(val1, val2, &res));
  ck_assert_int_eq(1875, res.bits[0]);
  ck_assert_int_eq(0, res.bits[1]);
  ck_assert_int_eq(0, res.bits[2]);
  ck_assert_int_eq(3 << 16, res.bits[3]);
}
END_TEST

START_TEST(div_3) {
  s21_decimal val1 = {{15000, 0, 0, (1 << 31) | (3 << 16)}};
  s21_decimal val2 = {{8, 0, 0, 0}};
  s21_decimal res = {{0}};
  // -15 / 8 = -1.875
  ck_assert_int_eq(0, s21_div(val1, val2, &res));
  ck_assert_int_eq(1875, res.bits[0]);
  ck_assert_int_eq(0, res.bits[1]);
  ck_assert_int_eq(0, res.bits[2]);
  unsigned bit_3 = (1 << 31 | 3 << 16);
  ck_assert_int_eq(bit_3, res.bits[3]);
}
END_TEST

START_TEST(div_4) {
  s21_decimal val1 = {{15000, 0, 0, (3 << 16)}};
  s21_decimal val2 = {{8, 0, 0, (1 << 31)}};
  s21_decimal res = {{0}};
  // 15 / -8 = -1.875
  ck_assert_int_eq(0, s21_div(val1, val2, &res));
  ck_assert_int_eq(1875, res.bits[0]);
  ck_assert_int_eq(0, res.bits[1]);
  ck_assert_int_eq(0, res.bits[2]);
  unsigned bit_3 = (1 << 31 | 3 << 16);
  ck_assert_int_eq(bit_3, res.bits[3]);
}
END_TEST

START_TEST(div_5) {
  s21_decimal val1 = {{15000, 0, 0, (1 << 31) | (3 << 16)}};
  s21_decimal val2 = {{8, 0, 0, (1 << 31)}};
  s21_decimal res = {{0}};
  // -15 / -8 = 1.875
  ck_assert_int_eq(0, s21_div(val1, val2, &res));
  ck_assert_int_eq(1875, res.bits[0]);
  ck_assert_int_eq(0, res.bits[1]);
  ck_assert_int_eq(0, res.bits[2]);
  ck_assert_int_eq((3 << 16), res.bits[3]);
}
END_TEST

START_TEST(div_6) {
  s21_decimal val1 = {{5, 0, 0, 0}};
  s21_decimal val2 = {{11, 0, 0, 0}};
  s21_decimal res = {{0}};
  // 5 / 11 = 0,(45)
  ck_assert_int_eq(0, s21_div(val1, val2, &res));
}
// END_TEST

START_TEST(div_7) {
  s21_decimal val1 = {{6, 0, 0, 0}};
  s21_decimal val2 = {{11, 0, 0, 0}};
  s21_decimal res = {{0}};
  // 6 / 11 = 0,(54)
  ck_assert_int_eq(0, s21_div(val1, val2, &res));
}
END_TEST

START_TEST(div_8) {
  s21_decimal val1 = {{5, 0, 0, 0}};
  s21_decimal val2 = {{9, 0, 0, 0}};
  s21_decimal res = {{0}};
  // 5 / 9 = 0,(5)
  ck_assert_int_eq(0, s21_div(val1, val2, &res));
}
END_TEST

START_TEST(div_9) {
  s21_decimal val1 = DECIMAL_MAX;
  s21_decimal val2 = {{1, 0, 0, (1 << 16)}};
  s21_decimal res = {{0}};
  // +INF
  ck_assert_int_eq(1, s21_div(val1, val2, &res));
}
END_TEST

START_TEST(div_10) {
  s21_decimal val1 = DECIMAL_MIN;
  s21_decimal val2 = {{1, 0, 0, (1 << 16)}};
  s21_decimal res = {{0}};
  // -INF
  ck_assert_int_eq(2, s21_div(val1, val2, &res));
}
END_TEST

START_TEST(div_11) {
  s21_decimal val1 = {{0x88888888, 0x88888888, 0x88888888, 0}};
  s21_decimal val2 = {{2, 0, 0, 1 << 31}};
  s21_decimal check = {{0x44444444, 0x44444444, 0x44444444, 1 << 31}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_div(val1, val2, &res));
  ck_assert_int_eq(check.bits[0], res.bits[0]);
  ck_assert_int_eq(check.bits[1], res.bits[1]);
  ck_assert_int_eq(check.bits[2], res.bits[2]);
  ck_assert_int_eq(check.bits[3], res.bits[3]);
}
END_TEST

START_TEST(div_12) {
  s21_decimal val1 = {{35, 0, 0, (1 << 16)}};
  s21_decimal val2 = {{5, 0, 0, (2 << 16)}};
  s21_decimal check = {{70, 0, 0, 0}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_div(val1, val2, &res));
  ck_assert_int_eq(check.bits[0], res.bits[0]);
  ck_assert_int_eq(check.bits[1], res.bits[1]);
  ck_assert_int_eq(check.bits[2], res.bits[2]);
  ck_assert_int_eq(check.bits[3], res.bits[3]);
}
END_TEST

START_TEST(div_13) {
  s21_decimal val1 = {{754, 0, 0, (30 << 16)}};
  s21_decimal val2 = {{2, 0, 0, (1 << 16)}};
  s21_decimal check = {{38, 0, 0, (28 << 16)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_div(val1, val2, &res));
  ck_assert_int_eq(check.bits[0], res.bits[0]);
  ck_assert_int_eq(check.bits[1], res.bits[1]);
  ck_assert_int_eq(check.bits[2], res.bits[2]);
  ck_assert_int_eq(check.bits[3], res.bits[3]);
}
END_TEST

void applyArithmeticSuite(Suite *mainSuite, TCase *mainTestCaseCore) {
  tcase_add_test(mainTestCaseCore, s21_add_test_1);
  tcase_add_test(mainTestCaseCore, s21_add_test_2);
  tcase_add_test(mainTestCaseCore, s21_add_test_3);
  tcase_add_test(mainTestCaseCore, s21_add_test_4);
  tcase_add_test(mainTestCaseCore, s21_add_test_5);
  tcase_add_test(mainTestCaseCore, s21_add_test_6);
  tcase_add_test(mainTestCaseCore, s21_add_test_7);
  tcase_add_test(mainTestCaseCore, s21_add_test_8);
  tcase_add_test(mainTestCaseCore, s21_add_test_9);
  tcase_add_test(mainTestCaseCore, s21_add_test_11);
  tcase_add_test(mainTestCaseCore, s21_add_test_12);
  tcase_add_test(mainTestCaseCore, s21_add_test_13);
  tcase_add_test(mainTestCaseCore, s21_add_test_14);
  tcase_add_test(mainTestCaseCore, s21_add_test_15);
  tcase_add_test(mainTestCaseCore, s21_add_test_16);
  tcase_add_test(mainTestCaseCore, s21_add_test_18);

  tcase_add_test(mainTestCaseCore, s21_sub_test_1);
  tcase_add_test(mainTestCaseCore, s21_sub_test_2);
  tcase_add_test(mainTestCaseCore, s21_sub_test_3);
  tcase_add_test(mainTestCaseCore, s21_sub_test_4);
  tcase_add_test(mainTestCaseCore, s21_sub_test_5);
  tcase_add_test(mainTestCaseCore, s21_sub_test_6);
  tcase_add_test(mainTestCaseCore, s21_sub_test_7);
  tcase_add_test(mainTestCaseCore, s21_sub_test_9);
  tcase_add_test(mainTestCaseCore, s21_sub_test_10);
  tcase_add_test(mainTestCaseCore, s21_sub_test_11);
  tcase_add_test(mainTestCaseCore, s21_sub_test_12);
  tcase_add_test(mainTestCaseCore, s21_sub_test_13);
  tcase_add_test(mainTestCaseCore, s21_sub_test_14);
  tcase_add_test(mainTestCaseCore, s21_sub_test_15);
  tcase_add_test(mainTestCaseCore, s21_sub_test_16);
  tcase_add_test(mainTestCaseCore, s21_sub_test_17);
  tcase_add_test(mainTestCaseCore, s21_sub_test_18);
  tcase_add_test(mainTestCaseCore, s21_sub_test_19);
  tcase_add_test(mainTestCaseCore, s21_sub_test_20);

  tcase_add_test(mainTestCaseCore, s21_mul_1);
  tcase_add_test(mainTestCaseCore, s21_mul_2);
  tcase_add_test(mainTestCaseCore, s21_mul_3);
  tcase_add_test(mainTestCaseCore, s21_mul_4);
  tcase_add_test(mainTestCaseCore, s21_mul_5);
  tcase_add_test(mainTestCaseCore, s21_mul_6);
  tcase_add_test(mainTestCaseCore, s21_mul_7);
  tcase_add_test(mainTestCaseCore, s21_mul_8);
  tcase_add_test(mainTestCaseCore, s21_mul_9);
  tcase_add_test(mainTestCaseCore, s21_mul_10);
  tcase_add_test(mainTestCaseCore, s21_mul_11);
  tcase_add_test(mainTestCaseCore, s21_mul_12);
  tcase_add_test(mainTestCaseCore, s21_mul_13);
  tcase_add_test(mainTestCaseCore, s21_mul_14);
  tcase_add_test(mainTestCaseCore, s21_mul_15);

  tcase_add_test(mainTestCaseCore, div_0);
  tcase_add_test(mainTestCaseCore, div_1);
  tcase_add_test(mainTestCaseCore, div_2);
  tcase_add_test(mainTestCaseCore, div_3);
  tcase_add_test(mainTestCaseCore, div_4);
  tcase_add_test(mainTestCaseCore, div_5);
  tcase_add_test(mainTestCaseCore, div_6);
  tcase_add_test(mainTestCaseCore, div_7);
  tcase_add_test(mainTestCaseCore, div_8);
  tcase_add_test(mainTestCaseCore, div_9);
  tcase_add_test(mainTestCaseCore, div_10);
  tcase_add_test(mainTestCaseCore, div_11);
  tcase_add_test(mainTestCaseCore, div_12);
  tcase_add_test(mainTestCaseCore, div_13);

  suite_add_tcase(mainSuite, mainTestCaseCore);
}
