// RTPG_3668: vars=3 stmts=4
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int acc69 = 59319;
    int acc65 = 1;
    int lo52 = 3;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        lo52 = xn[i];
        lo52 = acc69 - acc65;
        acc65 = acc69 + lo52;
        lo52 = acc65 + acc69;
        acc69 = acc69 + lo52;
        darr[i] = acc69;
        yo[i] = acc69;
    }
    free(darr);
}
int main() { test_func(); return 0; }

