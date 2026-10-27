// RTPG_5177: vars=11 stmts=2
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int tmp0 = 8;
    int b72 = 2;
    int z22 = 7;
    int cnt27 = 65;
    int a37 = 54695;
    int a6 = 57;
    int cnt22 = 15;
    int cur61 = 7;
    int x97 = 20206;
    int sum10 = 9;
    int y56 = 45;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        sum10 = xn[i];
        a37 = a37 + 5;
        cnt27 = b72;
        darr[i] = cnt22;
        if (cnt27 < 36) {
        cnt27 = y56;
        }
        yo[i] = y56;
    }
    free(darr);
}
int main() { test_func(); return 0; }

