// RTPG_3068: vars=9 stmts=3
int idx_arr[16];
#include <stdlib.h>
void test_func(void) {
    int a95 = 24;
    int c45 = -16;
    int res84 = 4;
    int y12 = 12;
    int cur41 = 86;
    int val84 = 6;
    int lo42 = 25;
    int cur12 = 64;
    int y53 = 16;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 74;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int h2 = 60;
    int sv2 = 0;
    int h3 = -5;
    int sv3 = 0;
    int i;
    for (i = 0; i < 43; i++) {
        cur41 = xn[idx_arr[i]];
        res84 = res84;
        y12 = c45 * 25;
        cur41 = c45 + a95;
        darr[i] = a95;
        if (lo42 < 99) {
        a95 = lo42 - val84;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

