#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H

#include <stdbool.h>
#include <stdio.h>

#define S21_NAN 0.0 / 0.0
#define S21_INF 1.0 / 0.0

#define DECIMAL_MAX                           \
  (s21_decimal) {                             \
    { 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0 } \
  }
#define DECIMAL_MIN                                 \
  (s21_decimal) {                                   \
    { 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1 << 31 } \
  }

typedef struct {
  unsigned int bits[4];
} s21_decimal;

//                  Арифметические операторы
/* Функции возвращают код ошибки:
 *0 - OK
 *1 - число слишком велико или равно бесконечности
 *2 - число слишком мало или равно отрицательной бесконечности
 */
int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
/* Функции возвращают код ошибки:
 *0 - OK
 *1 - число слишком велико или равно бесконечности
 *2 - число слишком мало или равно отрицательной бесконечности
 */
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
/* Функции возвращают код ошибки:
 *0 - OK
 *1 - число слишком велико или равно бесконечности
 *2 - число слишком мало или равно отрицательной бесконечности
 */
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
/* Функции возвращают код ошибки:
 *0 - OK
 *1 - число слишком велико или равно бесконечности
 *2 - число слишком мало или равно отрицательной бесконечности
 *3 - деление на 0
 */
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

//                  Операторы сравнения
/*Возвращаемое значение:
 * FALSE - не меньше
 * TRUE - меньше
 */
int s21_is_less(s21_decimal num1, s21_decimal num2);
int s21_is_less_or_equal(s21_decimal num1, s21_decimal num2);
int s21_is_greater(s21_decimal num1, s21_decimal num2);
int s21_is_greater_or_equal(s21_decimal num1, s21_decimal num2);
int s21_is_equal(s21_decimal num1, s21_decimal num2);
int s21_is_not_equal(s21_decimal num1, s21_decimal num2);

//                  Преобразователи
// Возвращаемое значение: 0 - OK || 1 - ошибка конвертации
int s21_from_int_to_decimal(int src, s21_decimal *dst);
// Возвращаемое значение: 0 - OK || 1 - ошибка конвертации
int s21_from_float_to_decimal(float src, s21_decimal *dst);
// Возвращаемое значение: 0 - OK || 1 - ошибка конвертации
int s21_from_decimal_to_int(s21_decimal src, int *dst);
// Возвращаемое значение: 0 - OK || 1 - ошибка конвертации
int s21_from_decimal_to_float(s21_decimal src, float *dst);

//                  Другие функции
/*Округляет указанное Decimal число до ближайшего целого числа в сторону
отрицательной бесконечности.
* Возвращаемое значение - код ошибки: 0 - OK || 1 - ошибка вычисления
*/
int s21_floor(s21_decimal value, s21_decimal *result);
/*Округляет Decimal до ближайшего целого числа.
 * Возвращаемое значение - код ошибки: 0 - OK || 1 - ошибка вычисления
 */
int s21_round(s21_decimal value, s21_decimal *result);
/*Возвращает целые цифры указанного Decimal числа; любые дробные цифры
  отбрасываются, включая конечные нули.
 * Возвращаемое значение - код ошибки: 0 - OK || 1 - ошибка вычисления
 */
int s21_truncate(s21_decimal value, s21_decimal *result);
/*Возвращает результат умножения указанного Decimal на -1.
 * Возвращаемое значение - код ошибки: 0 - OK || 1 - ошибка вычисления
 */
int s21_negate(s21_decimal value, s21_decimal *result);

#endif
