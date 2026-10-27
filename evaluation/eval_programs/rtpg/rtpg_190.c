// RTPG_190: vars=6 stmts=7
int xn[64];
int yo[64];
int idx_arr[64];
#include <stdlib.h>
void test_func(void) {
    int y58 = 23787;
    int tmp46 = 3;
    int out19 = 51163;
    int cnt46 = -37;
    int x85 = -29;
    int prev3 = 5;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        prev3 = xn[i];
        x85 = xn[idx_arr[i]];
        x85 = out19 - 41743;
        out19 = cnt46;
        out19 = tmp46 - 10;
        y58 = y58 + 5;
        prev3 = y58;
        tmp46 = cnt46 + tmp46;
        prev3 = tmp46;
        darr[i] = y58;
        yo[i] = tmp46;
    }
    free(darr);
}
int main() { test_func(); return 0; }

