// RTPG_1515: vars=9 stmts=6
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int y75 = -47;
    int val92 = 95;
    int b8 = 6;
    int val64 = 48272;
    int y93 = 92;
    int a12 = -13;
    int prev41 = 50;
    int y45 = -9;
    int x75 = 1;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 93; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        y45 = y75 + b8;
        val92 = val64 - val92;
        x75 = y93 + y93;
        val64 = prev41 + y93;
        b8 = a12 - y93;
        y75 = prev41 - y93;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

