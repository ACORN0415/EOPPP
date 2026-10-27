// RTPG_256: vars=9 stmts=5
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int cnt5 = 21635;
    int val56 = 8;
    int a13 = 2;
    int v10 = 45;
    int c40 = 51778;
    int x17 = 82;
    int z44 = 8;
    int dat1 = 35;
    int x32 = -49;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        a13 = xn[i];
        v10 = v10 - 1;
        x17 = x17 - 2;
        x32 = c40;
        dat1 = dat1;
        z44 = dat1 + 4;
        darr[i] = dat1;
        if (dat1 == 70) {
        x32 = z44 - 6;
        }
        yo[i] = cnt5;
    }
    free(darr);
}
int main() { test_func(); return 0; }

