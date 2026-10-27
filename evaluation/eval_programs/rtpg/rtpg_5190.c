// RTPG_5190: vars=13 stmts=8
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int val15 = 0;
    int cur78 = 18;
    int hi58 = 96;
    int sum18 = 19;
    int a12 = -40;
    int out40 = 10;
    int cnt84 = 18;
    int lo67 = 35;
    int cnt62 = 8;
    int hi74 = 48948;
    int res60 = 1;
    int tmp42 = 53493;
    int x22 = 54;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        hi74 = xn[i];
        tmp42 = x22;
        tmp42 = out40 + cnt62;
        tmp42 = val15 + x22;
        lo67 = res60;
        res60 = sum18 + 20;
        val15 = a12 - cur78;
        tmp42 = hi58 + cnt84;
        cnt84 = out40 - res60;
        darr[i] = out40;
        yo[i] = out40;
    }
    free(darr);
}
int main() { test_func(); return 0; }

