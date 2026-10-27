// RTPG_8090: vars=7 stmts=5
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int x41 = 1;
    int val8 = 9850;
    int c91 = 5;
    int res2 = 16;
    int x17 = 7;
    int sum9 = -48;
    int prev22 = -7;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        x41 = xn[i];
        sum9 = sum9 + 1;
        res2 = res2 - 4;
        prev22 = sum9 + -9;
        val8 = sum9 - x17;
        x17 = x17 + -25;
        darr[i] = val8;
        yo[i] = sum9;
    }
    free(darr);
}
int main() { test_func(); return 0; }

