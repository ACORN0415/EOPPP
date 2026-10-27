// RTPG_5559: vars=9 stmts=5
#include <stdlib.h>
void test_func(void) {
    int acc55 = 49095;
    int lo17 = 25390;
    int dat50 = 4;
    int z66 = 3;
    int acc38 = 42;
    int cnt62 = 0;
    int tmp3 = 52656;
    int tmp4 = 55;
    int tmp73 = 15;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = -29;
    int sv0 = 0;
    int h1 = 48495;
    int sv1 = 0;
    int h2 = 63748;
    int sv2 = 0;
    int h3 = 14;
    int sv3 = 0;
    int i;
    for (i = 0; i < 45; i++) {
        tmp3 = tmp3 - 1;
        cnt62 = cnt62 + 4;
        z66 = acc55 - tmp3;
        dat50 = tmp3 - acc38;
        acc55 = z66 * 7;
        darr[i] = tmp73;
    }
    free(darr);
}
int main() { test_func(); return 0; }

