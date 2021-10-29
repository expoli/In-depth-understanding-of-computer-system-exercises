#include <stdio.h>
#include "limits.h"

/**
 * Determine whether arguments can be added without overflow
 * @param x
 * @param y
 * @return
 */
int tadd_ok(int x, int y) {
    int s = x + y;
    if (x < 0 && y < 0 && s >= 0)
        return 0;
    if (x > 0 && y > 0 && s < 0)
        return 0;
    return 1;
}

/**
 * "%d\n" saved at .rodata region
 * @return
 */
int main() {
    printf("%d\n", tadd_ok(INT_MAX, 1));
    printf("%d\n", tadd_ok(INT_MAX, -1));
    printf("%d\n", tadd_ok(INT_MIN, -1));
    printf("%d\n", tadd_ok(INT_MIN, 1));

    return 0;
}
