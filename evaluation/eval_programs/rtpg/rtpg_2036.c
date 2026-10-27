// RTPG_2036: vars=17 stmts=7
int idx_arr[16];
#include <stdlib.h>
void test_func(void) {
    int v40 = 61326;
    int tmp55 = 1034;
    int acc92 = 58;
    int a97 = 95;
    int cur86 = -31;
    int tmp36 = 2;
    int hi98 = 31;
    int lo36 = 1;
    int y39 = -49;
    int b85 = 3033;
    int acc32 = 2;
    int tmp3 = 18;
    int c93 = 38;
    int x35 = 10;
    int prev55 = 23;
    int acc62 = 6;
    int dat23 = 8;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = -27;
    int sv0 = 0;
    int h1 = -25;
    int sv1 = 0;
    int h2 = 28;
    int sv2 = 0;
    int h3 = 22;
    int sv3 = 0;
    int i;
    for (i = 0; i < 96; i++) {
        tmp55 = xn[idx_arr[i]];
        y39 = c93 - v40;
        tmp3 = acc32 + cur86;
        a97 = acc92 + cur86;
        acc92 = dat23 - hi98;
        acc62 = y39 + tmp3;
        x35 = dat23;
        acc32 = x35 * 2;
        darr[i] = tmp3;
    }
    free(darr);
}
int main() { test_func(); return 0; }

