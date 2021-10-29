#include <stdio.h>
#include "limits.h"

/**
 * Determine whether arguments can be added without overflow
 * If the addition overflows, the result is less than any number
 * @param x
 * @param y
 * @return
 */
int uadd_ok(unsigned x, unsigned y) {
    unsigned s = x + y;
    if (s < x)
        return 0;
    else
        return 1;
}

/**
 * The main function use the UINI_MAX to test uadd_ok function
 * @return
 */
int main() {
    printf("%d\n", uadd_ok(UINT_MAX, 1));
    printf("%d", uadd_ok(UINT_MAX - 1, 1));
    return 0;
}
