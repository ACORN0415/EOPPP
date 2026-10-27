// RTPG_940: vars=10 stmts=8
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int out69 = 57764;
    int cur31 = 7;
    int lo44 = 10;
    int z19 = 2;
    int prev17 = 27;
    int cnt36 = 12;
    int b22 = 2;
    int res8 = -17;
    int out98 = -13;
    int tmp50 = -29;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        cnt36 = xn[i];
        cur31 = out69;
        b22 = tmp50;
        out98 = out98;
        cur31 = cur31 - prev17;
        prev17 = out69;
        cnt36 = cnt36 - 3;
        res8 = out98 + lo44;
        lo44 = cur31 + lo44;
        darr[i] = res8;
        yo[i] = out69;
    }
    free(darr);
}
int main() { test_func(); return 0; }

