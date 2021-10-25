#include <iostream>
#include "cmath"
#include "limits"

/**
 * 如果参数 x 和 y 相加不会产 生溢出，这个函数就返回 1。
 * @param x 第一个参数
 * @param t 第二个参数
 * @return 测试结果
 */
int tadd_ok(int x, int t);

int main() {
    std::cout << tadd_ok(INT32_MIN, 1) << std::endl;
    return 0;
}

int tadd_ok(int x, int y) {
    if (x > 0 and y > 0) {
        if (x + y < 0)
            return false;
        else
            return true;
    }
    if (x < 0 and y < 0) {
        if (x + y > 0)
            return false;
        else
            return true;
    }
    return true;
}
