// RTPG_6826: vars=8 stmts=12
#include <stdlib.h>
void test_func(void) {
    int lo80 = 28681;
    int x20 = 6;
    int y23 = 8;
    int cur57 = 24506;
    int x78 = 3;
    int sum72 = 7;
    int tmp51 = 53440;
    int cnt91 = 13;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        cnt91 = y23 + x20;
        tmp51 = tmp51 + 5;
        lo80 = x20 - 14;
        cnt91 = cnt91 + 1;
        cur57 = sum72 ^ cnt91;
        x78 = x20 / lo80;
        y23 = cur57 + x20;
        cnt91 = x20 + x78;
        x78 = x78 + 4;
        lo80 = x78 & sum72;
        cur57 = cnt91 / x78;
        x20 = x20 | y23;
        darr[i] = x78;
    }
    free(darr);
}
int main() { test_func(); return 0; }

