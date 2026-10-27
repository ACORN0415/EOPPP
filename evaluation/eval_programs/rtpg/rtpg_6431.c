// RTPG_6431: vars=7 stmts=5
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int c44 = 76;
    int hi83 = 28;
    int x21 = 1;
    int tmp88 = 22;
    int c40 = 35623;
    int lo36 = 25732;
    int c28 = -36;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        hi83 = xn[i];
        hi83 = x21 + 72;
        c40 = c40 - 4;
        hi83 = hi83 + lo36;
        tmp88 = tmp88 - -19;
        hi83 = c28;
        darr[i] = c28;
        if (c28 < 57) {
        c40 = c40 - 4;
        }
        yo[i] = c28;
    }
    free(darr);
}
int main() { test_func(); return 0; }

