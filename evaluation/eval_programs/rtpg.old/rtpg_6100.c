// RTPG_6100: vars=6 stmts=2
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int res38 = 8;
    int out21 = 8;
    int res72 = 91;
    int dat91 = 44;
    int x58 = 30;
    int hi19 = 43;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        dat91 = xn[i];
        out21 = res72 - dat91;
        hi19 = x58 + 35382;
        darr[i] = dat91;
        yo[i] = out21;
    }
    free(darr);
}
int main() { test_func(); return 0; }

