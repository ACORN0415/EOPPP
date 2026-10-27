// RTPG_968: vars=10 stmts=5
int xn[64];
int yo[64];
int idx_arr[64];
#include <stdlib.h>
void test_func(void) {
    int hi57 = 1;
    int v87 = 8;
    int tmp88 = 7;
    int cur61 = -27;
    int z1 = 57;
    int a55 = -10;
    int res50 = 70;
    int lo20 = 9;
    int b65 = 2573;
    int sum29 = 2;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 25166;
    int sv0 = 0;
    int h1 = 10066;
    int sv1 = 0;
    int h2 = 31;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        lo20 = xn[i];
        cur61 = xn[idx_arr[i]];
        res50 = hi57 * 6;
        sum29 = sum29 - 3;
        res50 = z1;
        sum29 = sum29 * 98;
        hi57 = sum29;
        darr[i] = lo20;
        if (lo20 == -45) {
        tmp88 = sum29 + cur61;
        }
        yo[i] = cur61;
    }
    free(darr);
}
int main() { test_func(); return 0; }

