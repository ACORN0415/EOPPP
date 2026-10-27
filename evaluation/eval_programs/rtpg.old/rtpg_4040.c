// RTPG_4040: vars=5 stmts=3
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int lo72 = 1;
    int x27 = 0;
    int hi22 = 13755;
    int c53 = 40;
    int sum36 = 0;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        x27 = xn[i];
        c53 = c53 + x27;
        hi22 = c53 + -38;
        hi22 = sum36 - x27;
        darr[i] = x27;
        if (sum36 > 72) {
        lo72 = sum36 + hi22;
        }
        yo[i] = c53;
    }
    free(darr);
}
int main() { test_func(); return 0; }

