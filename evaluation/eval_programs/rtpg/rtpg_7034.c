// RTPG_7034: vars=17 stmts=4
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int dat24 = 5037;
    int val40 = 80;
    int z42 = 0;
    int out29 = 23945;
    int y6 = -48;
    int hi4 = 50;
    int z17 = 63;
    int out85 = 3097;
    int tmp91 = 3;
    int out42 = 63408;
    int cnt93 = 57440;
    int x92 = 2;
    int tmp3 = 0;
    int b30 = 7;
    int lo57 = 23;
    int lo81 = 29201;
    int cnt6 = 10;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 51476;
    int sv0 = 0;
    int h1 = 32;
    int sv1 = 0;
    int h2 = 9;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        x92 = xn[i];
        tmp91 = lo81 + y6;
        tmp3 = tmp3 * 96;
        b30 = b30 + 2;
        cnt93 = cnt93 + 1;
        darr[i] = z42;
        if (lo81 != 74) {
        val40 = lo57 + x92;
        }
        yo[i] = tmp3;
    }
    free(darr);
}
int main() { test_func(); return 0; }

