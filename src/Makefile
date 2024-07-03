C = gcc
CFLAGS = -g -std=c11 -Wall -Werror -Wextra -Wshadow
CCOV = -fprofile-arcs -ftest-coverage
OS := $(shell uname -s)

LIB_SOURCES = s21_decimal_auxiliary.c  \
			  s21_decimal_arithmetic.c \
			  s21_big_decimal.c \
			  s21_decimal_comparison.c \
			  s21_decimal_converters.c \
			  s21_decimal_math.c
LIB_OBJECTS = $(LIB_SOURCES:.c=.o)

TEST_SOURCES = tests/arithmetic_tests.c \
			   tests/comparison_tests.c \
			   tests/math_tests.c       \
			   tests/converters_tests.c

all: test

test: s21_decimal.a
ifeq ($(OS), Linux)
	$(C) $(CFLAGS) tests/s21_decimal_tests.c $(TEST_SOURCES) s21_decimal.a -o test -lcheck -lpthread -lm -lsubunit
else
	$(C) $(CFLAGS) tests/s21_decimal_tests.c $(TEST_SOURCES) s21_decimal.a -o test -lcheck -lm
endif
	./test

s21_decimal.a:
	$(C) $(CFLAGS) -c $(LIB_SOURCES)
	ar rcs s21_decimal.a $(LIB_OBJECTS)

gcov_report: s21_decimal.a
ifeq ($(OS), Linux)
	$(C) tests/s21_decimal_tests.c $(TEST_SOURCES) $(CFLAGS) $(CCOV) $(LIB_SOURCES) s21_decimal.a -o test_cov -lcheck -lpthread -lm -lsubunit
else
	$(C) tests/s21_decimal_tests.c $(TEST_SOURCES) $(CFLAGS) $(CCOV) $(LIB_SOURCES) s21_decimal.a -o test_cov -lcheck -lm
endif
	./test_cov
	lcov -t "decimal" -o decimal.info -c -d .
	genhtml -o report decimal.info
	open report/index.html

clean:
	rm -rf test test_cov *.o *.gcda *.gcno *.info *.a
	rm -rf report/

rebuild:
	make clean
	make all

clang:
	clang-format -i --style=Google *.c *.h tests/*.c tests/*.h
	clang-format -n --style=Google *.c *.h tests/*.c tests/*.h