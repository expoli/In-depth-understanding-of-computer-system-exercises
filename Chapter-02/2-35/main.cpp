#include <iostream>

/**
 * Determine whether arguments can be multiplied without overflow
 * @param x
 * @param y
 * @return
 */
int tmult_ok(int x, int y) {
    int p = x * y;
    /**
     * Either x is zero, or dividing p by x gives y
     */
    return !x || p / x == y;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
