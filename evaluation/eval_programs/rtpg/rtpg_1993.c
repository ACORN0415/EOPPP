// RTPG_1993: vars=7 stmts=3
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int v31 = 9;
    int acc99 = 52;
    int tmp90 = 55;
    int a19 = 32952;
    int v80 = -37;
    int tmp93 = 2;
    int hi42 = 28;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        tmp93 = xn[i];
        a19 = v80;
        a19 = a19 - 4;
        v80 = v80 + 3;
        darr[i] = v80;
        if (a19 == -9) {
        acc99 = tmp93 - -9;
        }
        yo[i] = a19;
    }
    free(darr);
}
int main() { test_func(); return 0; }

