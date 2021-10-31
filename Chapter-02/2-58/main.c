#include <stdio.h>

typedef unsigned char *byte_pointer;

/**
 * 编写过程 is_little_endian 当在小端法机器上编译和运行时返回 1，在大端法机器上编译运行
时则返回 0。这个程序应该可以运行在任何机器上，无论机器的字长是多少。
 考虑到可以在任何字长的机器上运行、所以选取10为要判断的int数值，保证范围的可用性。
 * @return
 */
int is_little_endian() {
    int x = 10;
    unsigned char *start = (byte_pointer) &x;
    unsigned char flag = start[0];
    if (flag == (char) 10)
        return 1;
    return 0;
}

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

int main() {
    printf("%d", is_little_endian());
    show_int(10);
    return 0;
}
