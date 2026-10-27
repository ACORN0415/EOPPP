// RTPG_2594: vars=7 stmts=2
int idx_arr[32];
#include <stdlib.h>
void test_func(void) {
    double out74 = 65.38;
    int val26 = 63;
    int cur82 = 46564;
    int z58 = 72;
    int hi76 = 6939;
    int b73 = 35868;
    int lo2 = 1;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 43; i++) {
        out74 = xn[idx_arr[i]];
        out74 = lo2 | cur82;
        val26 = cur82 & out74;
        darr[i] = b73;
    }
    free(darr);
}
int main() { test_func(); return 0; }

