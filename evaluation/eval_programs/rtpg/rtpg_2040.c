// RTPG_2040: vars=6 stmts=4
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int val11 = 9;
    int c52 = 12;
    int val38 = 13095;
    int dat73 = 7;
    int z13 = 4;
    int a83 = 9;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        c52 = xn[i];
        a83 = a83 + 40;
        val11 = val11 + z13;
        val38 = val11 + z13;
        val11 = a83;
        darr[i] = val11;
        if (a83 >= -42) {
        val38 = val38 + 2;
        }
        yo[i] = c52;
    }
    free(darr);
}
int main() { test_func(); return 0; }

