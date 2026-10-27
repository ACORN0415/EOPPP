// RTPG_3607: vars=8 stmts=6
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int prev40 = 8;
    int val43 = 10;
    int b39 = -21;
    int acc89 = 33363;
    int prev47 = 48;
    int z96 = 11;
    int x96 = 20;
    int cur87 = 7273;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        prev47 = xn[i];
        x96 = cur87;
        cur87 = cur87 + 2;
        b39 = b39 - 2;
        prev47 = prev47 + 4;
        acc89 = acc89 - 2;
        prev40 = prev40 - z96;
        darr[i] = b39;
        yo[i] = prev47;
    }
    free(darr);
}
int main() { test_func(); return 0; }

