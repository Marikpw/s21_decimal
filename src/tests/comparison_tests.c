#include "comparison_tests.h"

START_TEST(s21_is_less_test_1) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(55, &value_1);
  s21_from_int_to_decimal(1, &value_2);

  ck_assert_int_eq(0, s21_is_less(value_1, value_2));
}
END_TEST

START_TEST(s21_is_less_test_2) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(-1, &value_1);
  s21_from_int_to_decimal(1, &value_2);

  ck_assert_int_eq(1, s21_is_less(value_1, value_2));
}
END_TEST

START_TEST(s21_is_less_test_3) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(321, &value_1);
  s21_from_int_to_decimal(11011, &value_2);

  ck_assert_int_eq(1, s21_is_less(value_1, value_2));
}
END_TEST

START_TEST(s21_is_less_test_4) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(155, &value_1);
  s21_from_int_to_decimal(-193847, &value_2);

  ck_assert_int_eq(0, s21_is_less(value_1, value_2));
}
END_TEST

START_TEST(s21_is_less_test_5) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(337, &value_1);
  s21_from_int_to_decimal(337, &value_2);

  ck_assert_int_eq(0, s21_is_less(value_1, value_2));
}
END_TEST

START_TEST(s21_is_less_test_7) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(-333337, &value_1);
  s21_from_int_to_decimal(-337, &value_2);

  ck_assert_int_eq(1, s21_is_less(value_1, value_2));
}
END_TEST

START_TEST(s21_is_less_or_equal_test_1) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(123, &value_1);
  s21_from_int_to_decimal(1, &value_2);

  ck_assert_int_eq(0, s21_is_less_or_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_less_or_equal_test_2) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(-1, &value_1);
  s21_from_int_to_decimal(1, &value_2);

  ck_assert_int_eq(1, s21_is_less_or_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_less_or_equal_test_3) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(1123, &value_1);
  s21_from_int_to_decimal(111111, &value_2);

  ck_assert_int_eq(1, s21_is_less_or_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_less_or_equal_test_4) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(123, &value_1);
  s21_from_int_to_decimal(1123212, &value_2);

  ck_assert_int_eq(1, s21_is_less_or_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_less_or_equal_test_5) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(0, &value_1);
  s21_from_int_to_decimal(0, &value_2);

  ck_assert_int_eq(1, s21_is_less_or_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_less_or_equal_test_6) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(322, &value_1);
  s21_from_int_to_decimal(322, &value_2);

  ck_assert_int_eq(1, s21_is_less_or_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_less_or_equal_test_7) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(-322, &value_1);
  s21_from_int_to_decimal(-322, &value_2);

  ck_assert_int_eq(1, s21_is_less_or_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_greater_test_1) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(123, &value_1);
  s21_from_int_to_decimal(1, &value_2);

  ck_assert_int_eq(1, s21_is_greater(value_1, value_2));
}
END_TEST

START_TEST(s21_is_greater_test_2) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(-1, &value_1);
  s21_from_int_to_decimal(1, &value_2);

  ck_assert_int_eq(0, s21_is_greater(value_1, value_2));
}
END_TEST

START_TEST(s21_is_greater_test_3) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};
  s21_from_int_to_decimal(112, &value_1);
  s21_from_int_to_decimal(11111, &value_2);
  ck_assert_int_eq(0, s21_is_greater(value_1, value_2));
}
END_TEST

START_TEST(s21_is_greater_test_4) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(123, &value_1);
  s21_from_int_to_decimal(112323, &value_2);

  ck_assert_int_eq(0, s21_is_greater(value_1, value_2));
}
END_TEST

START_TEST(s21_is_greater_test_5) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(123, &value_1);
  s21_from_int_to_decimal(100123, &value_2);

  ck_assert_int_eq(0, s21_is_greater(value_1, value_2));
}
END_TEST

START_TEST(s21_is_greater_test_6) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(322, &value_1);
  s21_from_int_to_decimal(322, &value_2);

  ck_assert_int_eq(0, s21_is_greater(value_1, value_2));
}
END_TEST

START_TEST(s21_is_greater_test_7) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(-1233322, &value_1);
  s21_from_int_to_decimal(-322, &value_2);

  ck_assert_int_eq(0, s21_is_greater(value_1, value_2));
}
END_TEST

START_TEST(s21_is_greaterTest2) {
  // 3838
  s21_decimal src1 = {{0}};
  s21_decimal src2 = {{0}};
  // src1 = 3;
  // src2 = 2;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(src1, src2);
  int origin = 1;
  ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest3) {
  // 3856
  s21_decimal src1 = {{0}};
  s21_decimal src2 = {{0}};
  // src1 = 3;
  // src2 = 3;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(src1, src2);
  int origin = 0;
  ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest4) {
  // 3874
  s21_decimal src1 = {{0}};
  s21_decimal src2 = {{0}};
  // src1 = 2;
  // src2 = 0;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(src1, src2);
  int origin = 1;
  ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest5) {
  // 3892
  s21_decimal src1 = {{0}};
  s21_decimal src2 = {{0}};
  // src1 = 0;
  // src2 = 3;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(src1, src2);
  int origin = 0;
  ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest6) {
  // 3910
  s21_decimal src1 = {{0}};
  s21_decimal src2 = {{0}};
  // src1 = 2;
  // src2 = 0;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(src1, src2);
  int origin = 1;
  ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest7) {
  // 3928
  s21_decimal src1 = {{0}};
  s21_decimal src2 = {{0}};
  // src1 = 6521;
  // src2 = 74121;

  src1.bits[0] = 0b00000000000000000001100101111001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000010010000110001001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(src1, src2);
  int origin = 0;
  ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest8) {
  // 3946
  s21_decimal src1 = {{0}};
  s21_decimal src2 = {{0}};
  // src1 = 4;
  // src2 = 97623323;

  src1.bits[0] = 0b00000000000000000000000000000100;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000101110100011001110100011011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(src1, src2);
  int origin = 0;
  ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest9) {
  // 3964
  s21_decimal src1 = {{0}};
  s21_decimal src2 = {{0}};
  // src1 = 65658654;
  // src2 = 5;

  src1.bits[0] = 0b00000011111010011101111100011110;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000101;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(src1, src2);
  int origin = 1;
  ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest11) {
  // 4000
  s21_decimal src1 = {{0}};
  s21_decimal src2 = {{0}};
  // src1 = 1;
  // src2 = 98745654321;

  src1.bits[0] = 0b00000000000000000000000000000001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b11111101101100110001110000110001;
  src2.bits[1] = 0b00000000000000000000000000010110;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(src1, src2);
  int origin = 0;
  ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest12) {
  // 4018
  s21_decimal src1 = {{0}};
  s21_decimal src2 = {{0}};
  // src1 = -9878798789;
  // src2 = -3;

  src1.bits[0] = 0b01001100110100101000000111000101;
  src1.bits[1] = 0b00000000000000000000000000000010;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;
  int result = s21_is_greater(src1, src2);
  int origin = 0;
  ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest13) {
  // 4036
  s21_decimal src1 = {{0}};
  s21_decimal src2 = {{0}};
  // src1 = 9999999999999999999;
  // src2 = 1;

  src1.bits[0] = 0b10001001111001111111111111111111;
  src1.bits[1] = 0b10001010110001110010001100000100;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(src1, src2);
  int origin = 1;
  ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest14) {
  // 4054
  s21_decimal src1 = {{0}};
  s21_decimal src2 = {{0}};
  // src1 = 18446744073709551615;
  // src2 = 1;

  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(src1, src2);
  int origin = 1;
  ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest15) {
  // 4072
  s21_decimal src1 = {{0}};
  s21_decimal src2 = {{0}};
  // src1 = 18446744073709551615.0;
  // src2 = 965453154;

  src1.bits[0] = 0b11111111111111111111111111110110;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b00000000000000000000000000001001;
  src1.bits[3] = 0b00000000000000010000000000000000;
  src2.bits[0] = 0b00111001100010111010010101100010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(src1, src2);
  int origin = 1;
  ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest18) {
  // 4126
  s21_decimal src1 = {{0}};
  s21_decimal src2 = {{0}};
  // src1 = 7961327845421.879754123131254;
  // src2 = 0;

  src1.bits[0] = 0b01001110111001000011100101110110;
  src1.bits[1] = 0b01001011001101011010000111011001;
  src1.bits[2] = 0b00011001101110010111010010111111;
  src1.bits[3] = 0b00000000000011110000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(src1, src2);
  int origin = 1;
  ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greaterTest19) {
  // 4144
  s21_decimal src1 = {{0}};
  s21_decimal src2 = {{0}};
  // src1 = 12345677.987654345678987654346;
  // src2 = 87654323456.9876545678987653;

  src1.bits[0] = 0b10010001000010101111010011001010;
  src1.bits[1] = 0b11000000010001011101010111110010;
  src1.bits[2] = 0b00100111111001000001101100000000;
  src1.bits[3] = 0b00000000000101010000000000000000;
  src2.bits[0] = 0b00010001110011011101000110000101;
  src2.bits[1] = 0b11110101101111000110111111000000;
  src2.bits[2] = 0b00000010110101010000111100111111;
  src2.bits[3] = 0b00000000000100000000000000000000;
  int result = s21_is_greater(src1, src2);
  int origin = 1;
  ck_assert_int_eq(result, origin);
}
END_TEST

START_TEST(s21_is_greater_or_equal_test_1) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(123, &value_1);
  s21_from_int_to_decimal(1, &value_2);

  ck_assert_int_eq(1, s21_is_greater_or_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_greater_or_equal_test_2) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(-1, &value_1);
  s21_from_int_to_decimal(1, &value_2);

  ck_assert_int_eq(0, s21_is_greater_or_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_greater_or_equal_test_3) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(1123, &value_1);
  s21_from_int_to_decimal(111111, &value_2);

  ck_assert_int_eq(0, s21_is_greater_or_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_greater_or_equal_test_4) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(123, &value_1);
  s21_from_int_to_decimal(1123212, &value_2);

  ck_assert_int_eq(0, s21_is_greater_or_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_greater_or_equal_test_5) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(0, &value_1);
  s21_from_int_to_decimal(0, &value_2);

  ck_assert_int_eq(1, s21_is_greater_or_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_greater_or_equal_test_6) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(322, &value_1);
  s21_from_int_to_decimal(322, &value_2);

  ck_assert_int_eq(1, s21_is_greater_or_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_greater_or_equal_test_7) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(-322, &value_1);
  s21_from_int_to_decimal(-322, &value_2);

  ck_assert_int_eq(1, s21_is_greater_or_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_not_equal_test_1) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(322, &value_1);
  s21_from_int_to_decimal(322, &value_2);

  ck_assert_int_eq(0, s21_is_not_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_not_equal_test_2) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(-322, &value_1);
  s21_from_int_to_decimal(-322, &value_2);

  ck_assert_int_eq(0, s21_is_not_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_not_equal_test_3) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(322, &value_1);
  s21_from_int_to_decimal(22, &value_2);

  ck_assert_int_eq(1, s21_is_not_equal(value_1, value_2));
}
END_TEST

START_TEST(s21_is_not_equal_test_4) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {0};

  s21_from_int_to_decimal(-22, &value_1);
  s21_from_int_to_decimal(-322, &value_2);

  ck_assert_int_eq(1, s21_is_not_equal(value_1, value_2));
}
END_TEST

void applyComparisonSuite(Suite *mainSuite, TCase *mainTestCaseCore) {
  tcase_add_test(mainTestCaseCore, s21_is_less_test_1);
  tcase_add_test(mainTestCaseCore, s21_is_less_test_2);
  tcase_add_test(mainTestCaseCore, s21_is_less_test_3);
  tcase_add_test(mainTestCaseCore, s21_is_less_test_4);
  tcase_add_test(mainTestCaseCore, s21_is_less_test_5);
  tcase_add_test(mainTestCaseCore, s21_is_less_test_7);

  tcase_add_test(mainTestCaseCore, s21_is_less_or_equal_test_1);
  tcase_add_test(mainTestCaseCore, s21_is_less_or_equal_test_2);
  tcase_add_test(mainTestCaseCore, s21_is_less_or_equal_test_3);
  tcase_add_test(mainTestCaseCore, s21_is_less_or_equal_test_4);
  tcase_add_test(mainTestCaseCore, s21_is_less_or_equal_test_5);
  tcase_add_test(mainTestCaseCore, s21_is_less_or_equal_test_6);
  tcase_add_test(mainTestCaseCore, s21_is_less_or_equal_test_7);

  tcase_add_test(mainTestCaseCore, s21_is_greater_test_1);
  tcase_add_test(mainTestCaseCore, s21_is_greater_test_2);
  tcase_add_test(mainTestCaseCore, s21_is_greater_test_3);
  tcase_add_test(mainTestCaseCore, s21_is_greater_test_4);
  tcase_add_test(mainTestCaseCore, s21_is_greater_test_5);
  tcase_add_test(mainTestCaseCore, s21_is_greater_test_6);
  tcase_add_test(mainTestCaseCore, s21_is_greater_test_7);
  tcase_add_test(mainTestCaseCore, s21_is_greaterTest2);
  tcase_add_test(mainTestCaseCore, s21_is_greaterTest3);
  tcase_add_test(mainTestCaseCore, s21_is_greaterTest4);
  tcase_add_test(mainTestCaseCore, s21_is_greaterTest5);
  tcase_add_test(mainTestCaseCore, s21_is_greaterTest6);
  tcase_add_test(mainTestCaseCore, s21_is_greaterTest7);
  tcase_add_test(mainTestCaseCore, s21_is_greaterTest8);
  tcase_add_test(mainTestCaseCore, s21_is_greaterTest8);
  tcase_add_test(mainTestCaseCore, s21_is_greaterTest9);
  tcase_add_test(mainTestCaseCore, s21_is_greaterTest11);
  tcase_add_test(mainTestCaseCore, s21_is_greaterTest12);
  tcase_add_test(mainTestCaseCore, s21_is_greaterTest13);
  tcase_add_test(mainTestCaseCore, s21_is_greaterTest14);
  tcase_add_test(mainTestCaseCore, s21_is_greaterTest15);
  tcase_add_test(mainTestCaseCore, s21_is_greaterTest18);
  tcase_add_test(mainTestCaseCore, s21_is_greaterTest19);

  tcase_add_test(mainTestCaseCore, s21_is_greater_or_equal_test_1);
  tcase_add_test(mainTestCaseCore, s21_is_greater_or_equal_test_2);
  tcase_add_test(mainTestCaseCore, s21_is_greater_or_equal_test_3);
  tcase_add_test(mainTestCaseCore, s21_is_greater_or_equal_test_4);
  tcase_add_test(mainTestCaseCore, s21_is_greater_or_equal_test_5);
  tcase_add_test(mainTestCaseCore, s21_is_greater_or_equal_test_6);
  tcase_add_test(mainTestCaseCore, s21_is_greater_or_equal_test_7);

  tcase_add_test(mainTestCaseCore, s21_is_not_equal_test_1);
  tcase_add_test(mainTestCaseCore, s21_is_not_equal_test_2);
  tcase_add_test(mainTestCaseCore, s21_is_not_equal_test_3);
  tcase_add_test(mainTestCaseCore, s21_is_not_equal_test_4);

  suite_add_tcase(mainSuite, mainTestCaseCore);
}
