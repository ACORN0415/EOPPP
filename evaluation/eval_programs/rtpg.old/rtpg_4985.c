// RTPG_4985: vars=4 stmts=4
#include <stdlib.h>
void test_func(void) {
    int res11 = -2;
    int cnt43 = 8;
    int cnt53 = 5;
    int out53 = 48009;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 65; i++) {
        cnt53 = res11 - cnt43;
        cnt53 = res11;
        cnt53 = cnt53;
        cnt43 = cnt43 - cnt53;
        darr[i] = out53;
        if (cnt53 >= -31) {
        out53 = out53 + res11;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

