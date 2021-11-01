#include <stdio.h>

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
*    10 32 54 76
     00 32 54 76
     ef 00 00 00
     ef 32 54 76
 * @return
 */
int main() {
    int x = 0x89abcdef;
    int y = 0x76543210;
    show_int(y);
    show_int(y & 0xffffff00);
    show_int(x & 0xff);
    show_int((y & 0xffffff00) | (x & 0xff));
    return 0;
}
