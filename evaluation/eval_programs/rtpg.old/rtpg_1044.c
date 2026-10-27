// RTPG_1044: vars=6 stmts=7
int idx_arr[16];
#include <stdlib.h>
void test_func(void) {
    int y66 = 17320;
    int acc11 = 0;
    int res23 = 22;
    int a52 = 5;
    int x87 = 8837;
    int res35 = 52;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 56; i++) {
        a52 = xn[idx_arr[i]];
        x87 = x87 - 4;
        x87 = a52 - 32;
        a52 = y66 - x87;
        acc11 = res23 - res23;
        x87 = x87;
        a52 = a52 + 2;
        x87 = res23 - y66;
        darr[i] = res35;
    }
    free(darr);
}
int main() { test_func(); return 0; }

