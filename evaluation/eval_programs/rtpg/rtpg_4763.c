// RTPG_4763: vars=6 stmts=5
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int val60 = 2;
    int acc3 = 2;
    int y99 = 4;
    int y93 = 9;
    int hi26 = 33;
    int x33 = 6;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        y93 = xn[i];
        acc3 = y93 - 92;
        hi26 = hi26 ^ x33;
        val60 = val60 + 1;
        val60 = acc3 + val60;
        x33 = y99 + -4;
        darr[i] = x33;
        if (y99 == 73) {
        y93 = val60 - y93;
        }
        yo[i] = y99;
    }
    free(darr);
}
int main() { test_func(); return 0; }

