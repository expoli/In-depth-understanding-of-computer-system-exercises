#include <iostream>

/**
 * WARNING: This is buggy code
 * when length = 0
 * @param a
 * @param length
 * @return
 */
float sum_elements(const float a[], unsigned length) {
    int i;
    float result = 0;

    for (i = 0; i <= length - 1; i++)
        result += a[i];
    return result;
}

int main() {
    float a[5] = {1, 2, 3, 4, 5};
    std::cout << "1:\t" << sum_elements(a, 1) << std::endl;
    std::cout << "5:\t" << sum_elements(a, 5) << std::endl;
    std::cout << "0:\t" << sum_elements(a, 0) << std::endl;
    return 0;
}
