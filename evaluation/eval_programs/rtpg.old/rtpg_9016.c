// RTPG_9016: vars=6 stmts=3
int xn[16];
int yo[16];
int idx_arr[16];
#include <stdlib.h>
void test_func(void) {
    int sum97 = 6;
    int y70 = 17;
    int c14 = 4;
    int cnt71 = 27401;
    int out91 = 13;
    int val80 = 94;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        out91 = xn[i];
        cnt71 = xn[idx_arr[i]];
        y70 = c14 - 8961;
        cnt71 = cnt71 + 1;
        c14 = out91;
        darr[i] = val80;
        yo[i] = y70;
    }
    free(darr);
}
int main() { test_func(); return 0; }

