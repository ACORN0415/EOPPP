// RTPG_4476: vars=4 stmts=5
#include <stdlib.h>
void test_func(void) {
    int hi5 = 8;
    int y66 = 61;
    int prev62 = 78;
    int res35 = 12190;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 45078;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 63; i++) {
        y66 = y66;
        y66 = y66 - 3;
        prev62 = y66 * 75;
        res35 = prev62 * 19;
        y66 = res35 * 40;
        darr[i] = y66;
    }
    free(darr);
}
int main() { test_func(); return 0; }

