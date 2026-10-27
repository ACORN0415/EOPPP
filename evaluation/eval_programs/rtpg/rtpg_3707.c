// RTPG_3707: vars=4 stmts=5
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int lo35 = -7;
    int x98 = 59979;
    int c89 = 17;
    int val50 = 2;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        lo35 = xn[i];
        lo35 = x98 - c89;
        val50 = c89 + val50;
        c89 = lo35;
        c89 = c89;
        x98 = val50 + lo35;
        darr[i] = val50;
        yo[i] = x98;
    }
    free(darr);
}
int main() { test_func(); return 0; }

