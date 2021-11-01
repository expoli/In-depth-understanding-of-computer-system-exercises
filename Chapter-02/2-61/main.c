#include <stdio.h>

/**
 * x 的任何位都等于1
 * @param x
 * @return
 */
int fun_A(int x) {
    int len = sizeof(int) * 8;
    for (int i = 0; i < len; ++i) {
//        printf("% .1x", x >> i & 0x01);
        if (x >> i & 0x01)
            continue;
        else
            return 0;
    }
    return 1;
}

int fun_B(int x) {
    int len = sizeof(int) * 8;
    for (int i = 0; i < len; ++i) {
//        printf("% .1x", x >> i & 0x01);
        if (!(x >> i & 0x01))
            continue;
        else
            return 0;
    }
    return 1;
}

int fun_C(int x) {
    int len = 8;
    for (int i = 0; i < len; ++i) {
        if (x >> i & 0x01)
            continue;
        else
            return 0;
    }
    return 1;
}

int fun_D(int x) {
    int len = 8;
    for (int i = 0; i < len; ++i) {
        if (!(x >> i & 0x01))
            continue;
        else
            return 0;
    }
    return 1;
}

int main() {
    printf("%d\n", fun_A(0xffffffff));
    printf("%d\n", fun_B(0x00000000));
    printf("%d\n", fun_C(0x000000ff));
    printf("%d\n", fun_D(0x00000000));
    return 0;
}
