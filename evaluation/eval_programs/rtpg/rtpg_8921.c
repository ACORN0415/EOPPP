// RTPG_8921: vars=8 stmts=6
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int v20 = 8;
    int b78 = 60;
    int dat57 = -39;
    int dat75 = 12;
    int c59 = 67;
    int sum71 = 92;
    int out86 = 15465;
    int x75 = 39398;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        c59 = xn[i];
        v20 = sum71;
        dat57 = b78 + dat57;
        sum71 = dat57;
        b78 = out86 + dat57;
        dat75 = c59 - 86;
        b78 = b78 + 2;
        darr[i] = dat57;
        yo[i] = b78;
    }
    free(darr);
}
int main() { test_func(); return 0; }

