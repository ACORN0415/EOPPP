// RTPG_4738: vars=8 stmts=11
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int prev33 = 26;
    int res83 = -44;
    int c98 = -22;
    int res14 = 48;
    int cnt94 = 0;
    int cnt43 = 4;
    int dat93 = 9;
    int out50 = 98;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        res83 = xn[i];
        res83 = cnt94 - dat93;
        prev33 = cnt94 - res14;
        res14 = cnt94 % dat93;
        res14 = prev33 - 42050;
        out50 = out50 - 4;
        out50 = out50 - 5;
        cnt43 = res83;
        c98 = res14 ^ out50;
        res14 = dat93 - dat93;
        c98 = out50 % prev33;
        res14 = dat93 - dat93;
        darr[i] = res14;
        yo[i] = cnt43;
    }
    free(darr);
}
int main() { test_func(); return 0; }

