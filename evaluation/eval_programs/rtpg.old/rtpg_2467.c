// RTPG_2467: vars=22 stmts=3
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int b9 = 0;
    int sum0 = 6;
    int out67 = 34;
    int x17 = -16;
    int tmp35 = 6;
    int prev52 = 2;
    int sum37 = 2;
    int z61 = 3;
    int a26 = 43;
    int prev71 = 87;
    int b14 = 36871;
    int c1 = 18;
    int lo54 = 2;
    int x46 = 4;
    int lo10 = 85;
    int c66 = 59;
    int lo18 = 56526;
    int y99 = 11;
    int out8 = 2;
    int v3 = 36;
    int cur76 = 78;
    int x88 = 49;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        sum37 = xn[i];
        lo10 = v3;
        c1 = z61 - sum37;
        c66 = v3;
        darr[i] = c66;
        yo[i] = v3;
    }
    free(darr);
}
int main() { test_func(); return 0; }

