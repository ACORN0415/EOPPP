// RTPG_6718: vars=9 stmts=11
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int x56 = 3;
    int a9 = 4;
    int prev53 = 64;
    int c72 = -49;
    int y89 = 31284;
    int sum28 = 8;
    int dat50 = 5;
    int c84 = 84;
    int a53 = 38;
    int *ptr = &a53;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        y89 = xn[i];
        sum28 = x56 - 86;
        c84 = x56 + c72;
        c84 = y89;
        a53 = a53 + 4;
        c72 = dat50 - a9;
        x56 = a53 / y89;
        dat50 = a9 - sum28;
        y89 = a53 + a9;
        a53 = c84 + a9;
        y89 = c84 / a53;
        a9 = a53 - y89;
        *ptr = *ptr + 3;
        darr[i] = prev53;
        yo[i] = dat50;
    }
    free(darr);
}
int main() { test_func(); return 0; }

