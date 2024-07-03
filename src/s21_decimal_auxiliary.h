#ifndef S21_DECIMAL_AUXILIARY_H
#define S21_DECIMAL_AUXILIARY_H

#include "s21_decimal.h"

typedef struct {
  unsigned int bits[6];
} s21_bigDecimal;

// возвращает значение N-ого бита
int s21_getBit(const s21_decimal *value, int bit);
// возвращает значение N-ого бита float
int s21_getBitToFloat(double number, int bit_number);
// возвращает остаток от деления х на у
long double s21_fmod(double x, double y);
// устанавливает значение(new_bit) на заданное место(bit)
void s21_setBit(s21_decimal *value, int bit, int new_bit);
// инициализирует переменную нулями
void s21_clearBits(s21_decimal *ptr);
/*Возвращаемые значения
 * 0 - плюс
 * 1 - минус
 */
int s21_getSign(const s21_decimal *value);
// устанавливет 1 или 0 на 31 бит в bits[3]
void s21_setSign(s21_decimal *value, int sign);
// возвращает значение степени из bits[3]
int s21_getScaleFactor(const s21_decimal *value);
// устанавливает значение степени в bits[3]
void s21_setScaleFactor(s21_decimal *value, int scale);

/*Возвращаемые значения
 * 0 - одинаковые знаки
 * 1 - первое положительное
 * -1 - второе положительное
 */
int s21_checkNegForBothDecimal(s21_decimal *value1, s21_decimal *value2);
// если степени чисел разные, то приводит их к одной степени
void s21_scaleNormalizationForBotwDecimal(s21_decimal *value1,
                                          s21_decimal *value2);
/*Возвращаемые значения:
 * false - если одно из чисел не нуль
 * true - если оба чилса равны нулю
 */
bool s21_checkZeroForBothDecimal(s21_decimal a, s21_decimal b);

// сдвиг всего числа (bits[0], bits[1], bits[2]) влево на shiftValue
s21_decimal s21_shiftLeft(const s21_decimal *value, int shiftValue);

// деление на число
void s21_divideByNumber(s21_decimal value_1, s21_decimal *result,
                        s21_decimal *rem, int number);

// элемениарное сравнение до bits[3]
bool s21_greater(s21_decimal value_1, s21_decimal value_2);

// побитовое вычитание
void s21_subBitByBit(s21_decimal value_1, s21_decimal value_2,
                     s21_decimal *result);

// модуль числа х
long double s21_fabs(double x);

// приведение к общему знаменателю
void s21_bringToCommonScaleFactor(s21_decimal *firstValue,
                                  s21_decimal *secondValue);

bool s21_decimalIsZero(const s21_decimal *value);

void s21_convertToBigDecimal(const s21_decimal *source,
                             s21_bigDecimal *destination);

int s21_convertFromBigDecimal(const s21_bigDecimal *source,
                              s21_decimal *destination);

bool s21_bigDecimalIsZero(const s21_bigDecimal *value);

void s21_bigDecimalSetBit(s21_bigDecimal *value, int bitIndex, int newBit);

int s21_bigDecimalGetBit(const s21_bigDecimal *value, int bitIndex);

int s21_bigDecimalGetSign(const s21_bigDecimal *value);

void s21_bigDecimalSetSign(s21_bigDecimal *value, int sign);

s21_bigDecimal s21_bigDecimalShiftLeft(s21_bigDecimal value, int shift);

s21_bigDecimal s21_addBigDecimal(const s21_bigDecimal *firstValue,
                                 const s21_bigDecimal *secondValue);

void s21_subtractBigDecimal(s21_bigDecimal firstValue,
                            s21_bigDecimal secondValue, s21_bigDecimal *result);

void s21_divideBigDecimal(s21_bigDecimal first, s21_bigDecimal second,
                          s21_bigDecimal *result, s21_bigDecimal *remainder);

void s21_bigDecimalBringToCommonScaleFactor(s21_bigDecimal *firstValue,
                                            s21_bigDecimal *secondValue);

void s21_bigDecimalMultiply(s21_bigDecimal firstValue,
                            s21_bigDecimal secondValue, s21_bigDecimal *result);

bool s21_bigDecimalGreaterThan(const s21_bigDecimal *first,
                               const s21_bigDecimal *second);

bool s21_bigDecimalLessThan(const s21_bigDecimal *first,
                            const s21_bigDecimal *second);

bool s21_bigDecimalEqual(const s21_bigDecimal *first,
                         const s21_bigDecimal *second);

int s21_bigDecimalGetScaleFactor(const s21_bigDecimal *value);

int s21_bigDecimalGetLastBit(const s21_bigDecimal *value);

int s21_roundResult(s21_bigDecimal bigDecimalResult, s21_decimal *roundedResult,
                    int *resultScaleFactor);

void s21_bigDecimalClearBits(s21_bigDecimal *value);

int s21_getBit2(int number, int position);
int s21_setBit2(int number, int position);
int s21_getScale(s21_decimal *dst);

int s21_try_to_normalize_this(s21_decimal *num, int nor_num);
int s21_check_decimal_part(s21_decimal num1, s21_decimal num2);
int s21_check_decimal_part_eql(s21_decimal num1, s21_decimal num2);
int s21_sign_check(s21_decimal num1, s21_decimal num2);

#endif
