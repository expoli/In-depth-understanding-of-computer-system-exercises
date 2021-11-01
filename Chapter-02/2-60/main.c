#include <stdio.h>

#define MAX_INDEX (sizeof (int )-1)
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

/**
 * 假设我们将一个 位的字中的字节从 0( 最低位）到 8-l( 最高位）编号。写出下面 函数的代
码，它会返回一个无符号值，其中参数 的字节 被替换成字节 b:
 * @return
 */
unsigned replace_byte(unsigned x, int i, unsigned char b) {
    if (0 <= i && i <= MAX_INDEX) {
        byte_pointer start = (byte_pointer) &x;
        start[MAX_INDEX - i] = b;
        return x;
    } else
        return 0;
}

int main() {
    show_int(0x12345678);
    show_int(replace_byte(0x12345678, 2, 0xAB));
    show_int(replace_byte(0x12345678, 0, 0xAB));
    return 0;
}
