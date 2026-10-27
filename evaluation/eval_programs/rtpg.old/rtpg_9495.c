// RTPG_9495: vars=19 stmts=3
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int cnt84 = -43;
    int v52 = 0;
    int hi58 = 6;
    int a93 = 2;
    int cur49 = 8;
    int c35 = -18;
    int tmp85 = 43;
    int prev73 = 10;
    int res61 = 5;
    int sum63 = 6;
    int cnt93 = 58980;
    int out86 = 48875;
    int sum19 = 24;
    int cur66 = -48;
    int cur91 = 10;
    int acc43 = 7;
    int cnt91 = 60;
    int b99 = 4;
    int hi56 = 9;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        acc43 = xn[i];
        a93 = hi58 - acc43;
        hi58 = cur66 + a93;
        cur49 = acc43 + a93;
        darr[i] = cur66;
        yo[i] = tmp85;
    }
    free(darr);
}
int main() { test_func(); return 0; }

