// RTPG_3204: vars=4 stmts=8
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int lo94 = 31603;
    int acc71 = 63752;
    int out45 = 14700;
    int c32 = 35;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        acc71 = xn[i];
        lo94 = acc71 - 4;
        c32 = c32 + 1;
        lo94 = lo94 - acc71;
        acc71 = acc71 - lo94;
        lo94 = lo94 + 9;
        c32 = out45 + 56225;
        lo94 = lo94;
        lo94 = lo94 - 5;
        darr[i] = lo94;
        yo[i] = c32;
    }
    free(darr);
}
int main() { test_func(); return 0; }

