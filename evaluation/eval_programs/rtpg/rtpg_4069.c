// RTPG_4069: vars=5 stmts=3
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int c53 = 1;
    int lo72 = 0;
    int sum36 = 13755;
    int x27 = 40;
    int hi22 = 0;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        lo72 = xn[i];
        x27 = x27 + lo72;
        sum36 = x27 + -38;
        sum36 = hi22 - lo72;
        darr[i] = lo72;
        if (hi22 > 72) {
        c53 = hi22 + sum36;
        }
        yo[i] = x27;
    }
    free(darr);
}
int main() { test_func(); return 0; }

