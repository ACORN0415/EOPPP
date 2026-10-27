// RTPG_1762: vars=7 stmts=5
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int hi79 = 48;
    int lo14 = 5;
    int lo17 = 49;
    int cnt53 = 83;
    int out50 = -14;
    int cnt56 = 62;
    int c80 = 42361;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        out50 = xn[i];
        out50 = out50 - out50;
        lo17 = lo17 + 1;
        hi79 = c80 - out50;
        lo17 = hi79 + hi79;
        lo17 = hi79;
        darr[i] = c80;
        if (cnt53 != 69) {
        lo17 = out50;
        }
        yo[i] = lo14;
    }
    free(darr);
}
int main() { test_func(); return 0; }

