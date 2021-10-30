#include <stdio.h>

#define M 31
#define N 8

int arith(int x, int y) {
    int result = 0;
    result = x * M + y / N;
    return result;
}

/**
 * 我们以某个M和N的值编译这段代码。编译器用我们讨论过的方法优化乘法和除法。
 * 下面是将产生出的机器代码翻译回C语言的结果
 * @param x
 * @param y
 * @return
 */
int optarith(int x, int y) {
    int t = x;
    // * 2^5 32
    x <<= 5;
    // -x
    // * 31
    x -= t;
    if (y < 0)
        y += 7;
    // 8
    y >>= 3;
    return x + y;
}

int main() {
    printf("%d\n", arith(1, 1));
    printf("%d\n", optarith(1, 1));
    return 0;
}
