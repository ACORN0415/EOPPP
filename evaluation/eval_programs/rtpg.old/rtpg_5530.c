// RTPG_5530: vars=10 stmts=11
#include <stdlib.h>
void test_func(void) {
    int lo75 = 0;
    int y50 = 90;
    int dat57 = 18436;
    int z78 = 9;
    int c82 = -41;
    int lo87 = 33;
    int cnt32 = 18;
    int res46 = 44807;
    int val75 = 9;
    int b50 = 64;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        val75 = res46 - b50;
        z78 = dat57 - z78;
        y50 = c82 - b50;
        res46 = y50;
        c82 = c82 + 5;
        z78 = val75 - cnt32;
        c82 = dat57 + res46;
        y50 = lo87 + cnt32;
        y50 = cnt32 - res46;
        y50 = y50 - 4;
        y50 = y50 + 3;
        darr[i] = lo75;
    }
    free(darr);
}
int main() { test_func(); return 0; }

