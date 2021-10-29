#include <iostream>
#include <cstring>

/**
 * Determine whether string s is longer than string t
 * WARNING: This function is buggy
 * Prototype for library function strlen
 * size_t strlen(const char *s)
 * size_t's type is unsigned int
 * @param s
 * @param t
 * @return
 */
int strlonger(char *s, char *t) {
    return strlen(s) - strlen(t) > 0;
}

/**
 * strlonger function tester'
 * when the first param's length is bigger than the second param's length, this function's result will wrong.
 * @return
 */
int main() {
    char *str1 = "1234";
    char *str2 = "123";
    std::cout << strlonger(str1, str2) << std::endl;
    std::cout << strlonger(str2, str1) << std::endl;
    return 0;
}
