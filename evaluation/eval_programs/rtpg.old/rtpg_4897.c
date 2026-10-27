// RTPG_4897: vars=8 stmts=8
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int v61 = 0;
    int cnt99 = 51;
    int tmp34 = 81;
    int x38 = -26;
    int lo93 = 48;
    int prev92 = 22783;
    int acc18 = 6;
    int val83 = 50;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        x38 = xn[i];
        x38 = prev92 + tmp34;
        tmp34 = prev92;
        tmp34 = tmp34 - 10;
        cnt99 = prev92 - 38;
        prev92 = val83;
        v61 = acc18 - 42;
        val83 = x38;
        acc18 = val83 + acc18;
        darr[i] = tmp34;
        if (lo93 < -32) {
        tmp34 = lo93 - 41978;
        }
        yo[i] = x38;
    }
    free(darr);
}
int main() { test_func(); return 0; }

