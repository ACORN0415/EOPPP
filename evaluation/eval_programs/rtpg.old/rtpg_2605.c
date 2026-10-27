// RTPG_2605: vars=7 stmts=2
int idx_arr[32];
#include <stdlib.h>
void test_func(void) {
    double hi76 = 65.38;
    int z58 = 63;
    int b73 = 46564;
    int cur82 = 72;
    int val26 = 6939;
    int out74 = 35868;
    int lo2 = 1;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 43; i++) {
        hi76 = xn[idx_arr[i]];
        hi76 = lo2 | b73;
        z58 = b73 & hi76;
        darr[i] = out74;
    }
    free(darr);
}
int main() { test_func(); return 0; }

