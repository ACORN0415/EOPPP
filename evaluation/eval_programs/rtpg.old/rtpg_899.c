// RTPG_899: vars=11 stmts=6
int xn[64];
int yo[64];
int idx_arr[64];
#include <stdlib.h>
void test_func(void) {
    int x37 = 10;
    int lo72 = 6;
    int z36 = 8;
    int lo94 = 31317;
    int b35 = 90;
    int c31 = 8;
    int z79 = -46;
    int sum9 = 6;
    int y62 = 1;
    int out59 = 8;
    int a84 = 55894;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        c31 = xn[i];
        lo94 = xn[idx_arr[i]];
        a84 = c31;
        z36 = lo94 - z36;
        c31 = a84;
        y62 = b35 - lo72;
        y62 = z36;
        b35 = y62 + 6;
        darr[i] = c31;
        if (lo94 >= -19) {
        z36 = z36 + 3;
        }
        yo[i] = lo72;
    }
    free(darr);
}
int main() { test_func(); return 0; }

