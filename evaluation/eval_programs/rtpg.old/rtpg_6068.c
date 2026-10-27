// RTPG_6068: vars=3 stmts=2
int xn[64];
int yo[64];
int idx_arr[64];
#include <stdlib.h>
void test_func(void) {
    int val60 = 5;
    int prev27 = 8;
    int dat33 = 57025;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        prev27 = xn[i];
        prev27 = xn[idx_arr[i]];
        val60 = val60 + 2;
        prev27 = val60 - dat33;
        darr[i] = val60;
        yo[i] = val60;
    }
    free(darr);
}
int main() { test_func(); return 0; }

