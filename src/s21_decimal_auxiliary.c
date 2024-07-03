#include "s21_decimal_auxiliary.h"

#include <limits.h>
#include <math.h>
#include <stdlib.h>

#include "s21_constants.h"

int s21_getBit(const s21_decimal* value, int bitIndex) {
  unsigned int bitMask = 1u << (bitIndex % S21_DECIMAL_BIT_SIZE);
  return (value->bits[bitIndex / S21_DECIMAL_BIT_SIZE] & bitMask) ? 1 : 0;
}

int s21_getBitToFloat(double number, int bit_number) {
  int result = -1;
  for (int i = 0; i < bit_number; i++) number = floor(number / 2);
  result = (int)s21_fmod(number, 2.0);
  return result;
}

long double s21_fmod(double x, double y) {
  long double n = 0;
  int v = x / y;
  n = x - y * v;
  if (y == 0) n = S21_NAN;
  if (x == S21_INF) n = S21_NAN;
  if (y == S21_INF) n = 0;
  if (x != 0 && y == S21_INF) n = S21_NAN;
  return n;
}

void s21_setBit(s21_decimal* value, int bitIndex, int newBit) {
  unsigned int mask = 1u << (bitIndex % S21_DECIMAL_BIT_SIZE);
  if (newBit) {
    value->bits[bitIndex / S21_DECIMAL_BIT_SIZE] |= mask;
  } else {
    value->bits[bitIndex / S21_DECIMAL_BIT_SIZE] &= ~mask;
  }
}

void s21_clearBits(s21_decimal* value) {
  value->bits[0] = 0;
  value->bits[1] = 0;
  value->bits[2] = 0;
  value->bits[3] = 0;
}

int s21_getSign(const s21_decimal* value) {
  return s21_getBit(value, S21_DECIMAL_SIGN_BIT_INDEX);
}

void s21_setSign(s21_decimal* value, int sign) {
  s21_setBit(value, S21_DECIMAL_SIGN_BIT_INDEX, sign);
}

int s21_getScaleFactor(const s21_decimal* value) {
  unsigned int decimalBit = value->bits[3];
  int scaleFactor = decimalBit >> S21_SCALE_FACTOR_START_INDEX;
  return (char)scaleFactor;
}

void s21_setScaleFactor(s21_decimal* value, int scale) {
  for (int i = 112; i < 119; i++) {
    s21_setBit(value, i, scale & 1);
    scale >>= 1;
  }
}

s21_decimal s21_shiftLeft(const s21_decimal* value, int shiftValue) {
  s21_decimal result = *value;
  for (int i = 0; i < shiftValue; ++i) {
    int thirtyFirstBit = s21_getBit(&result, 31);
    int sixtyThirdBit = s21_getBit(&result, 63);
    result.bits[0] <<= 1;
    result.bits[1] <<= 1;
    result.bits[2] <<= 1;
    if (thirtyFirstBit) {
      s21_setBit(&result, 32, thirtyFirstBit);
    }
    if (sixtyThirdBit) {
      s21_setBit(&result, 64, sixtyThirdBit);
    }
  }

  return result;
}

void s21_divideByNumber(s21_decimal value_1, s21_decimal* result,
                        s21_decimal* rem, int number) {
  s21_clearBits(result);
  s21_clearBits(rem);
  s21_decimal value_2 = {0};
  value_2.bits[0] = number;
  for (int i = S21_MAX_BIT_INDEX - 1; i >= 0; --i) {
    *rem = s21_shiftLeft(rem, 1);
    if (s21_getBit(&value_1, i)) s21_setBit(rem, 0, 1);
    if (s21_greater(*rem, value_2)) {
      s21_subBitByBit(*rem, value_2, rem);
      s21_setBit(result, i, 1);
    }
  }
}

bool s21_greater(s21_decimal value_1, s21_decimal value_2) {
  bool comp = true;
  for (int i = 2; i >= 0; --i) {
    if (value_1.bits[i] < value_2.bits[i]) comp = false;
  }
  return comp;
}

void s21_subBitByBit(s21_decimal value_1, s21_decimal value_2,
                     s21_decimal* result) {
  int flagSub = 0;
  for (int i = 0; i < S21_MAX_BIT_INDEX; ++i) {
    if (!(s21_getBit(&value_1, i)) && s21_getBit(&value_2, i)) {
      int j = i;
      for (; (j < S21_MAX_BIT_INDEX) && (s21_getBit(&value_1, j) == 0); ++j)
        s21_setBit(&value_1, j, 1);
      s21_setBit(&value_1, j, 0);
      flagSub = 1;
    }
    int number = s21_getBit(&value_1, i) - s21_getBit(&value_2, i) - flagSub;
    s21_setBit(result, i, s21_fabs(number));
    flagSub = 0;
  }
}

long double s21_fabs(double x) {
  if (x < 0) {
    x = x * (-1);
  }
  return x;
}

bool s21_decimalIsZero(const s21_decimal* value) {
  return !(value->bits[0] || value->bits[1] || value->bits[2]);
}

void s21_convertToBigDecimal(const s21_decimal* source,
                             s21_bigDecimal* destination) {
  destination->bits[0] = source->bits[0];
  destination->bits[1] = source->bits[1];
  destination->bits[2] = source->bits[2];
  destination->bits[5] = source->bits[3];
}

int s21_convertFromBigDecimal(const s21_bigDecimal* source,
                              s21_decimal* destination) {
  int errorCode = S21_ERROR_OK;
  if (source->bits[3] != 0 || source->bits[4] != 0)
    errorCode = S21_ERROR_NUMBER_TOO_LARGE;
  if (errorCode == S21_ERROR_OK) {
    destination->bits[0] = source->bits[0];
    destination->bits[1] = source->bits[1];
    destination->bits[2] = source->bits[2];
  }
  return errorCode;
}

bool s21_bigDecimalIsZero(const s21_bigDecimal* value) {
  return !(value->bits[0] || value->bits[1] || value->bits[2] ||
           value->bits[3] || value->bits[4] || value->bits[5]);
}

void s21_bigDecimalSetBit(s21_bigDecimal* value, int bitIndex, int newBit) {
  unsigned int mask = 1u << (bitIndex % S21_DECIMAL_BIT_SIZE);
  if (newBit)
    value->bits[bitIndex / S21_DECIMAL_BIT_SIZE] |= mask;
  else
    value->bits[bitIndex / S21_DECIMAL_BIT_SIZE] &= ~mask;
}

int s21_bigDecimalGetBit(const s21_bigDecimal* value, int bitIndex) {
  unsigned int bitMask = 1u << (bitIndex % S21_DECIMAL_BIT_SIZE);
  return (value->bits[bitIndex / S21_DECIMAL_BIT_SIZE] & bitMask) ? 1 : 0;
}

s21_bigDecimal s21_bigDecimalShiftLeft(s21_bigDecimal value, int shift) {
  s21_bigDecimal result = value;
  for (int i = 0; i < shift; ++i) {
    int thirtyFirstBit = s21_bigDecimalGetBit(&result, 31);
    int sixtyThirdBit = s21_bigDecimalGetBit(&result, 63);
    int ninetyFifthBit = s21_bigDecimalGetBit(&result, 95);
    int oneTwoSevenBit = s21_bigDecimalGetBit(&result, 127);
    result.bits[0] <<= 1;
    result.bits[1] <<= 1;
    result.bits[2] <<= 1;
    result.bits[3] <<= 1;
    result.bits[4] <<= 1;
    if (thirtyFirstBit) {
      s21_bigDecimalSetBit(&result, 32, thirtyFirstBit);
    }
    if (sixtyThirdBit) {
      s21_bigDecimalSetBit(&result, 64, sixtyThirdBit);
    }
    if (ninetyFifthBit) {
      s21_bigDecimalSetBit(&result, 96, ninetyFifthBit);
    }
    if (oneTwoSevenBit) {
      s21_bigDecimalSetBit(&result, 128, oneTwoSevenBit);
    }
  }

  return result;
}

s21_bigDecimal s21_addBigDecimal(const s21_bigDecimal* firstValue,
                                 const s21_bigDecimal* secondValue) {
  s21_bigDecimal result = {0};
  result.bits[5] = firstValue->bits[5];
  int carryDigit = 0;
  for (int i = 0; i < S21_BIG_DECIMAL_MAX_BIT_INDEX; ++i) {
    int number = s21_bigDecimalGetBit(firstValue, i) +
                 s21_bigDecimalGetBit(secondValue, i) + carryDigit;
    s21_bigDecimalSetBit(&result, i, number % 2);
    carryDigit = number / 2;
  }

  return result;
}

void s21_subtractBigDecimal(s21_bigDecimal firstValue,
                            s21_bigDecimal secondValue,
                            s21_bigDecimal* result) {
  int carryDigit = 0;
  for (int i = 0; i < S21_BIG_DECIMAL_MAX_BIT_INDEX; ++i) {
    if (!(s21_bigDecimalGetBit(&firstValue, i)) &&
        s21_bigDecimalGetBit(&secondValue, i)) {
      int j = i;
      for (; (j < S21_BIG_DECIMAL_MAX_BIT_INDEX) &&
             (s21_bigDecimalGetBit(&firstValue, j) == 0);
           ++j) {
        s21_bigDecimalSetBit(&firstValue, j, 1);
      }

      s21_bigDecimalSetBit(&firstValue, j, 0);
      carryDigit = 1;
    }
    int number = s21_bigDecimalGetBit(&firstValue, i) -
                 s21_bigDecimalGetBit(&secondValue, i) - carryDigit;
    s21_bigDecimalSetBit(result, i, fabs((float)number));
    carryDigit = 0;
  }
  if ((result->bits[0] | result->bits[1] | result->bits[2]) != 0)
    result->bits[5] = firstValue.bits[5];
}

void s21_divideBigDecimal(s21_bigDecimal first, s21_bigDecimal second,
                          s21_bigDecimal* result, s21_bigDecimal* remainder) {
  *remainder = first;
  s21_bigDecimal zero = {{0}};
  s21_bigDecimal one = {{1}};
  s21_bigDecimalClearBits(result);

  for (int i =
           s21_bigDecimalGetLastBit(&first) - s21_bigDecimalGetLastBit(&second);
       i >= 0; --i) {
    s21_bigDecimal firstTemporary = {0};
    s21_bigDecimal secondTemporary = {0};
    firstTemporary = s21_bigDecimalShiftLeft(second, i);
    if ((s21_bigDecimalLessThan(&firstTemporary, remainder) ||
         s21_bigDecimalEqual(&firstTemporary, remainder)) &&
        !s21_bigDecimalEqual(&firstTemporary, &zero)) {
      s21_subtractBigDecimal(*remainder, firstTemporary, remainder);
      secondTemporary = s21_bigDecimalShiftLeft(one, i);
      *result = s21_addBigDecimal(result, &secondTemporary);
    }
  }
}

bool s21_bigDecimalGreaterThan(const s21_bigDecimal* first,
                               const s21_bigDecimal* second) {
  bool greater = false;
  bool equal = true;
  for (int i = 4; i >= 0 && !greater && equal; --i) {
    greater = first->bits[i] > second->bits[i];
    equal = first->bits[i] == second->bits[i];
  }

  return greater;
}

bool s21_bigDecimalLessThan(const s21_bigDecimal* first,
                            const s21_bigDecimal* second) {
  bool less = false;
  bool equal = true;
  for (int i = 4; i >= 0 && !less && equal; --i) {
    less = first->bits[i] < second->bits[i];
    equal = first->bits[i] == second->bits[i];
  }

  return less;
}

bool s21_bigDecimalEqual(const s21_bigDecimal* first,
                         const s21_bigDecimal* second) {
  bool equal = true;
  for (size_t i = 0; i < 5 && equal; ++i) {
    equal = first->bits[i] == second->bits[i];
  }

  return equal;
}

int s21_bigDecimalGetLastBit(const s21_bigDecimal* value) {
  int i = S21_BIG_DECIMAL_MAX_BIT_INDEX - 1;
  while (!s21_bigDecimalGetBit(value, i) && i) {
    --i;
  }

  return i;
}

void s21_bigDecimalClearBits(s21_bigDecimal* value) {
  value->bits[0] = 0;
  value->bits[1] = 0;
  value->bits[2] = 0;
  value->bits[3] = 0;
  value->bits[4] = 0;
  value->bits[5] = 0;
}

void s21_bigDecimalMultiply(s21_bigDecimal firstValue,
                            s21_bigDecimal secondValue,
                            s21_bigDecimal* result) {
  for (int i = 0; i != S21_BIG_DECIMAL_MAX_BIT_INDEX; ++i) {
    s21_bigDecimal value = firstValue;
    if (s21_bigDecimalGetBit(&secondValue, i) == 1) {
      if (i != 0) {
        int step = i;
        while (step > S21_DECIMAL_BIT_SIZE - 1) {
          value.bits[4] = value.bits[3];
          value.bits[3] = value.bits[2];
          value.bits[2] = value.bits[1];
          value.bits[1] = value.bits[0];
          value.bits[0] = 0;
          step -= S21_DECIMAL_BIT_SIZE;
        }
        value = s21_bigDecimalShiftLeft(value, step);
      }
      *result = s21_addBigDecimal(result, &value);
    }
  }
}

void s21_bankRounding(s21_bigDecimal* value, s21_bigDecimal lastDigit) {
  s21_bigDecimal five = {{5}};
  s21_bigDecimal one = {{1}};
  if (s21_bigDecimalGreaterThan(&lastDigit, &five) ||
      (s21_bigDecimalEqual(&lastDigit, &five) &&
       s21_bigDecimalGetBit(value, 0))) {
    *value = s21_addBigDecimal(value, &one);
  }
}

int s21_roundResult(s21_bigDecimal bigDecimalResult, s21_decimal* roundedResult,
                    int* resultScaleFactor) {
  s21_bigDecimal lastDigit = {0};
  s21_bigDecimal maxDecimal = {{UINT_MAX, UINT_MAX, UINT_MAX}};
  s21_bigDecimal ten = {{10}};
  while (*resultScaleFactor &&
         (s21_bigDecimalGreaterThan(&bigDecimalResult, &maxDecimal) ||
          *resultScaleFactor > 28)) {
    s21_divideBigDecimal(bigDecimalResult, ten, &bigDecimalResult, &lastDigit);
    --(*resultScaleFactor);
  }

  s21_bankRounding(&bigDecimalResult, lastDigit);
  return s21_convertFromBigDecimal(&bigDecimalResult, roundedResult);
}

//               auxiliary for comparision

int s21_getScale(s21_decimal* dst) {
  int usingBit = dst->bits[3];
  int resultBit = 0;
  int usingBitCounter = 0;
  for (int i = 16; i < 23; ++i) {
    int currentBit = s21_getBit2(usingBit, i);
    if (currentBit == 0) {
      usingBitCounter += 1;
    } else {
      resultBit = s21_setBit2(resultBit, usingBitCounter);
      usingBitCounter += 1;
    }
  }
  return resultBit;
}

int s21_try_to_normalize_this(s21_decimal* num, int nor_num) {
  int flag = 0;

  unsigned int max_integer = 0;
  max_integer = s21_setBit2(max_integer, 31);
  for (int i = 0; i < nor_num; i++) {
    unsigned int temp_0 = 0;
    unsigned int temp_1 = 0;
    unsigned int temp_2 = 0;

    if ((num->bits[0]) / max_integer >= 1) {
      temp_0 = num->bits[0] /= max_integer;
      num->bits[0] %= max_integer;
    }
    num->bits[0] *= 10;

    if ((num->bits[1]) / max_integer >= 1) {
      temp_1 = num->bits[1] /= max_integer;
      num->bits[1] %= max_integer;
    }
    num->bits[1] *= 10;
    num->bits[1] += temp_0;

    if ((num->bits[2]) / max_integer >= 1) {
      temp_2 = num->bits[2] /= max_integer;
      num->bits[2] %= max_integer;
    }
    num->bits[2] *= 10;
    num->bits[2] += temp_1;

    if (temp_2 > 0) {
      flag = 1;
      break;
    }
  }
  return flag;
}

int s21_check_decimal_part(s21_decimal num1, s21_decimal num2) {
  int flag = 1;
  for (int i = 2; i >= 0; i--) {
    for (int j = 31; j >= 0; j--) {
      if (s21_getBit2(num1.bits[i], j) < s21_getBit2(num2.bits[i], j)) {
        flag = 0;
        break;
      } else if (s21_getBit2(num1.bits[i], j) > s21_getBit2(num2.bits[i], j)) {
        flag = 2;
        break;
      } else if (s21_getBit2(num1.bits[i], j) == s21_getBit2(num2.bits[i], j)) {
        continue;
      }
    }
    if (flag == 0 || flag == 2) {
      break;
    }
  }
  return flag;
}

int s21_check_decimal_part_eql(s21_decimal num1, s21_decimal num2) {
  int flag = 1;
  for (int i = 2; i >= 0; i--) {
    for (int j = 31; j >= 0; j--) {
      if (s21_getBit2(num1.bits[i], j) != s21_getBit2(num2.bits[i], j)) {
        flag = 0;
        break;
      }
    }
    if (flag == 0) {
      break;
    }
  }
  return flag;
}

int s21_sign_check(s21_decimal num1, s21_decimal num2) {
  int sign_num1 = s21_getBit2(num1.bits[3], 31);
  int sign_num2 = s21_getBit2(num2.bits[3], 31);
  int flag = 0;
  if (sign_num1 < sign_num2) {
    flag = 1;
  } else if (sign_num2 < sign_num1) {
    flag = 2;
  } else if (sign_num1 == 1 && sign_num2 == 1) {
    flag = 3;
  }
  return flag;
}

int s21_getBit2(int number, int position) { return (number >> position) & 1; }

int s21_setBit2(int number, int position) { return number | (1 << position); }
