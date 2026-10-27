// RTPG_7743: vars=10 stmts=2
int idx_arr[64];
#include <stdlib.h>
void test_func(void) {
    int cur96 = 17;
    int lo40 = 3;
    int z4 = 72;
    int res28 = 4;
    int res25 = 21545;
    int x24 = 49;
    int sum50 = 63;
    int dat95 = 37;
    int lo70 = 82;
    int z27 = 21;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        lo70 = xn[idx_arr[i]];
        dat95 = cur96 - 10820;
        res28 = res28 - 2;
        darr[i] = dat95;
        if (z4 <= 43) {
        x24 = z4 + res25;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

