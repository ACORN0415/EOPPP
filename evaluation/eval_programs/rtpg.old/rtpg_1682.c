// RTPG_1682: vars=6 stmts=5
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int tmp64 = 4;
    int acc54 = -22;
    int z14 = 0;
    int res19 = 4;
    int lo54 = 27;
    int a83 = 28;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        res19 = xn[i];
        acc54 = acc54 - 2;
        acc54 = z14 - a83;
        acc54 = acc54;
        acc54 = tmp64;
        lo54 = lo54 - res19;
        darr[i] = z14;
        if (res19 == 47) {
        lo54 = z14;
        }
        yo[i] = tmp64;
    }
    free(darr);
}
int main() { test_func(); return 0; }

