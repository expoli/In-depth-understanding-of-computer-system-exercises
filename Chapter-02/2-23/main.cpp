#include <iostream>

/**
 * unsigned 数据大小为 4 个字节、即32位、此函数先按照无符号数进行移位操作
 * 左移添0、右移添0
 * @param word
 * @return
 */
int fun1(unsigned word) {
    return (int) ((word << 24) >> 24);
}

/**
 * unsigned 数据大小为 4 个字节、即32位、此函数先按照有符号数进行移位操作
 * 左移添0、右移与符号有关
 * @param word
 * @return
 */
int fun2(unsigned word) {
    return ((int) word << 24) >> 24;
}

int main() {
    // 测试数据
    // 0x00000076  0x87654321 0x000000C9 0xEDCBA987

    // 左移 24 位、剩下 0x76 符号位为0、所以结果一致
    // 0x00000076	fun1(w)	118	fun2(w)	118
    std::cout << "0x00000076\t" << "fun1(w)\t" << fun1(0x00000076) << "\tfun2(w)\t" << fun2(0x00000076) << std::endl;
    // 左移 24 位、剩下 0x21 符号位为0、所以结果一致
    // 0x87654321	fun1(w)	33	fun2(w)	33
    std::cout << "0x87654321\t" << "fun1(w)\t" << fun1(0x87654321) << "\tfun2(w)\t" << fun2(0x87654321) << std::endl;
    // 左移 24 位、剩下 0xC9 符号位为1、所以结果不一致
    // 0x000000C9	fun1(w)	201	fun2(w)	-55
    std::cout << "0x000000C9\t" << "fun1(w)\t" << fun1(0x000000C9) << "\tfun2(w)\t" << fun2(0x000000C9) << std::endl;
    // 左移 24 位、剩下 0x87 符号位为1、所以结果不一致
    // 0xEDCBA987	fun1(w)	135	fun2(w)	-121
    std::cout << "0xEDCBA987\t" << "fun1(w)\t" << fun1(0xEDCBA987) << "\tfun2(w)\t" << fun2(0xEDCBA987) << std::endl;
    return 0;
}
