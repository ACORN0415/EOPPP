// RTPG_7655: vars=7 stmts=2
int idx_arr[32];
#include <stdlib.h>
void test_func(void) {
    int v59 = 0;
    int dat68 = 55269;
    int prev27 = 10;
    int z77 = 31873;
    int out90 = 5;
    int res21 = 0;
    int prev87 = 58565;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 55; i++) {
        out90 = xn[idx_arr[i]];
        v59 = v59 + 14209;
        z77 = prev27 - res21;
        darr[i] = v59;
    }
    free(darr);
}
int main() { test_func(); return 0; }

