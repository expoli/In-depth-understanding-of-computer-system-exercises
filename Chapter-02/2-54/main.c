#include <stdio.h>
#include "limits.h"
#include "float.h"

/**
 * 小范围转换为大范围、再转换为小范围
 * 不损失精度
 * @param x
 * @return
 */
int fun_A(int x) {
    return x == (int) (double) x;
}

/**
 * int 转换为 float 可能会损失精度（发生舍入）但是不会溢出
 * @param x
 * @return
 */
int fun_B(int x) {
    return x == (int) (float) x;
}

/**
 * 高范围转换为低范围溢出、损失精度
 * @param d
 * @return
 */
int fun_C(double d) {
    return d == (double) (float) d;
}

/**
 * 不会损失精度
 * @param f
 * @return
 */
int fun_D(float f) {
    return f == (float) (double) f;
}

/**
 * 只调整符号位、不会损失精度
 * @param f
 * @return
 */
int fun_E(float f) {
    return f == -(-f);
}

/**
 * 隐形类型转换、不会损失精度
 * @return
 */
int fun_F() {
    return 1.0 / 2 == 1 / 2.0;
}

/**
 * 溢出不关符号位的事情
 * @param d
 * @return
 */
int fun_G(double d) {
    return d * d >= 0.0;
}

/**
 * 隐性类型转换、精度不损失
 * @param f
 * @param d
 * @return
 */
int fun_H(float f, double d) {
    return (f + d) - f == d;
}

int main() {
    printf("A: %d\n", fun_A(INT_MAX));
    printf("B: %d\n", fun_B(INT_MAX));
    printf("C: %d\n", fun_C(1.7976931348623158e+308));
    printf("D: %d\n", fun_D(FLT_MAX));
    printf("E: %d\n", fun_E(FLT_MAX));
    printf("F: %d\n", fun_F());
    printf("G: %d\n", fun_G(DBL_MAX));
    printf("H: %d", fun_H(FLT_MAX, DBL_MAX));

    return 0;
}
