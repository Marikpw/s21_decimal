#include <check.h>
#include <stdio.h>
#include <stdlib.h>

#include "../s21_decimal.h"
#include "arithmetic_tests.h"
#include "comparison_tests.h"
#include "converters_tests.h"
#include "math_tests.h"

Suite *decimalSuite(void) {
  Suite *suite;
  TCase *testCaseCore;

  suite = suite_create("decimal");
  testCaseCore = tcase_create("Core");

  applyArithmeticSuite(suite, testCaseCore);
  applyMathSuite(suite, testCaseCore);
  applyConvertersSuite(suite, testCaseCore);
  applyComparisonSuite(suite, testCaseCore);

  suite_add_tcase(suite, testCaseCore);

  return suite;
}

int main() {
  Suite *suite;
  SRunner *suiteRunner;

  suite = decimalSuite();
  suiteRunner = srunner_create(suite);

  srunner_run_all(suiteRunner, CK_NORMAL);
  srunner_ntests_failed(suiteRunner);
  srunner_free(suiteRunner);

  return 0;
}
