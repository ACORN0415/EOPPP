// RTPG_6023: vars=5 stmts=5
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int sum2 = 68;
    int sum71 = -48;
    int cnt34 = 18;
    int res98 = -39;
    int c83 = 67;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        res98 = xn[i];
        sum71 = sum2 - 59404;
        cnt34 = res98;
        sum71 = sum71 + sum2;
        c83 = res98 - cnt34;
        cnt34 = c83 % sum71;
        darr[i] = res98;
        if (sum2 <= 31) {
        sum2 = cnt34 - 10;
        }
        yo[i] = c83;
    }
    free(darr);
}
int main() { test_func(); return 0; }

