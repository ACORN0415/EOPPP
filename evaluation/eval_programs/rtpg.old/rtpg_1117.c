// RTPG_1117: vars=10 stmts=4
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int cur60 = 5;
    int cnt40 = 7;
    int a25 = 10;
    int cur69 = 8;
    int out30 = 17732;
    int hi99 = -42;
    int acc3 = 2;
    int cnt45 = 0;
    int y7 = 1;
    int res96 = 5;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        hi99 = xn[i];
        cur69 = y7 - 65;
        y7 = cur60 & y7;
        cur60 = out30;
        res96 = cur69;
        darr[i] = cnt45;
        yo[i] = res96;
    }
    free(darr);
}
int main() { test_func(); return 0; }

