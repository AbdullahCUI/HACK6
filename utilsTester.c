/**
 * This function is used to determine if two integer
 * numbers are "close enough" to each other; specifically
 * if their difference is 1 or less.
 */
static int isCloseInt(int x, int y) {
  return abs(x - y) <= 1;
}

/**
 * assert that for any random r, g, b, converting from RGB->CMYK->RGB
 * doesn't change the values
 */
static void testRandomCyclicalEquality(void **state) {
    srandom(time(NULL));

    for (int i = 0; i < RANDOM_TEST; i++) {
        int r, g, b, origR, origG, origB;
        origR = r = random() % 255;
        origG = g = random() % 255;
        origB = b = random() % 255;
        double c, m, y, k;

        rgbToCMYK(r, g, b, &c, &m, &y, &k);
        cmykToRGB(c, m, y, k, &r, &g, &b);

        // have to subtract 1 to allow for minor rounding differences
        assert_true(
                (r == origR || r == origR - 1) &&
                (g == origG || g == origG - 1) &&
                (b == origB || b == origB - 1)
        );
    }
}
/**
 * This function is used to determine if two integer
 * numbers are "close enough" to each other; specifically
 * if their difference is 1 or less.
 */
static int isCloseInt(int x, int y) {
  return abs(x - y) <= 1;
}

/**
 * assert that for any random r, g, b, converting from RGB->CMYK->RGB
 * doesn't change the values
 */
static void testRandomCyclicalEquality(void **state) {
    srandom(time(NULL));

    for (int i = 0; i < RANDOM_TEST; i++) {
        int r, g, b, origR, origG, origB;
        origR = r = random() % 255;
        origG = g = random() % 255;
        origB = b = random() % 255;
        double c, m, y, k;

        rgbToCMYK(r, g, b, &c, &m, &y, &k);
        cmykToRGB(c, m, y, k, &r, &g, &b);

        // have to subtract 1 to allow for minor rounding differences
        assert_true(
                (r == origR || r == origR - 1) &&
                (g == origG || g == origG - 1) &&
                (b == origB || b == origB - 1)
        );
    }
}
