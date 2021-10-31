#include <stdio.h>
#include "math.h"
#include "float.h"

/**
 * 浮点1 为 符号位 0 , 阶码 0 + 127 , 尾数 1 (0000..) 23 个0 , 最前面的 1 省略 , 既 0x3f800000 , 加上最小的让其不为1的数后结果是 0x3f800001 , 既 1 + 2^-23 ....
因此 flt_epsilon == 2^-23 ....

float尾数是23位
计算机表示为（1/2）^23 = 0。00000011920

这个其实就是一个定义，叫做机器-ε(machine epsilon)，表示1与大于的第一个（或最小）浮点数之差。
对单精度来说，这个差就是2^-23 ，也就是1.190928955078125-e7 约等于1.19092896-e7，对于双精度来说就是
2^-52，约等于2.2204460492503131e-016，这两个分别是FLT_EPSILON 和DBL_EPSILON
 */

#define POS_INFINITY 1.7976931348623158e+308 /* max value */
#define NEG_INFINITY -1.7976931348623158e+308 /* max value */
#define NEG_ZERO -2.2204460492503131e-016 // 最小的数：1.0+DBL_EPSILON != 1.0


int main() {
    printf("%lf\n", NEG_ZERO);
    printf("%lf\n", POS_INFINITY);
    printf("%lf", NEG_INFINITY);
    return 0;
}
