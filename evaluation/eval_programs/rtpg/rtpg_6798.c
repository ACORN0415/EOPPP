// RTPG_6798: vars=9 stmts=11
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int c72 = 3;
    int dat50 = 4;
    int prev53 = 64;
    int x56 = -49;
    int a9 = 31284;
    int c84 = 8;
    int a53 = 5;
    int sum28 = 84;
    int y89 = 38;
    int *ptr = &y89;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        a9 = xn[i];
        c84 = c72 - 86;
        sum28 = c72 + x56;
        sum28 = a9;
        y89 = y89 + 4;
        x56 = a53 - dat50;
        c72 = y89 / a9;
        a53 = dat50 - c84;
        a9 = y89 + dat50;
        y89 = sum28 + dat50;
        y89 = sum28 ^ c72;
        dat50 = y89 - a9;
        *ptr = *ptr + 3;
        darr[i] = prev53;
        yo[i] = a53;
    }
    free(darr);
}
int main() { test_func(); return 0; }

