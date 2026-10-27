// RTPG_257: vars=9 stmts=5
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int v10 = 21635;
    int x32 = 8;
    int a13 = 2;
    int cnt5 = 45;
    int dat1 = 51778;
    int x17 = 82;
    int val56 = 8;
    int c40 = 35;
    int z44 = -49;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        a13 = xn[i];
        cnt5 = cnt5 - 1;
        x17 = x17 - 2;
        z44 = dat1;
        c40 = c40;
        val56 = c40 + 4;
        darr[i] = c40;
        if (c40 == 70) {
        z44 = val56 - 6;
        }
        yo[i] = v10;
    }
    free(darr);
}
int main() { test_func(); return 0; }

