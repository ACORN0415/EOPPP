// RTPG_5617: vars=10 stmts=11
#include <stdlib.h>
void test_func(void) {
    int dat57 = 0;
    int lo75 = 90;
    int cnt32 = 18436;
    int z78 = 9;
    int lo87 = -41;
    int y50 = 33;
    int val75 = 18;
    int b50 = 44807;
    int res46 = 9;
    int c82 = 64;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        res46 = b50 - c82;
        z78 = cnt32 - z78;
        lo75 = lo87 - c82;
        b50 = lo75;
        lo87 = lo87 + 5;
        z78 = res46 - val75;
        lo87 = cnt32 + b50;
        lo75 = y50 + val75;
        lo75 = val75 - b50;
        lo75 = lo75 - 4;
        lo75 = lo75 + 3;
        darr[i] = dat57;
    }
    free(darr);
}
int main() { test_func(); return 0; }

