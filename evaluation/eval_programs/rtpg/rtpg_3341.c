// RTPG_3341: vars=12 stmts=6
#include <stdlib.h>
void test_func(void) {
    int y85 = 2;
    int lo0 = 47;
    int res2 = 9;
    int v21 = -14;
    int b88 = 95;
    int prev47 = -50;
    int a6 = 4;
    int val48 = 56934;
    int cnt75 = 47098;
    int out59 = 28;
    int v73 = 34498;
    int tmp38 = 88;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 3;
    int sv0 = 0;
    int h1 = 40;
    int sv1 = 0;
    int h2 = 27;
    int sv2 = 0;
    int h3 = 7;
    int sv3 = 0;
    int i;
    for (i = 0; i < 35; i++) {
        b88 = cnt75 | lo0;
        b88 = res2 | v73;
        a6 = tmp38 ^ v21;
        lo0 = b88 * 39;
        prev47 = a6 * 4;
        cnt75 = val48 - out59;
        darr[i] = prev47;
        if (lo0 > 39134) goto done;
    }
done:
    v73 = 0;
    free(darr);
}
int main() { test_func(); return 0; }

