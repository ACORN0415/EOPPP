// RTPG_9692: vars=19 stmts=3
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int hi56 = -43;
    int cnt93 = 0;
    int tmp85 = 6;
    int cnt91 = 2;
    int cnt84 = 8;
    int b99 = -18;
    int cur91 = 43;
    int hi58 = 10;
    int cur49 = 5;
    int prev73 = 6;
    int cur66 = 58980;
    int out86 = 48875;
    int res61 = 24;
    int sum19 = -48;
    int sum63 = 10;
    int v52 = 7;
    int acc43 = 60;
    int c35 = 4;
    int a93 = 9;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        v52 = xn[i];
        cnt91 = tmp85 - v52;
        tmp85 = sum19 + cnt91;
        cnt84 = v52 + cnt91;
        darr[i] = sum19;
        yo[i] = cur91;
    }
    free(darr);
}
int main() { test_func(); return 0; }

