#include <stdio.h>
#include "limits.h"

//
///**
// * all value is true
// * 0 2147483647 1 1
// * (x - 1) < 0 ?
// * @param x
// * @return
// */
int fun_A(int x) {
    printf("%d ", x > 0);
    printf("%d ", x - 1);
    printf("%d ", (x - 1) < 0);
    return (x > 0) || x - 1 < 0;
}
//
///**
// * all value is true
// * @param x
// * @return
// */
//int fun_B(int x) {
////    printf("%x ", (x & 7));
////    printf("%d ", (x & 7) != 7);
////    printf("%x ", (x << 29));
////    printf("%x ", (x << 29 < 0));
//    return (x & 7) != 7 || (x << 29 < 0);
//}
//
//int fun_C(int x) {
//    printf("%d", x * x);
//    return (x * x) >= 0;
//}
//
//int fun_D(int x) {
//    return x < 0 || -x <= 0;
//}
//
//int fun_E(int x) {
//    return x > 0 || -x >= 0;
//}
//
//int fun_F(int x, int y, unsigned ux, unsigned uy) {
//    return x + y == ux + uy;
//}
//
//int fun_G(int x, int y, unsigned ux, unsigned uy) {
//    return x * ~y + uy * ux == -x;
//}

int main() {
//    int x = 0;
//    int y = 0;
//    unsigned ux = x;
//    unsigned uy = y;


    /**
     * all value is true
     * but 0 2147483647 1 1
     */
//    for (int i = INT_MIN; i < INT_MAX; i++) {
//        if (fun_A(i))
//            continue;
//        else
//            printf("%d ", i);
//    }
//    printf("%d\n", fun_A(INT_MAX));
    fun_A(INT_MIN);
    /**
     * all value is true
     */
//    for (int i = INT_MIN; i < INT_MAX; i++) {
//        if (fun_B(i))
//            continue;
//        else
//            printf("%d ", i);
//    }
//    printf("%d\n", fun_B(INT_MAX));
    /**
     * all value is true
     */
//    for (int i = INT_MIN; i < INT_MAX; i++) {
//        if (fun_C(i))
//            continue;
//        else
//            printf("%d ", i);
//    }
//    printf("%d\n", fun_C(INT_MAX));
    return 0;
}
