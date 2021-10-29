#include <iostream>

int fun1(unsigned word) {
    return (int) ((word << 24) >> 24);
}

int fun2(unsigned word) {
    return ((int) word << 24) >> 24;
}

int main() {
    // 测试数据
    // 0x00000076  0x87654321 0x000000C9 0xEDCBA987
    std::cout << "0x00000076\t" << "fun1(w)\t" << fun1(0x00000076) << "\tfun2(w)\t" << fun2(0x00000076) << std::endl;
    std::cout << "0x87654321\t" << "fun1(w)\t" << fun1(0x87654321) << "\tfun2(w)\t" << fun2(0x87654321) << std::endl;
    std::cout << "0x000000C9\t" << "fun1(w)\t" << fun1(0x000000C9) << "\tfun2(w)\t" << fun2(0x000000C9) << std::endl;
    std::cout << "0xEDCBA987\t" << "fun1(w)\t" << fun1(0xEDCBA987) << "\tfun2(w)\t" << fun2(0xEDCBA987) << std::endl;
    return 0;
}
