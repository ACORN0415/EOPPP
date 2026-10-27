// RTPG_8024: vars=9 stmts=4
int xn[16];
int yo[16];
int idx_arr[16];
#include <stdlib.h>
void test_func(void) {
    int prev96 = 61988;
    int res23 = 10;
    int c94 = 2;
    int lo32 = 50;
    int z82 = 15456;
    int tmp73 = 35349;
    int val58 = 3031;
    int v82 = 1;
    int cnt37 = 46;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        tmp73 = xn[i];
        prev96 = xn[idx_arr[i]];
        tmp73 = res23 - prev96;
        res23 = res23 - 3;
        lo32 = lo32 - 1;
        v82 = res23 - prev96;
        darr[i] = c94;
        if (val58 >= -46) {
        tmp73 = val58;
        }
        yo[i] = cnt37;
    }
    free(darr);
}
int main() { test_func(); return 0; }

