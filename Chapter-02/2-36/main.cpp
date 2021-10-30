#include <iostream>

/**
 * 对于数据类型 int 为 32 位的情况，设计一个版本的 tmult_ok 函数（练习题2.35）
 * 使用 64 位精度的数据类型 int64_t ，而不使用除法。
 * @param x
 * @param y
 * @return
 */
int tmult_ok(int x, int y) {
    int64_t result = (int64_t) x * (int64_t) y;
    if (result > INT32_MAX)
        return false;
    if (result < INT32_MIN)
        return false;
    return true;
}

int main() {
    std::cout << tmult_ok(INT32_MAX, 2) << std::endl;
    std::cout << tmult_ok(INT32_MAX, 6) << std::endl;
    std::cout << tmult_ok(INT32_MAX, -1) << std::endl;
    return 0;
}
