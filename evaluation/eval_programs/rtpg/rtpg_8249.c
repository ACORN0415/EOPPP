// RTPG_8249: vars=8 stmts=2
int xn[32];
int yo[32];
int idx_arr[32];
#include <stdlib.h>
void test_func(void) {
    int c79 = 7;
    int b21 = 0;
    int cnt64 = 9;
    int cur84 = 45;
    int cur79 = 73;
    int prev16 = 7;
    int cnt49 = 26906;
    int out88 = 4;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        prev16 = xn[i];
        cnt64 = xn[idx_arr[i]];
        cur79 = prev16 - c79;
        cur84 = cur84 + 4;
        darr[i] = cnt64;
        yo[i] = c79;
    }
    free(darr);
}
int main() { test_func(); return 0; }

