// RTPG_4921: vars=9 stmts=2
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int acc46 = 10;
    int val49 = 1;
    int b69 = 8;
    int res41 = 76;
    int res58 = -14;
    int dat29 = 323;
    int v14 = 60;
    int cnt33 = 9;
    int tmp95 = 3;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        tmp95 = xn[i];
        res58 = tmp95 - 1;
        res58 = res58 - res41;
        darr[i] = dat29;
        yo[i] = cnt33;
    }
    free(darr);
}
int main() { test_func(); return 0; }

