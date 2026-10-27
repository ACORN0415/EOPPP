// RTPG_2638: vars=4 stmts=4
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int prev97 = 90;
    int res37 = 24667;
    int dat5 = 63;
    int cur34 = 56420;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 81;
    int sv0 = 0;
    int h1 = 13;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        res37 = xn[i];
        prev97 = res37;
        prev97 = res37 - -32;
        res37 = dat5;
        res37 = res37;
        darr[i] = dat5;
        yo[i] = prev97;
    }
    free(darr);
}
int main() { test_func(); return 0; }

