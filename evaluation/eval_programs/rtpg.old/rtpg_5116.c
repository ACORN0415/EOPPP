// RTPG_5116: vars=11 stmts=2
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int sum10 = 8;
    int a6 = 2;
    int y56 = 7;
    int a37 = 65;
    int cur61 = 54695;
    int b72 = 57;
    int cnt27 = 15;
    int x97 = 7;
    int tmp0 = 20206;
    int z22 = 9;
    int cnt22 = 45;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        z22 = xn[i];
        cur61 = cur61 + 5;
        a37 = a6;
        darr[i] = cnt27;
        if (a37 < 36) {
        a37 = cnt22;
        }
        yo[i] = cnt22;
    }
    free(darr);
}
int main() { test_func(); return 0; }

