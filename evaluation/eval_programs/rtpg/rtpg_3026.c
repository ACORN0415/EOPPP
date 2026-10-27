// RTPG_3026: vars=8 stmts=10
#include <stdlib.h>
void test_func(void) {
    int prev99 = 26085;
    int tmp91 = 5712;
    int out83 = 48;
    int a52 = 17979;
    int out66 = 58;
    int out33 = 40;
    int val24 = 24;
    int val74 = 22115;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 98; i++) {
        out33 = val24 - tmp91;
        out33 = out83 - a52;
        tmp91 = val24 + tmp91;
        prev99 = out83 + out33;
        tmp91 = tmp91 - 5;
        tmp91 = a52;
        a52 = a52;
        val24 = val24 + prev99;
        a52 = prev99 - 53107;
        tmp91 = out33 + out83;
        darr[i] = prev99;
        if (prev99 < 51) {
        tmp91 = out33 - out66;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

