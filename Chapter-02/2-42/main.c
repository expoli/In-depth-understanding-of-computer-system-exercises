#include <stdio.h>

int div16(int x) {
    return x >> 4;
}

int main() {
    printf("%d\n", div16(-15));
    return 0;
}
