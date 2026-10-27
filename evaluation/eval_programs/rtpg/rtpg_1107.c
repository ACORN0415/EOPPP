// RTPG_1107: vars=3 stmts=11
#include <stdlib.h>
void test_func(void) {
    int v64 = 65454;
    int c0 = 77;
    int val29 = 76;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 61; i++) {
        val29 = c0 - v64;
        v64 = v64 + v64;
        val29 = v64;
        c0 = c0 + v64;
        val29 = val29 + 2;
        val29 = v64;
        v64 = c0 - v64;
        val29 = val29 - 1;
        val29 = val29 + 3;
        val29 = val29 + 5;
        c0 = v64;
        darr[i] = c0;
        if (v64 > 46) {
        val29 = c0 - v64;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

