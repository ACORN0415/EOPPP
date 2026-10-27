// RTPG_4419: vars=4 stmts=5
#include <stdlib.h>
void test_func(void) {
    int y66 = 8;
    int hi5 = 61;
    int res35 = 78;
    int prev62 = 12190;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 45078;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 63; i++) {
        hi5 = hi5;
        hi5 = hi5 - 3;
        res35 = hi5 * 75;
        prev62 = res35 * 19;
        hi5 = prev62 * 40;
        darr[i] = hi5;
    }
    free(darr);
}
int main() { test_func(); return 0; }

