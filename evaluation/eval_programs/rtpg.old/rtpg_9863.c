// RTPG_9863: vars=6 stmts=2
int idx_arr[64];
#include <stdlib.h>
void test_func(void) {
    int lo1 = 22;
    int b82 = -35;
    int tmp20 = 16459;
    int hi2 = 32817;
    int val16 = 3;
    int b98 = 40;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 56; i++) {
        lo1 = xn[idx_arr[i]];
        b82 = hi2 - 2;
        b82 = lo1 + val16;
        darr[i] = val16;
    }
    free(darr);
}
int main() { test_func(); return 0; }

