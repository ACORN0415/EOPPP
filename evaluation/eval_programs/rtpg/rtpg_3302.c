// RTPG_3302: vars=7 stmts=3
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int hi99 = 4;
    int z90 = 17;
    int hi28 = 4;
    int lo99 = 62694;
    int val70 = 8;
    int out99 = 47716;
    int dat98 = 39;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        hi99 = xn[i];
        hi99 = hi99 + -37;
        hi28 = lo99 + z90;
        dat98 = out99 - hi28;
        darr[i] = z90;
        yo[i] = dat98;
    }
    free(darr);
}
int main() { test_func(); return 0; }

