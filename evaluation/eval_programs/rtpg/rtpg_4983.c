// RTPG_4983: vars=9 stmts=2
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int val49 = 10;
    int res58 = 1;
    int dat29 = 8;
    int b69 = 76;
    int res41 = -14;
    int v14 = 323;
    int tmp95 = 60;
    int acc46 = 9;
    int cnt33 = 3;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        cnt33 = xn[i];
        res41 = cnt33 - 1;
        res41 = res41 - b69;
        darr[i] = v14;
        yo[i] = acc46;
    }
    free(darr);
}
int main() { test_func(); return 0; }

