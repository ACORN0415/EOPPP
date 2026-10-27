// RTPG_5403: vars=22 stmts=7
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int hi82 = 60050;
    int cnt48 = 4;
    int acc4 = 20;
    int a96 = 60;
    int cur24 = 11;
    int tmp95 = 0;
    int prev28 = -7;
    int hi16 = 4;
    int out87 = -3;
    int tmp46 = 8;
    int y58 = -33;
    int y51 = 2241;
    int acc93 = 46;
    int v50 = 10;
    int cnt24 = -12;
    int hi31 = 8;
    int tmp10 = 6;
    int cnt79 = 4;
    int z79 = 5;
    int cur65 = -48;
    int dat73 = 16;
    int out16 = 21935;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 46;
    int sv0 = 0;
    int h1 = 99;
    int sv1 = 0;
    int h2 = 13051;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        tmp10 = xn[i];
        cnt79 = cur24 - dat73;
        tmp10 = dat73 - 0;
        v50 = cur65 % dat73;
        out16 = dat73 - 29;
        z79 = out87 ^ cur65;
        v50 = cnt79 ^ cnt24;
        tmp46 = tmp95 * 5;
        darr[i] = cur65;
        yo[i] = v50;
    }
    free(darr);
}
int main() { test_func(); return 0; }

