// RTPG_5257: vars=12 stmts=6
#include <stdlib.h>
void test_func(void) {
    int v11 = 0;
    int cnt78 = 55019;
    int x91 = 64663;
    int res0 = 10;
    int y86 = 55;
    int a74 = 40591;
    int c12 = 43;
    int acc76 = 8;
    int dat67 = 6;
    int c52 = 7;
    int acc71 = -12;
    int out19 = 50;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 73; i++) {
        c52 = out19 + x91;
        x91 = a74;
        c12 = y86 - 2;
        y86 = acc71 - out19;
        a74 = a74 + 2;
        acc76 = v11;
        darr[i] = c52;
        if (dat67 >= 10) {
        res0 = out19 - c52;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

