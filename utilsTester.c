
/**
 * This is a collection of unit tests and
 * test functions for a color utilities C
 * library.
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <math.h>
#include <cmocka.h>
#include <time.h>

#include "colorUtils.h"

/**
 * For CMYK applications, accuracy only needs to be to within
 * 0.01, but other applications may require finer accuracy.
 */
const double EPSILON = 0.01;

/**
 * For randomized cyclical testing, this determines the number of
 * tests to run
 */
const int RANDOM_TEST = 1000;

/**
 * This function is used to determine if two floating
 * point numbers are "close enough" to each other based
 * on a small EPSILON value
 */
static int isClose(double x, double y) {
  return fabs(x - y) < EPSILON;
}
