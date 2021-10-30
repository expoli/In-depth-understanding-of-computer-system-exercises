#include <stdio.h>
#include <utils.h>
#include "limits.h"

/**
 * Illustration of code vulnerability similar to that found in
 * Sun's XDR library
 * @param ele_src
 * @param ele_cnt
 * @param ele_size
 * @return
 */

void *copy_elements(void *ele_src[], int ele_cnt, size_t ele_size) {
    /**
     * Allocate buffer for ele_cnt objects, each of ele_size bytes
     * and copy from locations designated by ele_src
     */
    // buggy code
    // void *result = malloc(ele_cnt * ele_size);
    u_int64_t asize = ele_cnt * (u_int64_t) ele_size;
    /**
     * Check the malloc mem space size.
     */
    void *result = NULL;
    if (asize > ULONG_MAX);
    else
        result = malloc(asize);
    if (result == NULL)
        /*
         * malloc failed
         */
        return NULL;
    void *next = result;
    int i;
    for (i = 0; i < ele_cnt; i++) {
        /*
         * Copy object i to destination
         */
        memcpy(next, ele_src[i], ele_size);
        /*
         * Move pointer to next memory region
         */
        next += ele_size;
    }
    return result;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
